
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int* usb_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct gspca_dev*,int ) ;
 int FUNC_3 (struct gspca_dev*,int ,int,int ,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_2)
{

 FUNC_1(VAR_2->usb_buf, 0, 8);
 VAR_2->usb_buf[0] = 0x0f;

 if (FUNC_3(VAR_2, 0, 0x87, 0, 0x08) != 0x08) {
  FUNC_0(VAR_0, "Get_Camera_Mode failed");
  return FUNC_2(VAR_2, -VAR_1);
 }

 return VAR_2->usb_buf[0];
}
