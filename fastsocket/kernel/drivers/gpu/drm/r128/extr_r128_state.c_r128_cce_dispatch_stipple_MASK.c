
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {int * dev_private; } ;
typedef int drm_r128_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_2, u32 *VAR_3)
{
 drm_r128_private_t *VAR_4 = VAR_2->dev_private;
 int VAR_5;
 VAR_1;
 FUNC_3("\n");

 FUNC_1(33);

 FUNC_4(FUNC_2(VAR_0, 31));
 for (VAR_5 = 0; VAR_5 < 32; VAR_5++)
  FUNC_4(VAR_3[VAR_5]);

 FUNC_0();
}
