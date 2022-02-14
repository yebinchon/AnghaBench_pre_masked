
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nouveau_pm_tbl_entry {scalar_t__ tCWL; int tRP; int tRAS; int tRFC; int tRC; int tRCDWR; int tRCDRD; int tCL; int tWR; int tWTR; int tUNK_20; int tUNK_21; int tUNK_13; int tRRD; } ;
struct nouveau_pm_memtiming {scalar_t__ tCWL; int* reg; int id; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct nouveau_drm*,char*,int,...) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;

__attribute__((used)) static int
FUNC_2(struct drm_device *VAR_0, u32 VAR_1,
       struct nouveau_pm_tbl_entry *VAR_2, u8 VAR_3,
       struct nouveau_pm_memtiming *VAR_4,
       struct nouveau_pm_memtiming *VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_1(VAR_0);

 if (VAR_2->tCWL > 0)
  VAR_5->tCWL = VAR_2->tCWL;

 VAR_5->reg[0] = (VAR_2->tRP << 24 | (VAR_2->tRAS & 0x7f) << 17 |
       VAR_2->tRFC << 8 | VAR_2->tRC);

 VAR_5->reg[1] = (VAR_4->reg[1] & 0xff000000) |
      (VAR_2->tRCDWR & 0x0f) << 20 |
      (VAR_2->tRCDRD & 0x0f) << 14 |
      (VAR_5->tCWL << 7) |
      (VAR_2->tCL & 0x0f);

 VAR_5->reg[2] = (VAR_4->reg[2] & 0xff0000ff) |
      VAR_2->tWR << 16 | VAR_2->tWTR << 8;

 VAR_5->reg[3] = (VAR_2->tUNK_20 & 0x1f) << 9 |
      (VAR_2->tUNK_21 & 0xf) << 5 |
      (VAR_2->tUNK_13 & 0x1f);

 VAR_5->reg[4] = (VAR_4->reg[4] & 0xfff00fff) |
      (VAR_2->tRRD&0x1f) << 15;

 FUNC_0(VAR_6, "Entry %d: 290: %08x %08x %08x %08x\n", VAR_5->id,
   VAR_5->reg[0], VAR_5->reg[1], VAR_5->reg[2], VAR_5->reg[3]);
 FUNC_0(VAR_6, "         2a0: %08x\n", VAR_5->reg[4]);
 return 0;
}
