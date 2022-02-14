
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct gspca_dev {int* usb_buf; } ;


 int FUNC_0 (int*,void* const*,int) ;
 int FUNC_1 (struct gspca_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_0, u8 VAR_1, u8 VAR_2,
 const u8 *VAR_3, int VAR_4)
{
 VAR_0->usb_buf[0] = 0x1f;
 VAR_0->usb_buf[1] = VAR_2;
 VAR_0->usb_buf[2] = VAR_1;
 FUNC_0(VAR_0->usb_buf + 3, VAR_3, VAR_4);

 return FUNC_1(VAR_0, VAR_4 + 3);
}
