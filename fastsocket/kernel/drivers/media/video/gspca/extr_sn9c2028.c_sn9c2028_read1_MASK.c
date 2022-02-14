
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int* usb_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,int ,int,int,int ,int*,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_6->dev,
   FUNC_3(VAR_6->dev, 0),
   VAR_4,
   VAR_2 | VAR_5 | VAR_3,
   1, 0, VAR_6->usb_buf, 1, 500);
 if (VAR_7 != 1) {
  FUNC_1("read1 error %d", VAR_7);
  return (VAR_7 < 0) ? VAR_7 : -VAR_1;
 }
 FUNC_0(VAR_0, "read1 response %02x", VAR_6->usb_buf[0]);
 return VAR_6->usb_buf[0];
}
