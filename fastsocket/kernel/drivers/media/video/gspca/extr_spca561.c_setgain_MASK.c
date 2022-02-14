
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int gain; } ;
struct gspca_dev {int* usb_buf; } ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;




 if (VAR_1->gain < 64)
  VAR_0->usb_buf[0] = VAR_1->gain;
 else if (VAR_1->gain < 128)
  VAR_0->usb_buf[0] = (VAR_1->gain / 2) | 0x40;
 else
  VAR_0->usb_buf[0] = (VAR_1->gain / 4) | 0xc0;

 VAR_0->usb_buf[1] = 0;
 FUNC_0(VAR_0, 0x8335, 2);
}
