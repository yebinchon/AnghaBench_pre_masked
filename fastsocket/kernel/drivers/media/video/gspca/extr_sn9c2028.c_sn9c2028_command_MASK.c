
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int * usb_buf; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,int ,int ,int,int,int ,int *,int,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_5, u8 *VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_0, "sending command %02x%02x%02x%02x%02x%02x", VAR_6[0],
        VAR_6[1], VAR_6[2], VAR_6[3], VAR_6[4], VAR_6[5]);

 FUNC_2(VAR_5->usb_buf, VAR_6, 6);
 VAR_7 = FUNC_3(VAR_5->dev,
   FUNC_4(VAR_5->dev, 0),
   VAR_3,
   VAR_1 | VAR_4 | VAR_2,
   2, 0, VAR_5->usb_buf, 6, 500);
 if (VAR_7 < 0) {
  FUNC_1("command write [%02x] error %d",
    VAR_5->usb_buf[0], VAR_7);
  return VAR_7;
 }

 return 0;
}
