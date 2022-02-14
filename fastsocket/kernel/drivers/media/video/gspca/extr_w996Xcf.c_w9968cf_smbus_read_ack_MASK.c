
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int usb_err; } ;
struct sd {TYPE_1__ gspca_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sd*) ;
 int FUNC_2 (struct sd*,int) ;

__attribute__((used)) static void FUNC_3(struct sd *VAR_2)
{
 int VAR_3;


 FUNC_2(VAR_2, 0x0012);
 FUNC_2(VAR_2, 0x0013);
 VAR_3 = FUNC_1(VAR_2);
 FUNC_2(VAR_2, 0x0012);
 if (VAR_3 >= 0 && (VAR_3 & 0x08)) {
  FUNC_0(VAR_0, "Did not receive i2c ACK");
  VAR_2->gspca_dev.usb_err = -VAR_1;
 }
}
