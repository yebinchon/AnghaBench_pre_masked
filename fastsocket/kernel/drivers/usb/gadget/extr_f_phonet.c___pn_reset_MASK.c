
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_function {int dummy; } ;
struct phonet_port {int * usb; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int * skb; } ;
struct f_phonet {TYPE_1__ rx; int in_ep; int out_ep; struct net_device* dev; } ;


 int FUNC_0 (int *) ;
 struct f_phonet* FUNC_1 (struct usb_function*) ;
 struct phonet_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct usb_function *VAR_0)
{
 struct f_phonet *VAR_1 = FUNC_1(VAR_0);
 struct net_device *VAR_2 = VAR_1->dev;
 struct phonet_port *VAR_3 = FUNC_2(VAR_2);

 FUNC_3(VAR_2);
 VAR_3->usb = ((void*)0);

 FUNC_4(VAR_1->out_ep);
 FUNC_4(VAR_1->in_ep);
 if (VAR_1->rx.skb) {
  FUNC_0(VAR_1->rx.skb);
  VAR_1->rx.skb = ((void*)0);
 }
}
