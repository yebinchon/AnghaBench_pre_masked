
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nouveau_pm_tbl_entry {int tRP; int tRAS; int tRFC; int tRC; int tWR; int tWTR; int tCL; int tRRD; int tRCDWR; int tRCDRD; } ;
struct nouveau_pm_memtiming {int* reg; int tCWL; int id; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct nouveau_drm*,char*,int ,int,int,int) ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;

__attribute__((used)) static int
FUNC_2(struct drm_device *VAR_0, u32 VAR_1,
       struct nouveau_pm_tbl_entry *VAR_2, u8 VAR_3,
       struct nouveau_pm_memtiming *VAR_4,
       struct nouveau_pm_memtiming *VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_1(VAR_0);

 VAR_5->reg[0] = (VAR_2->tRP << 24 | VAR_2->tRAS << 16 | VAR_2->tRFC << 8 | VAR_2->tRC);



 VAR_5->reg[1] = (VAR_2->tWR + 2 + (VAR_5->tCWL - 1)) << 24 |
      1 << 16 |
      (VAR_2->tWTR + 2 + (VAR_5->tCWL - 1)) << 8 |
      (VAR_2->tCL + 2 - (VAR_5->tCWL - 1));

 VAR_5->reg[2] = 0x20200000 |
      ((VAR_5->tCWL - 1) << 24 |
       VAR_2->tRRD << 16 |
       VAR_2->tRCDWR << 8 |
       VAR_2->tRCDRD);

 FUNC_0(VAR_6, "Entry %d: 220: %08x %08x %08x\n", VAR_5->id,
   VAR_5->reg[0], VAR_5->reg[1], VAR_5->reg[2]);
 return 0;
}
