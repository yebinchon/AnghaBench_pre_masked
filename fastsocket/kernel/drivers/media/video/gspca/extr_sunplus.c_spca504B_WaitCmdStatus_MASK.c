
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {scalar_t__* usb_buf; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct gspca_dev*,int,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int ,int,int ) ;
 int FUNC_3 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_0)
{
 int VAR_1 = 50;

 while (--VAR_1 > 0) {
  FUNC_1(VAR_0, 0x21, 1, 1);
  if (VAR_0->usb_buf[0] != 0) {
   FUNC_2(VAR_0, 0x21, 0, 1, 0);
   FUNC_1(VAR_0, 0x21, 1, 1);
   FUNC_3(VAR_0);
   break;
  }
  FUNC_0(10);
 }
}
