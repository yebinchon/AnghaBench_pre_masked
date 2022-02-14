
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sampling_rate; int* start; } ;
struct TYPE_4__ {TYPE_1__ vbi; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct cx23885_fh {struct cx23885_dev* dev; } ;
struct cx23885_dev {int tvnorm; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct file *VAR_2, void *VAR_3,
 struct v4l2_format *VAR_4)
{
 struct cx23885_fh *VAR_5 = VAR_3;
 struct cx23885_dev *VAR_6 = VAR_5->dev;

 if (VAR_6->tvnorm & VAR_0) {

  VAR_4->fmt.vbi.sampling_rate = 28636363;
  VAR_4->fmt.vbi.start[0] = 10;
  VAR_4->fmt.vbi.start[1] = 273;

 } else if (VAR_6->tvnorm & VAR_1) {

  VAR_4->fmt.vbi.sampling_rate = 35468950;
  VAR_4->fmt.vbi.start[0] = 7 - 1;
  VAR_4->fmt.vbi.start[1] = 319 - 1;
 }
 return 0;
}
