
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {int* usb_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct gspca_dev*,int,int,int) ;
 int FUNC_4 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static u16 FUNC_5(struct gspca_dev *VAR_1,
    u16 VAR_2)
{
 u8 VAR_3, VAR_4, VAR_5;
 int VAR_6 = 50;

 FUNC_3(VAR_1, 0xa1, 0xb33f, 1);
 if (!(VAR_1->usb_buf[0] & 0x02)) {
  FUNC_1("I2c Bus Busy Wait %02x",
   VAR_1->usb_buf[0]);
  return 0;
 }
 FUNC_4(VAR_1, 0xa0, VAR_2, 0xb33a);
 FUNC_4(VAR_1, 0xa0, 0x02, 0xb339);

 do {
  FUNC_3(VAR_1, 0xa1, 0xb33b, 1);
  if (VAR_1->usb_buf[0] == 0x00)
   break;
  FUNC_2(40);
 } while (--VAR_6 >= 0);

 FUNC_3(VAR_1, 0xa1, 0xb33e, 1);
 VAR_3 = VAR_1->usb_buf[0];
 FUNC_3(VAR_1, 0xa1, 0xb33d, 1);
 VAR_4 = VAR_1->usb_buf[0];
 FUNC_3(VAR_1, 0xa1, 0xb33c, 1);
 VAR_5 = VAR_1->usb_buf[0];
 if (VAR_5 != 0 && VAR_4 != 0 && VAR_3 != 0)
  FUNC_0(VAR_0, "Read Sensor %02x%02x %02x",
   VAR_5, VAR_4, VAR_3);
 FUNC_3(VAR_1, 0xa1, 0xb334, 1);
 if (VAR_1->usb_buf[0] == 0x02)
  return (VAR_5 << 8) + VAR_4;
 return VAR_5;
}
