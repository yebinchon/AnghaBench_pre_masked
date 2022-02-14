
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int* usb_buf; int dev; } ;
typedef int __u16 ;


 int FUNC_0 (struct gspca_dev*,int,int,int) ;
 int FUNC_1 (int ,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0, __u16 VAR_1,
        __u16 VAR_2)
{
 int VAR_3 = 60;

 FUNC_1(VAR_0->dev, 0x07, VAR_2, 0x0001);
 FUNC_1(VAR_0->dev, 0x07, VAR_1, 0x0000);
 while (VAR_3--) {
  FUNC_0(VAR_0, 0x07, 0x0003, 2);
  if ((VAR_0->usb_buf[0] | VAR_0->usb_buf[1]) == 0x00)
   break;
 }
}
