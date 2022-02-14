
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


typedef void* uint32_t ;
struct TYPE_10__ {void* denominator; void* numerator; } ;
struct TYPE_11__ {TYPE_4__ timeperframe; scalar_t__ outputmode; void* capability; } ;
struct TYPE_8__ {void* denominator; void* numerator; } ;
struct TYPE_9__ {scalar_t__ readbuffers; scalar_t__ extendedmode; TYPE_2__ timeperframe; scalar_t__ capturemode; void* capability; } ;
struct TYPE_12__ {TYPE_5__ output; TYPE_3__ capture; } ;
struct v4l2_streamparm {scalar_t__ type; TYPE_6__ parm; } ;
struct TYPE_7__ {void* dwFrameInterval; } ;
struct uvc_streaming {scalar_t__ type; int mutex; TYPE_1__ ctrl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct v4l2_streamparm*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void**,void**,int,int) ;

__attribute__((used)) static int FUNC_4(struct uvc_streaming *VAR_3,
  struct v4l2_streamparm *VAR_4)
{
 uint32_t VAR_5, VAR_6;

 if (VAR_4->type != VAR_3->type)
  return -VAR_0;

 FUNC_1(&VAR_3->mutex);
 VAR_5 = VAR_3->ctrl.dwFrameInterval;
 FUNC_2(&VAR_3->mutex);

 VAR_6 = 10000000;
 FUNC_3(&VAR_5, &VAR_6, 8, 333);

 FUNC_0(VAR_4, 0, sizeof *VAR_4);
 VAR_4->type = VAR_3->type;

 if (VAR_3->type == VAR_1) {
  VAR_4->parm.capture.capability = VAR_2;
  VAR_4->parm.capture.capturemode = 0;
  VAR_4->parm.capture.timeperframe.numerator = VAR_5;
  VAR_4->parm.capture.timeperframe.denominator = VAR_6;
  VAR_4->parm.capture.extendedmode = 0;
  VAR_4->parm.capture.readbuffers = 0;
 } else {
  VAR_4->parm.output.capability = VAR_2;
  VAR_4->parm.output.outputmode = 0;
  VAR_4->parm.output.timeperframe.numerator = VAR_5;
  VAR_4->parm.output.timeperframe.denominator = VAR_6;
 }

 return 0;
}
