
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int* usb_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_1, const u8 *VAR_2)
{
 int VAR_3;
 FUNC_2(VAR_1, 0x10c0, VAR_2, 8);
 for (VAR_3 = 0; VAR_3 < 5; VAR_3++) {
  FUNC_1(VAR_1, 0x10c0, 1);
  if (VAR_1->usb_buf[0] & 0x04) {
   if (VAR_1->usb_buf[0] & 0x08)
    return -VAR_0;
   return 0;
  }
  FUNC_0(1);
 }
 return -VAR_0;
}
