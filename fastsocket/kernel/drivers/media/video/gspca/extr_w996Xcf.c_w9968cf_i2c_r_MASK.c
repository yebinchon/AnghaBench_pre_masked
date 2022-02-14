
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ usb_err; } ;
struct sd {int sensor_addr; TYPE_1__ gspca_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct sd*) ;
 int FUNC_2 (struct sd*,int*) ;
 int FUNC_3 (struct sd*) ;
 int FUNC_4 (struct sd*) ;
 int FUNC_5 (struct sd*,int) ;
 int FUNC_6 (struct sd*) ;
 int FUNC_7 (struct sd*,int) ;

__attribute__((used)) static int FUNC_8(struct sd *VAR_2, u8 VAR_3)
{
 int VAR_4 = 0;
 u8 VAR_5;


 FUNC_7(VAR_2, 0x0013);

 FUNC_3(VAR_2);
 FUNC_5(VAR_2, VAR_2->sensor_addr);
 FUNC_1(VAR_2);
 FUNC_5(VAR_2, VAR_3);
 FUNC_1(VAR_2);
 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_5(VAR_2, VAR_2->sensor_addr + 1);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2, &VAR_5);



 FUNC_6(VAR_2);
 FUNC_4(VAR_2);


 FUNC_7(VAR_2, 0x0030);

 if (VAR_2->gspca_dev.usb_err >= 0) {
  VAR_4 = VAR_5;
  FUNC_0(VAR_1, "i2c [0x%02X] -> 0x%02X", VAR_3, VAR_5);
 } else
  FUNC_0(VAR_0, "i2c read [0x%02x] failed", VAR_3);

 return VAR_4;
}
