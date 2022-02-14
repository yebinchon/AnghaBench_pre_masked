
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct dummy {int driver; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct dummy*) ;
 struct dummy* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5 (struct usb_hcd *VAR_1)
{
 struct dummy *VAR_2;

 VAR_2 = FUNC_3 (VAR_1);

 FUNC_1 (FUNC_2(VAR_2), &VAR_0);
 FUNC_4 (VAR_2->driver);
 FUNC_0 (FUNC_2(VAR_2), "stopped\n");
}
