
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {int usb_err; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;
 int FUNC_4 (struct gspca_dev*,int) ;
 int FUNC_5 (struct gspca_dev*,int ,int ) ;
 int FUNC_6 (struct gspca_dev*,int) ;
 int FUNC_7 (struct gspca_dev*,int,int) ;
 int FUNC_8 (struct gspca_dev*,int ,int ) ;
 int VAR_3 ;
 int FUNC_9 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_10(struct gspca_dev *VAR_4)
{
 u16 VAR_5;


 FUNC_3(VAR_4, 0xe7, 0x3a);
 FUNC_3(VAR_4, 0xe0, 0x08);
 FUNC_2(100);


 FUNC_3(VAR_4, VAR_1, 0x42);


 FUNC_7(VAR_4, 0x12, 0x80);
 FUNC_2(10);


 FUNC_6(VAR_4, 0x0a);
 VAR_5 = FUNC_6(VAR_4, 0x0a) << 8;
 FUNC_6(VAR_4, 0x0b);
 VAR_5 |= FUNC_6(VAR_4, 0x0b);
 FUNC_1(VAR_0, "Sensor ID: %04x", VAR_5);


 FUNC_5(VAR_4, VAR_2,
   FUNC_0(VAR_2));
 FUNC_4(VAR_4, 1);
 FUNC_8(VAR_4, VAR_3,
   FUNC_0(VAR_3));
 FUNC_3(VAR_4, 0xe0, 0x09);
 FUNC_4(VAR_4, 0);
 FUNC_9(VAR_4);

 return VAR_4->usb_err;
}
