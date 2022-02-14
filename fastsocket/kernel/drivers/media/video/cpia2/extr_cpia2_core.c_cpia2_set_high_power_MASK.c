
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int system_ctrl; int power_mode; } ;
struct TYPE_4__ {int system_state; } ;
struct TYPE_6__ {TYPE_2__ camera_state; TYPE_1__ vp_params; } ;
struct camera_data {TYPE_3__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct camera_data*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct camera_data *VAR_11)
{
 int VAR_12;
 for (VAR_12 = 0; VAR_12 <= 50; VAR_12++) {

  FUNC_2(VAR_11,VAR_1,VAR_9,0);


  if(VAR_11->params.camera_state.system_ctrl &
     VAR_4)
   FUNC_2(VAR_11, VAR_0,
      VAR_10, 0);


  FUNC_2(VAR_11, VAR_3,
     VAR_10, 1);


  FUNC_2(VAR_11, VAR_2,
     VAR_9, 0);
  if (VAR_11->params.vp_params.system_state &
      VAR_5) {
   break;
  } else if (VAR_12 == 50) {
   VAR_11->params.camera_state.power_mode = VAR_8;
   FUNC_1("Camera did not wake up\n");
   return -VAR_6;
  }
 }

 FUNC_0("System now in high power state\n");
 VAR_11->params.camera_state.power_mode = VAR_7;
 return 0;
}
