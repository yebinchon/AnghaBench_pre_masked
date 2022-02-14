
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int gpio_data; int gpio_direction; int user_effects; } ;
struct TYPE_8__ {int flicker_mode_req; } ;
struct TYPE_5__ {int stream_mode; } ;
struct TYPE_7__ {TYPE_2__ vp_params; TYPE_4__ flicker_control; TYPE_1__ camera_state; } ;
struct camera_data {TYPE_3__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct camera_data*,int ,int ,int ) ;
 int FUNC_1 (struct camera_data*) ;
 int FUNC_2 (struct camera_data*,int ) ;
 int FUNC_3 (struct camera_data*,int ) ;
 int FUNC_4 (struct camera_data*) ;
 int FUNC_5 (struct camera_data*) ;

__attribute__((used)) static int FUNC_6(struct camera_data *VAR_4)
{





 FUNC_1(VAR_4);

 FUNC_3(VAR_4,
       VAR_4->params.camera_state.stream_mode);

 FUNC_0(VAR_4, VAR_0, VAR_3,
    VAR_4->params.vp_params.user_effects);

 FUNC_2(VAR_4,
          VAR_4->params.flicker_control.flicker_mode_req);

 FUNC_0(VAR_4,
    VAR_2,
    VAR_3, VAR_4->params.vp_params.gpio_direction);
 FUNC_0(VAR_4, VAR_1, VAR_3,
    VAR_4->params.vp_params.gpio_data);

 FUNC_5(VAR_4);

 FUNC_4(VAR_4);

 return 0;
}
