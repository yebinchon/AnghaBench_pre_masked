
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int driver; } ;
struct usb_driver {TYPE_1__ drvwrap; int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct usb_driver*) ;
 int FUNC_3 (struct usb_driver*) ;
 int FUNC_4 (struct usb_driver*) ;
 int VAR_0 ;
 int FUNC_5 () ;

void FUNC_6(struct usb_driver *VAR_1)
{
 FUNC_1("%s: deregistering interface driver %s\n",
   VAR_0, VAR_1->name);

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(&VAR_1->drvwrap.driver);

 FUNC_5();
}
