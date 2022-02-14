
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int dummy; } ;
struct musb {TYPE_1__* endpoints; } ;
struct TYPE_2__ {int ep_in; } ;


 int FUNC_0 (int *,struct usb_request*,int ) ;

__attribute__((used)) static void FUNC_1(struct musb *VAR_0, struct usb_request *VAR_1)
{
 FUNC_0(&VAR_0->endpoints[0].ep_in, VAR_1, 0);
}
