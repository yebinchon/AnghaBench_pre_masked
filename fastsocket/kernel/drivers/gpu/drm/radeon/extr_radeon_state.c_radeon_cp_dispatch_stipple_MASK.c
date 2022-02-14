
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {int * dev_private; } ;
typedef int drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct drm_device * VAR_3, u32 * VAR_4)
{
 drm_radeon_private_t *VAR_5 = VAR_3->dev_private;
 int VAR_6;
 VAR_2;
 FUNC_4("\n");

 FUNC_1(35);

 FUNC_5(FUNC_2(VAR_0, 0));
 FUNC_5(0x00000000);

 FUNC_5(FUNC_3(VAR_1, 31));
 for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
  FUNC_5(VAR_4[VAR_6]);
 }

 FUNC_0();
}
