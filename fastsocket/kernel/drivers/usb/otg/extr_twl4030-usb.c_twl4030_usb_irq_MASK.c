
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twl4030_usb {TYPE_1__* dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (struct twl4030_usb*) ;
 int FUNC_3 (struct twl4030_usb*,int ) ;
 int FUNC_4 (struct twl4030_usb*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct twl4030_usb *VAR_6 = VAR_5;
 int VAR_7;
 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7 != VAR_2) {
  FUNC_5(VAR_7 == VAR_3);

  if (VAR_7 == VAR_1)
   FUNC_3(VAR_6, 0);
  else
   FUNC_2(VAR_6);
 }
 FUNC_1(&VAR_6->dev->kobj, ((void*)0), "vbus");

 return VAR_0;
}
