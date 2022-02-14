
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float rot_angle_x; float rot_angle_y; float rot_angle_z; float rot_angle_x_inc; float rot_angle_y_inc; float rot_angle_z_inc; float distance; } ;
typedef TYPE_1__ CUBE_STATE_T ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (float,float,float) ;

__attribute__((used)) static void FUNC_3(CUBE_STATE_T *VAR_1)
{

   FUNC_1(VAR_0);
   FUNC_0();
   FUNC_2(0.f, 0.f, -50.f);


   VAR_1->rot_angle_x = 45.f; VAR_1->rot_angle_y = 30.f; VAR_1->rot_angle_z = 0.f;
   VAR_1->rot_angle_x_inc = 0.5f; VAR_1->rot_angle_y_inc = 0.5f; VAR_1->rot_angle_z_inc = 0.f;
   VAR_1->distance = 40.f;
}
