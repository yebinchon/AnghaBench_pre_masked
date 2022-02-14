
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int queue_lock; scalar_t__ fr_o; int fr_i; int fr_q; int wq; int usb_lock; scalar_t__ usb_err; struct file* capt_file; int streaming; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct gspca_dev*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, void *VAR_5,
    enum v4l2_buf_type VAR_6)
{
 struct gspca_dev *VAR_7 = VAR_5;
 int VAR_8;

 if (VAR_6 != VAR_3)
  return -VAR_1;

 if (FUNC_2(&VAR_7->queue_lock))
  return -VAR_2;

 if (!VAR_7->streaming) {
  VAR_8 = 0;
  goto out;
 }


 if (VAR_7->capt_file != VAR_4) {
  VAR_8 = -VAR_0;
  goto out;
 }


 if (FUNC_2(&VAR_7->usb_lock)) {
  VAR_8 = -VAR_2;
  goto out;
 }
 VAR_7->usb_err = 0;
 FUNC_1(VAR_7);
 FUNC_3(&VAR_7->usb_lock);

 FUNC_4(&VAR_7->wq);


 FUNC_0(&VAR_7->fr_q, 0);
 FUNC_0(&VAR_7->fr_i, 0);
 VAR_7->fr_o = 0;
 VAR_8 = 0;
out:
 FUNC_3(&VAR_7->queue_lock);
 return VAR_8;
}
