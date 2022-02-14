
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int frame_rate; } ;
struct TYPE_7__ {scalar_t__ device_type; } ;
struct TYPE_6__ {int sensor_flags; } ;
struct TYPE_8__ {TYPE_1__ vp_params; TYPE_3__ pnp_id; TYPE_2__ version; } ;
struct camera_data {TYPE_4__ params; } ;


 int VAR_0 ;






 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct camera_data*,int ,int ,int) ;

int FUNC_1(struct camera_data *VAR_5, int VAR_6)
{
 int VAR_7;

 switch(VAR_6) {
  case 130:
  case 131:
   if(VAR_5->params.pnp_id.device_type == VAR_2 &&
      VAR_5->params.version.sensor_flags ==
          VAR_1) {
    return -VAR_3;
   }

  case 132:
  case 133:
  case 128:
  case 129:
   break;
  default:
   return -VAR_3;
 }

 if (VAR_5->params.pnp_id.device_type == VAR_2 &&
     VAR_6 == 132)
  VAR_6 = 0;

 VAR_7 = FUNC_0(VAR_5,
     VAR_0,
     VAR_4,
     VAR_6);

 if(VAR_7 == 0)
  VAR_5->params.vp_params.frame_rate = VAR_6;

 return VAR_7;
}
