
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_fpix {int * work_thread; } ;
struct gspca_dev {int usb_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_0)
{
 struct usb_fpix *VAR_1 = (struct usb_fpix *) VAR_0;


 FUNC_2(&VAR_0->usb_lock);
 FUNC_0(VAR_1->work_thread);
 FUNC_1(&VAR_0->usb_lock);
 VAR_1->work_thread = ((void*)0);
}
