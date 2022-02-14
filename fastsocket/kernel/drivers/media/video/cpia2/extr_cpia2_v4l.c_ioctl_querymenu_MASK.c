
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_querymenu {int id; size_t index; int name; scalar_t__ reserved; } ;
struct TYPE_8__ {int sensor_flags; } ;
struct TYPE_7__ {int device_type; } ;
struct TYPE_9__ {TYPE_2__ version; TYPE_1__ pnp_id; } ;
struct camera_data {TYPE_3__ params; } ;
struct TYPE_12__ {int name; } ;
struct TYPE_11__ {int name; int value; } ;
struct TYPE_10__ {int name; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 TYPE_6__* VAR_7 ;
 TYPE_5__* VAR_8 ;
 TYPE_4__* VAR_9 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_10,struct camera_data *VAR_11)
{
 struct v4l2_querymenu *VAR_12 = VAR_10;

 FUNC_0(VAR_12->name, 0, sizeof(VAR_12->name));
 VAR_12->reserved = 0;

 switch(VAR_12->id) {
 case 130:
  if (VAR_12->index >= VAR_4)
   return -VAR_3;

  FUNC_1(VAR_12->name, VAR_7[VAR_12->index].name);
  break;
 case 129:
     {
  int VAR_13 = VAR_5 - 1;
  if(VAR_11->params.pnp_id.device_type == VAR_2 &&
     VAR_11->params.version.sensor_flags==VAR_1){

   int VAR_14;
   for(VAR_14=0; VAR_14<VAR_13; ++VAR_14) {
    if(VAR_8[VAR_14].value ==
       VAR_0)
     VAR_13 = VAR_14;
   }
  }
  if (VAR_12->index > VAR_13)
   return -VAR_3;

  FUNC_1(VAR_12->name, VAR_8[VAR_12->index].name);
  break;
     }
 case 128:
  if (VAR_12->index >= VAR_6)
   return -VAR_3;

  FUNC_1(VAR_12->name, VAR_9[VAR_12->index].name);
  break;
 default:
  return -VAR_3;
 }

 return 0;
}
