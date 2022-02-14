
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vino_channel_settings {int fps; } ;
struct TYPE_5__ {int numerator; int denominator; } ;
struct v4l2_captureparm {TYPE_2__ timeperframe; int capability; } ;
struct TYPE_4__ {struct v4l2_captureparm capture; } ;
struct v4l2_streamparm {TYPE_1__ parm; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int input_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct vino_channel_settings* FUNC_2 (struct file*) ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
       struct v4l2_streamparm *VAR_4)
{
 struct vino_channel_settings *VAR_5 = FUNC_2(VAR_2);
 unsigned long VAR_6;
 struct v4l2_captureparm *VAR_7 = &VAR_4->parm.capture;

 VAR_7->capability = VAR_0;
 VAR_7->timeperframe.numerator = 1;

 FUNC_0(&VAR_1->input_lock, VAR_6);

 VAR_7->timeperframe.denominator = VAR_5->fps;

 FUNC_1(&VAR_1->input_lock, VAR_6);



 return 0;
}
