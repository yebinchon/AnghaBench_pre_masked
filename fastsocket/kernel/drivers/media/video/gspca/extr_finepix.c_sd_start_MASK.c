
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_fpix {int work_struct; int work_thread; } ;
struct gspca_dev {TYPE_1__** urb; int dev; } ;
struct TYPE_2__ {int pipe; int transfer_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int ,int ,int*,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_3)
{
 struct usb_fpix *VAR_4 = (struct usb_fpix *) VAR_3;
 int VAR_5, VAR_6;


 VAR_5 = FUNC_0(VAR_3, 0);
 if (VAR_5 < 0) {
  FUNC_2("init failed %d", VAR_5);
  return VAR_5;
 }



 VAR_5 = FUNC_4(VAR_3->dev,
   VAR_3->urb[0]->pipe,
   VAR_3->urb[0]->transfer_buffer,
   VAR_0, &VAR_6,
   VAR_1);
 if (VAR_5 < 0) {
  FUNC_2("usb_bulk_msg failed %d", VAR_5);
  return VAR_5;
 }


 VAR_5 = FUNC_0(VAR_3, 1);
 if (VAR_5 < 0) {
  FUNC_2("frame request failed %d", VAR_5);
  return VAR_5;
 }


 FUNC_5(VAR_3->dev, VAR_3->urb[0]->pipe);


 VAR_4->work_thread = FUNC_1(VAR_2);
 FUNC_3(VAR_4->work_thread, &VAR_4->work_struct);

 return 0;
}
