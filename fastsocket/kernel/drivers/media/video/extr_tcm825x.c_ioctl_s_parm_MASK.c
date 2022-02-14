
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct v4l2_fract {int numerator; int denominator; } ;
struct TYPE_3__ {struct v4l2_fract timeperframe; } ;
struct TYPE_4__ {TYPE_1__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_2__ parm; } ;
struct v4l2_int_device {struct tcm825x_sensor* priv; } ;
struct tcm825x_sensor {struct v4l2_fract timeperframe; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct v4l2_int_device*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_int_device *VAR_5,
        struct v4l2_streamparm *VAR_6)
{
 struct tcm825x_sensor *VAR_7 = VAR_5->priv;
 struct v4l2_fract *VAR_8 = &VAR_6->parm.capture.timeperframe;
 u32 VAR_9;
 int VAR_10;

 if (VAR_6->type != VAR_4)
  return -VAR_1;

 if ((VAR_8->numerator == 0)
     || (VAR_8->denominator == 0)) {
  VAR_8->denominator = VAR_0;
  VAR_8->numerator = 1;
 }

 VAR_9 = VAR_8->denominator / VAR_8->numerator;

 if (VAR_9 > VAR_2) {
  VAR_8->denominator = VAR_2;
  VAR_8->numerator = 1;
 } else if (VAR_9 < VAR_3) {
  VAR_8->denominator = VAR_3;
  VAR_8->numerator = 1;
 }

 VAR_7->timeperframe = *VAR_8;

 VAR_10 = FUNC_0(VAR_5);

 return VAR_10;
}
