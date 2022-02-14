
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_queryctrl {int id; int minimum; int maximum; int default_value; int flags; } ;
struct TYPE_8__ {int product; int device_type; } ;
struct TYPE_7__ {int sensor_flags; } ;
struct TYPE_9__ {TYPE_2__ pnp_id; TYPE_1__ version; } ;
struct camera_data {TYPE_3__ params; } ;
struct TYPE_11__ {int value; } ;
struct TYPE_10__ {int id; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_5__* VAR_7 ;
 int FUNC_0 (struct v4l2_queryctrl*,TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_8,struct camera_data *VAR_9)
{
 struct v4l2_queryctrl *VAR_10 = VAR_8;
 int VAR_11;

 for(VAR_11=0; VAR_11<VAR_4; ++VAR_11) {
  if(VAR_10->id == VAR_6[VAR_11].id) {
   FUNC_0(VAR_10, VAR_6+VAR_11, sizeof(*VAR_10));
   break;
  }
 }

 if(VAR_11 == VAR_4)
  return -VAR_3;


 switch(VAR_10->id) {
 case 129:




  if (VAR_9->params.pnp_id.device_type == VAR_2)
   VAR_10->minimum = 1;
  break;
 case 128:

  if(VAR_9->params.pnp_id.device_type == VAR_2)
   VAR_10->flags |= VAR_5;
  break;
 case 131:
  if(VAR_9->params.pnp_id.device_type == VAR_2 &&
     VAR_9->params.version.sensor_flags==VAR_1){

   for(VAR_11=0; VAR_11<VAR_10->maximum; ++VAR_11) {
    if(VAR_7[VAR_11].value ==
       VAR_0) {
     VAR_10->maximum = VAR_11;
     VAR_10->default_value = VAR_11;
    }
   }
  }
  break;
 case 132:

  if(VAR_9->params.pnp_id.device_type != VAR_2)
   VAR_10->flags |= VAR_5;
  break;
 case 130:

  if(VAR_9->params.pnp_id.product != 0x151)
   VAR_10->flags |= VAR_5;
  break;
 default:
  break;
 }

 return 0;
}
