
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ scene_state; } ;
struct TYPE_4__ {void* rot_angle_z; void* rot_angle_y; void* rot_angle_x; int distance; int distance_inc; int rot_angle_z_inc; int rot_angle_y_inc; int rot_angle_x_inc; } ;
typedef TYPE_1__ TEAPOT_STATE_T ;
typedef TYPE_2__ RASPITEX_STATE ;


 int FUNC_0 () ;
 int FUNC_1 (void*,float,float,float) ;
 int FUNC_2 (float,float,int ) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (void*,int ) ;

__attribute__((used)) static int FUNC_5(RASPITEX_STATE *VAR_0)
{
   TEAPOT_STATE_T *VAR_1 = (TEAPOT_STATE_T *) VAR_0->scene_state;


   VAR_1->rot_angle_x = FUNC_4(VAR_1->rot_angle_x, VAR_1->rot_angle_x_inc);
   VAR_1->rot_angle_y = FUNC_4(VAR_1->rot_angle_y, VAR_1->rot_angle_y_inc);
   VAR_1->rot_angle_z = FUNC_4(VAR_1->rot_angle_z, VAR_1->rot_angle_z_inc);
   VAR_1->distance = FUNC_3(VAR_1->distance, VAR_1->distance_inc);

   FUNC_0();

   FUNC_2(0.f, 0.f, -VAR_1->distance);


   FUNC_1(VAR_1->rot_angle_x, 1.f, 0.f, 0.f);
   FUNC_1(VAR_1->rot_angle_y, 0.f, 1.f, 0.f);
   FUNC_1(VAR_1->rot_angle_z, 0.f, 0.f, 1.f);

   return 0;
}
