
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int* usb_buf; } ;


 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0)
{
 FUNC_1(VAR_0, 0x1007, 0x00);

 FUNC_0(VAR_0, 0x1061, 1);
 FUNC_1(VAR_0, 0x1061, VAR_0->usb_buf[0] & ~0x02);
}
