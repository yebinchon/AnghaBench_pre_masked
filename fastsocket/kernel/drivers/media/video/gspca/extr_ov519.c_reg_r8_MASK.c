
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int usb_err; int* usb_buf; int dev; } ;
struct sd {TYPE_1__ gspca_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,int ,int,int,int ,int ,int*,int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sd *VAR_3,
    u16 VAR_4)
{
 int VAR_5;

 if (VAR_3->gspca_dev.usb_err < 0)
  return -1;

 VAR_5 = FUNC_1(VAR_3->gspca_dev.dev,
   FUNC_2(VAR_3->gspca_dev.dev, 0),
   1,
   VAR_0 | VAR_2 | VAR_1,
   0, VAR_4, VAR_3->gspca_dev.usb_buf, 8, 500);

 if (VAR_5 >= 0) {
  VAR_5 = VAR_3->gspca_dev.usb_buf[0];
 } else {
  FUNC_0("reg_r8 %02x failed %d", VAR_4, VAR_5);
  VAR_3->gspca_dev.usb_err = VAR_5;
 }

 return VAR_5;
}
