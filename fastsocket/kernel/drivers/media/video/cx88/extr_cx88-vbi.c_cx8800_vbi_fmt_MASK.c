
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int offset; int sampling_rate; int* start; void** count; int sample_format; int samples_per_line; } ;
struct TYPE_6__ {TYPE_2__ vbi; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct cx8800_fh {struct cx8800_dev* dev; } ;
struct cx8800_dev {TYPE_1__* core; } ;
struct TYPE_4__ {int tvnorm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;

int FUNC_0 (struct file *VAR_5, void *VAR_6,
     struct v4l2_format *VAR_7)
{
 struct cx8800_fh *VAR_8 = VAR_6;
 struct cx8800_dev *VAR_9 = VAR_8->dev;

 VAR_7->fmt.vbi.samples_per_line = VAR_4;
 VAR_7->fmt.vbi.sample_format = VAR_0;
 VAR_7->fmt.vbi.offset = 244;
 VAR_7->fmt.vbi.count[0] = VAR_3;
 VAR_7->fmt.vbi.count[1] = VAR_3;

 if (VAR_9->core->tvnorm & VAR_1) {

  VAR_7->fmt.vbi.sampling_rate = 28636363;
  VAR_7->fmt.vbi.start[0] = 10;
  VAR_7->fmt.vbi.start[1] = 273;

 } else if (VAR_9->core->tvnorm & VAR_2) {

  VAR_7->fmt.vbi.sampling_rate = 35468950;
  VAR_7->fmt.vbi.start[0] = 7 -1;
  VAR_7->fmt.vbi.start[1] = 319 -1;
 }
 return 0;
}
