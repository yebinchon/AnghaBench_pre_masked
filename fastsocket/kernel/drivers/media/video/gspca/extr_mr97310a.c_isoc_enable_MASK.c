
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int* usb_buf; } ;


 int FUNC_0 (struct gspca_dev*,int) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0)
{
 VAR_0->usb_buf[0] = 0x00;
 VAR_0->usb_buf[1] = 0x4d;
 return FUNC_0(VAR_0, 2);
}
