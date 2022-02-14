
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct sd {int sensor; } ;
struct gspca_dev {int* usb_buf; scalar_t__ usb_err; } ;
struct TYPE_8__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_7__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_6__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_5__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;


 int FUNC_0 (scalar_t__ const***) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct gspca_dev*,scalar_t__ const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct gspca_dev*,int,int) ;
 int FUNC_5 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_6(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 int VAR_5, VAR_6;
 u16 VAR_7 = 0;
 static const u8 VAR_8[][4][8] = {
     {
  {0xb0, 0x5d, 0x07, 0x00, 0x02, 0x00, 0x00, 0x10},
  {0x90, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10},
  {0xa2, 0x5d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10},
  {0xb0, 0x5d, 0x07, 0x00, 0x00, 0x00, 0x00, 0x10}
     },
     {
  {0xb0, 0x5c, 0x01, 0x00, 0x04, 0x00, 0x00, 0x10},
  {0x90, 0x5c, 0x36, 0x00, 0x00, 0x00, 0x00, 0x10},
  {0xa2, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10},
  {}
     },
 };

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_8); VAR_5++) {
  FUNC_5(VAR_3, 0x17, 0x62);
  FUNC_5(VAR_3, 0x01, 0x08);
  for (VAR_6 = 0; VAR_6 < 3; VAR_6++)
   FUNC_2(VAR_3, VAR_8[VAR_5][VAR_6]);
  FUNC_3(2);
  FUNC_4(VAR_3, 0x0a, 5);
  VAR_7 = (VAR_3->usb_buf[3] << 8) | VAR_3->usb_buf[4];
  if (VAR_8[VAR_5][3][0] != 0)
   FUNC_2(VAR_3, VAR_8[VAR_5][3]);
  FUNC_5(VAR_3, 0x01, 0x29);
  FUNC_5(VAR_3, 0x17, 0x42);
  if (VAR_7 != 0xffff)
   break;
 }
 if (VAR_3->usb_err < 0)
  return;
 switch (VAR_7) {
 case 0x8221:
  FUNC_1(VAR_0, "Sensor mi0360b");
  VAR_4->sensor = VAR_1;
  break;
 case 0x823a:
  FUNC_1(VAR_0, "Sensor mt9v111");
  VAR_4->sensor = VAR_2;
  break;
 case 0x8243:
  FUNC_1(VAR_0, "Sensor mi0360");
  break;
 default:
  FUNC_1(VAR_0, "Unknown sensor %04x - forced to mi0360", VAR_7);
  break;
 }
}
