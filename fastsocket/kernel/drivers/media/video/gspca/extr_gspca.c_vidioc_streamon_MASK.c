
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gspca_dev {scalar_t__ nframes; int queue_lock; int height; int width; int pixfmt; int streaming; TYPE_2__* frame; struct file* capt_file; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ v4l2_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct gspca_dev*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_7, void *VAR_8,
      enum v4l2_buf_type VAR_9)
{
 struct gspca_dev *VAR_10 = VAR_8;
 int VAR_11;

 if (VAR_9 != VAR_5)
  return -VAR_2;
 if (FUNC_2(&VAR_10->queue_lock))
  return -VAR_3;


 if (VAR_10->capt_file != VAR_7) {
  VAR_11 = -VAR_1;
  goto out;
 }

 if (VAR_10->nframes == 0
     || !(VAR_10->frame[0].v4l2_buf.flags & VAR_4)) {
  VAR_11 = -VAR_2;
  goto out;
 }
 if (!VAR_10->streaming) {
  VAR_11 = FUNC_1(VAR_10);
  if (VAR_11 < 0)
   goto out;
 }
 VAR_11 = 0;
out:
 FUNC_3(&VAR_10->queue_lock);
 return VAR_11;
}
