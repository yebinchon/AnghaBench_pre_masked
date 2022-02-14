
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_captureparm {int timeperframe; int capability; } ;
struct TYPE_2__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_1__ parm; } ;
struct v4l2_int_device {struct tcm825x_sensor* priv; } ;
struct tcm825x_sensor {int timeperframe; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_streamparm*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_int_device *VAR_3,
        struct v4l2_streamparm *VAR_4)
{
 struct tcm825x_sensor *VAR_5 = VAR_3->priv;
 struct v4l2_captureparm *VAR_6 = &VAR_4->parm.capture;

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_4->type = VAR_1;

 VAR_6->capability = VAR_2;
 VAR_6->timeperframe = VAR_5->timeperframe;

 return 0;
}
