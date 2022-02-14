
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_intel_overlay_attrs {int gamma0; int gamma1; int gamma2; int gamma3; int gamma4; int gamma5; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct drm_intel_overlay_attrs *VAR_1)
{
 if (!FUNC_1(0, VAR_1->gamma0) ||
     !FUNC_1(VAR_1->gamma0, VAR_1->gamma1) ||
     !FUNC_1(VAR_1->gamma1, VAR_1->gamma2) ||
     !FUNC_1(VAR_1->gamma2, VAR_1->gamma3) ||
     !FUNC_1(VAR_1->gamma3, VAR_1->gamma4) ||
     !FUNC_1(VAR_1->gamma4, VAR_1->gamma5) ||
     !FUNC_1(VAR_1->gamma5, 0x00ffffff))
  return -VAR_0;

 if (!FUNC_0(VAR_1->gamma5))
  return -VAR_0;

 return 0;
}
