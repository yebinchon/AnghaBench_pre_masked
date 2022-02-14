
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numerator; int denominator; } ;
struct TYPE_5__ {int readbuffers; TYPE_1__ timeperframe; } ;
struct TYPE_6__ {TYPE_2__ capture; } ;
struct v4l2_streamparm {TYPE_3__ parm; } ;
struct file {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct file *VAR_0,
  void *VAR_1, struct v4l2_streamparm *VAR_2)
{

 VAR_2->parm.capture.timeperframe.numerator = 1;
 VAR_2->parm.capture.timeperframe.denominator = 30;
 VAR_2->parm.capture.readbuffers = 2;
 return 0;
}
