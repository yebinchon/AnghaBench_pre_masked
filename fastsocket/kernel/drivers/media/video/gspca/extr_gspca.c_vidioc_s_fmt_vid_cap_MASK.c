
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sizeimage; int pixelformat; int height; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct gspca_dev {scalar_t__ nframes; scalar_t__ frsz; int curr_mode; int queue_lock; int pixfmt; int height; int width; scalar_t__ streaming; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gspca_dev*,struct v4l2_format*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
       struct v4l2_format *VAR_5)
{
 struct gspca_dev *VAR_6 = VAR_4;
 int VAR_7;

 if (FUNC_0(&VAR_6->queue_lock))
  return -VAR_2;

 VAR_7 = FUNC_2(VAR_6, VAR_5);
 if (VAR_7 < 0)
  goto out;

 if (VAR_6->nframes != 0
     && VAR_5->fmt.pix.sizeimage > VAR_6->frsz) {
  VAR_7 = -VAR_1;
  goto out;
 }

 if (VAR_7 == VAR_6->curr_mode) {
  VAR_7 = 0;
  goto out;
 }

 if (VAR_6->streaming) {
  VAR_7 = -VAR_0;
  goto out;
 }
 VAR_6->width = VAR_5->fmt.pix.width;
 VAR_6->height = VAR_5->fmt.pix.height;
 VAR_6->pixfmt = VAR_5->fmt.pix.pixelformat;
 VAR_6->curr_mode = VAR_7;

 VAR_7 = 0;
out:
 FUNC_1(&VAR_6->queue_lock);
 return VAR_7;
}
