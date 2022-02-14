
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_bus {int busnum; int bus_list; int controller; } ;
struct TYPE_2__ {int busmap; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (struct usb_bus*) ;

__attribute__((used)) static void FUNC_6 (struct usb_bus *VAR_2)
{
 FUNC_1 (VAR_2->controller, "USB bus %d deregistered\n", VAR_2->busnum);






 FUNC_3(&VAR_1);
 FUNC_2 (&VAR_2->bus_list);
 FUNC_4(&VAR_1);

 FUNC_5(VAR_2);

 FUNC_0 (VAR_2->busnum, VAR_0.busmap);
}
