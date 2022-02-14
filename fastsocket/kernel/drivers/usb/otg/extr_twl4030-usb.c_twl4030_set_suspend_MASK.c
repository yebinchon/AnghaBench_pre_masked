
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_usb {int dummy; } ;
struct otg_transceiver {int dummy; } ;


 int FUNC_0 (struct twl4030_usb*) ;
 int FUNC_1 (struct twl4030_usb*,int) ;
 struct twl4030_usb* FUNC_2 (struct otg_transceiver*) ;

__attribute__((used)) static int FUNC_3(struct otg_transceiver *VAR_0, int VAR_1)
{
 struct twl4030_usb *VAR_2 = FUNC_2(VAR_0);

 if (VAR_1)
  FUNC_1(VAR_2, 1);
 else
  FUNC_0(VAR_2);

 return 0;
}
