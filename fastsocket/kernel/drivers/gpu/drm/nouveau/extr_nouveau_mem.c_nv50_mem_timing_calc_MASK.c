
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8 ;
typedef int u32 ;
struct nouveau_pm_tbl_entry {int tUNK_21; int tUNK_20; int tCWL; int tUNK_18; int tRP; int tRAS; int tRFC; int tRC; int tWR; int tWTR; int tRRD; int tRCDWR; int tRCDRD; int tUNK_13; int tCL; } ;
struct nouveau_pm_memtiming {int tCWL; int* reg; int id; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct nouveau_fb {TYPE_1__ ram; } ;
struct nouveau_drm {int dummy; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct bit_entry {int version; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*,int,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct drm_device*,char,struct bit_entry*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 struct nouveau_device* FUNC_4 (struct drm_device*) ;
 struct nouveau_drm* FUNC_5 (struct drm_device*) ;
 struct nouveau_fb* FUNC_6 (struct nouveau_device*) ;

__attribute__((used)) static int
FUNC_7(struct drm_device *VAR_2, u32 VAR_3,
       struct nouveau_pm_tbl_entry *VAR_4, u8 VAR_5,
       struct nouveau_pm_memtiming *VAR_6,
       struct nouveau_pm_memtiming *VAR_7)
{
 struct nouveau_device *VAR_8 = FUNC_4(VAR_2);
 struct nouveau_fb *VAR_9 = FUNC_6(VAR_8);
 struct nouveau_drm *VAR_10 = FUNC_5(VAR_2);
 struct bit_entry VAR_11;
 uint8_t VAR_12 = 1, VAR_13 = 0, VAR_14 = 0, VAR_15;

 if (FUNC_1(VAR_2, 'P', &VAR_11))
  return -VAR_0;

 switch (FUNC_3(VAR_5, (u8) 22)) {
 case 22:
  VAR_14 = VAR_4->tUNK_21;
 case 21:
  VAR_13 = VAR_4->tUNK_20;
 case 20:
  if (VAR_4->tCWL > 0)
   VAR_7->tCWL = VAR_4->tCWL;
 case 19:
  VAR_12 = VAR_4->tUNK_18;
  break;
 }

 VAR_7->reg[0] = (VAR_4->tRP << 24 | VAR_4->tRAS << 16 | VAR_4->tRFC << 8 | VAR_4->tRC);

 VAR_7->reg[1] = (VAR_4->tWR + 2 + (VAR_7->tCWL - 1)) << 24 |
    FUNC_2(VAR_12, (u8) 1) << 16 |
    (VAR_4->tWTR + 2 + (VAR_7->tCWL - 1)) << 8;

 VAR_7->reg[2] = ((VAR_7->tCWL - 1) << 24 |
      VAR_4->tRRD << 16 |
      VAR_4->tRCDWR << 8 |
      VAR_4->tRCDRD);

 VAR_7->reg[4] = VAR_4->tUNK_13 << 8 | VAR_4->tUNK_13;

 VAR_7->reg[5] = (VAR_4->tRFC << 24 | FUNC_2(VAR_4->tRCDRD, VAR_4->tRCDWR) << 16 | VAR_4->tRP);

 VAR_7->reg[8] = VAR_6->reg[8] & 0xffffff00;

 if (VAR_11.version == 1) {
  VAR_7->reg[1] |= (VAR_4->tCL + 2 - (VAR_7->tCWL - 1));

  VAR_7->reg[3] = (0x14 + VAR_4->tCL) << 24 |
       0x16 << 16 |
       (VAR_4->tCL - 1) << 8 |
       (VAR_4->tCL - 1);

  VAR_7->reg[4] |= VAR_6->reg[4] & 0xffff0000;

  VAR_7->reg[6] = (0x33 - VAR_7->tCWL) << 16 |
       VAR_7->tCWL << 8 |
       (0x2e + VAR_4->tCL - VAR_7->tCWL);

  VAR_7->reg[7] = 0x4000202 | (VAR_4->tCL - 1) << 16;


  if (VAR_9->ram.type == VAR_1) {
   VAR_7->reg[5] |= (VAR_4->tCL + 3) << 8;
   VAR_7->reg[6] |= (VAR_7->tCWL - 2) << 8;
   VAR_7->reg[8] |= (VAR_4->tCL - 4);
  } else {
   VAR_7->reg[5] |= (VAR_4->tCL + 2) << 8;
   VAR_7->reg[6] |= VAR_7->tCWL << 8;
   VAR_7->reg[8] |= (VAR_4->tCL - 2);
  }
 } else {
  VAR_7->reg[1] |= (5 + VAR_4->tCL - (VAR_7->tCWL));


  VAR_7->reg[3] = (0x30 + VAR_4->tCL) << 24 |
       (VAR_6->reg[3] & 0x00ff0000)|
       (0xb + VAR_4->tCL) << 8 |
       (VAR_4->tCL - 1);

  VAR_7->reg[4] |= (VAR_13 << 24 | VAR_14 << 16);


  VAR_7->reg[5] |= (VAR_7->tCWL + 6) << 8;

  VAR_7->reg[6] = (0x5a + VAR_4->tCL) << 16 |
       (6 - VAR_4->tCL + VAR_7->tCWL) << 8 |
       (0x50 + VAR_4->tCL - VAR_7->tCWL);

  VAR_15 = (VAR_6->reg[7] & 0xff000000) >> 24;
  VAR_7->reg[7] = (VAR_15 << 24) |
       ((VAR_15 - 6 + VAR_4->tCL) << 16) |
       0x202;
 }

 FUNC_0(VAR_10, "Entry %d: 220: %08x %08x %08x %08x\n", VAR_7->id,
   VAR_7->reg[0], VAR_7->reg[1], VAR_7->reg[2], VAR_7->reg[3]);
 FUNC_0(VAR_10, "         230: %08x %08x %08x %08x\n",
   VAR_7->reg[4], VAR_7->reg[5], VAR_7->reg[6], VAR_7->reg[7]);
 FUNC_0(VAR_10, "         240: %08x\n", VAR_7->reg[8]);
 return 0;
}
