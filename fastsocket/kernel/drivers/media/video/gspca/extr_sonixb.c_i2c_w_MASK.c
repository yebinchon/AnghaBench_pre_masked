
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int* usb_buf; } ;
typedef int __u8 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gspca_dev*,int) ;
 int FUNC_2 (struct gspca_dev*,int,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_0, const __u8 *VAR_1)
{
 int VAR_2 = 60;


 FUNC_2(VAR_0, 0x08, VAR_1, 8);
 while (VAR_2--) {
  FUNC_0(10);
  FUNC_1(VAR_0, 0x08);
  if (VAR_0->usb_buf[0] & 0x04) {
   if (VAR_0->usb_buf[0] & 0x08)
    return -1;
   return 0;
  }
 }
 return -1;
}
