
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct drm_device {int pdev; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_3)
{
 u16 VAR_4 = 0;

 FUNC_0(VAR_3->pdev, VAR_0, &VAR_4);

 if (VAR_4 & VAR_2)
  return 133000;
 else {
  switch (VAR_4 & VAR_1) {
  case 128:
   return 333000;
  default:
  case 129:
   return 190000;
  }
 }
}
