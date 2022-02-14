
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {unsigned int gpio; } ;
struct TYPE_6__ {int gpio_wp; unsigned int gpio_cd; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,int ) ;
 TYPE_3__* VAR_5 ;
 int FUNC_2 (unsigned int,char*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_8,
  unsigned VAR_9, unsigned VAR_10)
{
 if (VAR_7 >= 0x20 && VAR_7 <= 0x34301000) {
  FUNC_3(VAR_0);
  VAR_6[0].gpio_wp = 23;
 } else {
  FUNC_3(VAR_1);
 }

 VAR_6[0].gpio_cd = VAR_9 + 0;
 FUNC_4(VAR_6);


 VAR_3.dev = VAR_6[0].dev;
 VAR_4.dev = VAR_6[0].dev;





 FUNC_2(VAR_9 + 1, "EHCI_nOC");
 FUNC_0(VAR_9 + 1);


 FUNC_2(VAR_9 + VAR_2, "nEN_USB_PWR");
 FUNC_1(VAR_9 + VAR_2, 0);


 VAR_5[2].gpio = VAR_9 + VAR_2 + 1;

 return 0;
}
