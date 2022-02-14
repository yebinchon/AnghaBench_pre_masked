
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int* usb_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct gspca_dev*,int ,int) ;
 int FUNC_2 (struct gspca_dev*,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct gspca_dev*,int,int) ;
 int FUNC_5 (char*,int,int,int) ;

__attribute__((used)) static void FUNC_6(struct gspca_dev *VAR_1)
{
 FUNC_2(VAR_1, 0x02, 0);
 FUNC_3(10);
 FUNC_4(VAR_1, 0x02, 0x66);
 FUNC_3(10);
 FUNC_1(VAR_1, 0, 5);
 if (VAR_1->usb_buf[0] == 0x02
     && VAR_1->usb_buf[1] == 0x09
     && VAR_1->usb_buf[2] == 0x01) {
  FUNC_0(VAR_0, "Sensor HV7131R found");
  return;
 }
 FUNC_5("Erroneous HV7131R ID 0x%02x 0x%02x 0x%02x",
  VAR_1->usb_buf[0], VAR_1->usb_buf[1],
  VAR_1->usb_buf[2]);
}
