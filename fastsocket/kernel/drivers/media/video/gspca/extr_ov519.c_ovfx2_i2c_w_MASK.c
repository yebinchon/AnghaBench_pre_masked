
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {int usb_err; int dev; } ;
struct sd {TYPE_1__ gspca_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,scalar_t__,int) ;
 int FUNC_2 (int ,int ,int,int,int ,int ,int *,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct sd *VAR_4, u8 VAR_5, u8 VAR_6)
{
 int VAR_7;

 if (VAR_4->gspca_dev.usb_err < 0)
  return;

 VAR_7 = FUNC_2(VAR_4->gspca_dev.dev,
   FUNC_3(VAR_4->gspca_dev.dev, 0),
   0x02,
   VAR_1 | VAR_3 | VAR_2,
   (u16) VAR_6, (u16) VAR_5, ((void*)0), 0, 500);

 if (VAR_7 < 0) {
  FUNC_1("ovfx2_i2c_w %02x failed %d", VAR_5, VAR_7);
  VAR_4->gspca_dev.usb_err = VAR_7;
 }

 FUNC_0(VAR_0, "ovfx2_i2c_w %02x %02x", VAR_5, VAR_6);
}
