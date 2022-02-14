
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_bus {int dummy; } ;
struct otg_transceiver {int dummy; } ;
struct TYPE_2__ {struct usb_bus* host; } ;
struct nop_usb_xceiv {TYPE_1__ otg; } ;


 int VAR_0 ;
 struct nop_usb_xceiv* FUNC_0 (struct otg_transceiver*) ;

__attribute__((used)) static int FUNC_1(struct otg_transceiver *VAR_1, struct usb_bus *VAR_2)
{
 struct nop_usb_xceiv *VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_1);

 if (!VAR_2) {
  VAR_3->otg.host = ((void*)0);
  return -VAR_0;
 }

 VAR_3->otg.host = VAR_2;
 return 0;
}
