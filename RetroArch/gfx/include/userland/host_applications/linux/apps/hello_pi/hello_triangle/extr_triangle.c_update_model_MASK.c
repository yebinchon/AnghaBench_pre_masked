
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* rot_angle_z; void* rot_angle_y; void* rot_angle_x; int distance; int distance_inc; int rot_angle_z_inc; int rot_angle_y_inc; int rot_angle_x_inc; } ;
typedef TYPE_1__ CUBE_STATE_T ;


 int FUNC_0 () ;
 int FUNC_1 (void*,float,float,float) ;
 int FUNC_2 (float,float,int ) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (void*,int ) ;

__attribute__((used)) static void FUNC_5(CUBE_STATE_T *VAR_0)
{

   VAR_0->rot_angle_x = FUNC_4(VAR_0->rot_angle_x, VAR_0->rot_angle_x_inc);
   VAR_0->rot_angle_y = FUNC_4(VAR_0->rot_angle_y, VAR_0->rot_angle_y_inc);
   VAR_0->rot_angle_z = FUNC_4(VAR_0->rot_angle_z, VAR_0->rot_angle_z_inc);
   VAR_0->distance = FUNC_3(VAR_0->distance, VAR_0->distance_inc);

   FUNC_0();

   FUNC_2(0.f, 0.f, -VAR_0->distance);


   FUNC_1(VAR_0->rot_angle_x, 1.f, 0.f, 0.f);
   FUNC_1(VAR_0->rot_angle_y, 0.f, 1.f, 0.f);
   FUNC_1(VAR_0->rot_angle_z, 0.f, 0.f, 1.f);
}
