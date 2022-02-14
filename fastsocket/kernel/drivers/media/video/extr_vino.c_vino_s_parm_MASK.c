
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vino_channel_settings {int dummy; } ;
struct TYPE_4__ {int numerator; int denominator; } ;
struct v4l2_captureparm {TYPE_1__ timeperframe; } ;
struct TYPE_5__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {TYPE_2__ parm; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int input_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct vino_channel_settings* FUNC_2 (struct file*) ;
 TYPE_3__* VAR_0 ;
 int FUNC_3 (struct vino_channel_settings*) ;
 int FUNC_4 (struct vino_channel_settings*,int) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, void *VAR_2,
       struct v4l2_streamparm *VAR_3)
{
 struct vino_channel_settings *VAR_4 = FUNC_2(VAR_1);
 unsigned long VAR_5;
 struct v4l2_captureparm *VAR_6 = &VAR_3->parm.capture;

 FUNC_0(&VAR_0->input_lock, VAR_5);

 if ((VAR_6->timeperframe.numerator == 0) ||
     (VAR_6->timeperframe.denominator == 0)) {

  FUNC_3(VAR_4);
 } else {
  FUNC_4(VAR_4, VAR_6->timeperframe.denominator /
       VAR_6->timeperframe.numerator);
 }

 FUNC_1(&VAR_0->input_lock, VAR_5);

 return 0;
}
