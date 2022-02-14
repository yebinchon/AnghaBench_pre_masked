
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_mast {int dummy; } ;
struct nv50_disp {int sync; } ;
struct nouveau_device {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct nv50_mast*) ;
 int FUNC_2 (int *,int,int) ;
 int VAR_2 ;
 int * FUNC_3 (struct nv50_mast*,int) ;
 int FUNC_4 (int ,int,int) ;
 struct nouveau_device* FUNC_5 (struct drm_device*) ;
 struct nv50_disp* FUNC_6 (struct drm_device*) ;
 struct nv50_mast* FUNC_7 (struct drm_device*) ;
 scalar_t__ FUNC_8 (struct nouveau_device*,int ,int ) ;

__attribute__((used)) static int
FUNC_9(struct drm_device *VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_5(VAR_3);
 struct nv50_disp *VAR_5 = FUNC_6(VAR_3);
 struct nv50_mast *VAR_6 = FUNC_7(VAR_3);
 u32 *VAR_7 = FUNC_3(VAR_6, 8);
 if (VAR_7) {
  FUNC_4(VAR_5->sync, VAR_1, 0x00000000);
  FUNC_2(VAR_7, 0x0084, 1);
  FUNC_0(VAR_7, 0x80000000 | VAR_1);
  FUNC_2(VAR_7, 0x0080, 2);
  FUNC_0(VAR_7, 0x00000000);
  FUNC_0(VAR_7, 0x00000000);
  FUNC_1(VAR_7, VAR_6);
  if (FUNC_8(VAR_4, VAR_2, VAR_5->sync))
   return 0;
 }

 return -VAR_0;
}
