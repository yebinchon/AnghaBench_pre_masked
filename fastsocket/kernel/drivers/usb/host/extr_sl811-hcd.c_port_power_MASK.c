
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int controller; } ;
struct usb_hcd {TYPE_2__ self; int state; } ;
struct sl811 {int port1; int irq_enable; int ctrl1; TYPE_1__* board; } ;
struct TYPE_3__ {int (* reset ) (int ) ;int (* port_power ) (int ,int) ;} ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 struct usb_hcd* FUNC_2 (struct sl811*) ;
 int FUNC_3 (struct sl811*,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct sl811 *VAR_9, int VAR_10)
{
 struct usb_hcd *VAR_11 = FUNC_2(VAR_9);


 if (VAR_10) {
  if (VAR_9->port1 & (1 << VAR_8))
   return;

  VAR_9->port1 = (1 << VAR_8);
  VAR_9->irq_enable = VAR_3;
 } else {
  VAR_9->port1 = 0;
  VAR_9->irq_enable = 0;
  VAR_11->state = VAR_0;
 }
 VAR_9->ctrl1 = 0;
 FUNC_3(VAR_9, VAR_4, 0);
 FUNC_3(VAR_9, VAR_5, ~0);

 if (VAR_9->board && VAR_9->board->port_power) {

  FUNC_0("power %s\n", VAR_10 ? "on" : "off");
  VAR_9->board->port_power(VAR_11->self.controller, VAR_10);
 }


 if (VAR_9->board && VAR_9->board->reset)
  VAR_9->board->reset(VAR_11->self.controller);
 else {
  FUNC_3(VAR_9, VAR_2, VAR_1);
  FUNC_1(20);
 }

 FUNC_3(VAR_9, VAR_4, 0);
 FUNC_3(VAR_9, VAR_2, VAR_9->ctrl1);
 FUNC_3(VAR_9, VAR_7, VAR_6);
 FUNC_3(VAR_9, VAR_4, VAR_9->irq_enable);


}
