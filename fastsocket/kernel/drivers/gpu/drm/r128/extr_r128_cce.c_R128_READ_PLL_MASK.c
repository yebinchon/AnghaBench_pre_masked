
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int * dev_private; } ;
typedef int drm_r128_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_2, int VAR_3)
{
 drm_r128_private_t *VAR_4 = VAR_2->dev_private;

 FUNC_1(VAR_1, VAR_3 & 0x1f);
 return FUNC_0(VAR_0);
}
