
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int * dev_private; } ;
typedef int drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct drm_device*) ;

void
FUNC_7(struct drm_device *VAR_8)
{
 drm_radeon_private_t *VAR_9 = VAR_8->dev_private;
 VAR_7;
 FUNC_4("\n");

 FUNC_1(5);
 FUNC_5(FUNC_3(VAR_1, 0));
 FUNC_5(VAR_0);

 FUNC_5(FUNC_3(VAR_2, 1));
 FUNC_5((VAR_4 - VAR_3) >> 2);
 FUNC_5(VAR_5 | VAR_6);

 FUNC_0();
 FUNC_2();

 FUNC_6(VAR_8);
}
