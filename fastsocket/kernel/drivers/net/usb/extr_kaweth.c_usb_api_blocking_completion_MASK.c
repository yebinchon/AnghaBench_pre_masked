
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_api_data {int done; int wqh; } ;
struct urb {scalar_t__ context; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_0)
{
        struct usb_api_data *VAR_1 = (struct usb_api_data *)VAR_0->context;

 VAR_1->done=1;
 FUNC_0(&VAR_1->wqh);
}
