
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int uses_new_polling; int flags; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct usb_hcd *VAR_2)
{
 VAR_2->uses_new_polling = 1;
 VAR_2->state = VAR_1;
 FUNC_0(VAR_0, &VAR_2->flags);

 return 0;
}
