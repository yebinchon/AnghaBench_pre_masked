
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nv40_pm_state {int npll_coef; int npll_ctrl; int spll; int ctrl; int mpll_ctrl; int mpll_coef; } ;
struct nouveau_fifo {int (* start ) (struct nouveau_fifo*,unsigned long*) ;int (* pause ) (struct nouveau_fifo*,unsigned long*) ;} ;
struct nouveau_drm {int device; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;
struct bit_entry {int * data; } ;
struct TYPE_2__ {int chipset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*,char,struct bit_entry*) ;
 int FUNC_2 (struct nv40_pm_state*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct drm_device*,int ,int *,int ) ;
 struct nouveau_device* FUNC_5 (struct drm_device*) ;
 struct nouveau_drm* FUNC_6 (struct drm_device*) ;
 struct nouveau_fifo* FUNC_7 (struct nouveau_device*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (struct nouveau_device*,int,int,int) ;
 int FUNC_10 (struct nouveau_device*,int) ;
 scalar_t__ FUNC_11 (struct nouveau_device*,int) ;
 int FUNC_12 (struct nouveau_device*,int,int,int) ;
 int FUNC_13 (struct nouveau_device*,int ,struct drm_device*) ;
 int FUNC_14 (struct nouveau_device*,int,int) ;
 int FUNC_15 (struct nouveau_device*,int,int) ;
 int FUNC_16 (struct nouveau_fifo*,unsigned long*) ;
 int FUNC_17 (struct nouveau_fifo*,unsigned long*) ;
 int FUNC_18 (int) ;

int
FUNC_19(struct drm_device *VAR_2, void *VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_5(VAR_2);
 struct nouveau_fifo *VAR_5 = FUNC_7(VAR_4);
 struct nouveau_drm *VAR_6 = FUNC_6(VAR_2);
 struct nv40_pm_state *VAR_7 = VAR_3;
 unsigned long VAR_8;
 struct bit_entry VAR_9;
 u32 VAR_10 = 0;
 u8 VAR_11[2];
 int VAR_12, VAR_13 = -VAR_0;


 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  u32 VAR_14 = FUNC_11(VAR_4, 0x600808 + (VAR_12 * 0x2000));
  u32 VAR_15 = 0;
  do {
   if (VAR_14 != FUNC_11(VAR_4, 0x600808 + (VAR_12 * 0x2000))) {
    FUNC_14(VAR_4, 0x0c03c4 + (VAR_12 * 0x2000), 0x01);
    VAR_11[VAR_12] = FUNC_10(VAR_4, 0x0c03c5 + (VAR_12 * 0x2000));
    if (!(VAR_11[VAR_12] & 0x20))
     VAR_10 |= (1 << VAR_12);
    break;
   }
   FUNC_18(1);
  } while (VAR_15++ < 32);
 }


 VAR_5->pause(VAR_5, &VAR_8);

 if (!FUNC_13(VAR_4, VAR_1, VAR_2))
  goto resume;

 VAR_13 = 0;


 FUNC_9(VAR_4, 0x00c040, 0x00000333, 0x00000000);
 FUNC_15(VAR_4, 0x004004, VAR_7->npll_coef);
 FUNC_9(VAR_4, 0x004000, 0xc0070100, VAR_7->npll_ctrl);
 FUNC_9(VAR_4, 0x004008, 0xc007ffff, VAR_7->spll);
 FUNC_3(5);
 FUNC_9(VAR_4, 0x00c040, 0x00000333, VAR_7->ctrl);

 if (!VAR_7->mpll_ctrl)
  goto resume;


 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  if (!(VAR_10 & (1 << VAR_12)))
   continue;
  FUNC_12(VAR_4, 0x600808 + (VAR_12 * 0x2000), 0x00010000, 0x00000000);
  FUNC_12(VAR_4, 0x600808 + (VAR_12 * 0x2000), 0x00010000, 0x00010000);
  FUNC_14(VAR_4, 0x0c03c4 + (VAR_12 * 0x2000), 0x01);
  FUNC_14(VAR_4, 0x0c03c5 + (VAR_12 * 0x2000), VAR_11[VAR_12] | 0x20);
 }


 FUNC_15(VAR_4, 0x1002d4, 0x00000001);
 FUNC_15(VAR_4, 0x1002d0, 0x00000001);
 FUNC_15(VAR_4, 0x1002d0, 0x00000001);
 FUNC_9(VAR_4, 0x100210, 0x80000000, 0x00000000);
 FUNC_15(VAR_4, 0x1002dc, 0x00000001);


 FUNC_9(VAR_4, 0x00c040, 0x0000c000, 0x00000000);
 switch (FUNC_8(VAR_6->device)->chipset) {
 case 0x40:
 case 0x45:
 case 0x41:
 case 0x42:
 case 0x47:
  FUNC_9(VAR_4, 0x004044, 0xc0771100, VAR_7->mpll_ctrl);
  FUNC_9(VAR_4, 0x00402c, 0xc0771100, VAR_7->mpll_ctrl);
  FUNC_15(VAR_4, 0x004048, VAR_7->mpll_coef);
  FUNC_15(VAR_4, 0x004030, VAR_7->mpll_coef);
 case 0x43:
 case 0x49:
 case 0x4b:
  FUNC_9(VAR_4, 0x004038, 0xc0771100, VAR_7->mpll_ctrl);
  FUNC_15(VAR_4, 0x00403c, VAR_7->mpll_coef);
 default:
  FUNC_9(VAR_4, 0x004020, 0xc0771100, VAR_7->mpll_ctrl);
  FUNC_15(VAR_4, 0x004024, VAR_7->mpll_coef);
  break;
 }
 FUNC_18(100);
 FUNC_9(VAR_4, 0x00c040, 0x0000c000, 0x0000c000);


 FUNC_15(VAR_4, 0x1002dc, 0x00000000);
 FUNC_9(VAR_4, 0x100210, 0x80000000, 0x80000000);
 FUNC_18(100);


 if (!FUNC_1(VAR_2, 'M', &VAR_9))
  FUNC_4(VAR_2, FUNC_0(VAR_9.data[0]), ((void*)0), 0);




 for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
  if (!(VAR_10 & (1 << VAR_12)))
   continue;
  FUNC_12(VAR_4, 0x600808 + (VAR_12 * 0x2000), 0x00010000, 0x00010000);
  FUNC_14(VAR_4, 0x0c03c4 + (VAR_12 * 0x2000), 0x01);
  FUNC_14(VAR_4, 0x0c03c5 + (VAR_12 * 0x2000), VAR_11[VAR_12]);
 }


resume:
 VAR_5->start(VAR_5, &VAR_8);
 FUNC_2(VAR_7);
 return VAR_13;
}
