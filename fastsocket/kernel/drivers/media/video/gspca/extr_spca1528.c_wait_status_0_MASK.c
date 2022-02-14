
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {scalar_t__* usb_buf; int usb_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_2)
{
 int VAR_3;

 VAR_3 = 20;
 do {
  FUNC_2(VAR_2, 0x21, 0x0000, 1);
  if (VAR_2->usb_buf[0] == 0)
   return;
  FUNC_1(30);
 } while (--VAR_3 > 0);
 FUNC_0(VAR_0, "wait_status_0 timeout");
 VAR_2->usb_err = -VAR_1;
}
