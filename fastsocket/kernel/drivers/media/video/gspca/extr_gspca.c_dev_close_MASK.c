
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gspca_dev {int queue_lock; int module; int usb_lock; scalar_t__ usb_err; scalar_t__ streaming; struct file* capt_file; } ;
struct file {struct gspca_dev* private_data; } ;
struct TYPE_2__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_3)
{
 struct gspca_dev *VAR_4 = VAR_3->private_data;

 FUNC_0(VAR_0, "[%s] close", VAR_2->comm);
 if (FUNC_5(&VAR_4->queue_lock))
  return -VAR_1;


 if (VAR_4->capt_file == VAR_3) {
  if (VAR_4->streaming) {
   FUNC_4(&VAR_4->usb_lock);
   VAR_4->usb_err = 0;
   FUNC_2(VAR_4);
   FUNC_6(&VAR_4->usb_lock);
  }
  FUNC_1(VAR_4);
 }
 VAR_3->private_data = ((void*)0);
 FUNC_3(VAR_4->module);
 FUNC_6(&VAR_4->queue_lock);

 FUNC_0(VAR_0, "close done");

 return 0;
}
