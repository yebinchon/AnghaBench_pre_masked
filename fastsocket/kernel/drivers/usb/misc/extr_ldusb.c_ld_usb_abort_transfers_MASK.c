
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ld_usb {int interrupt_out_urb; scalar_t__ intf; scalar_t__ interrupt_out_busy; int interrupt_in_urb; scalar_t__ interrupt_in_running; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ld_usb *VAR_0)
{

 if (VAR_0->interrupt_in_running) {
  VAR_0->interrupt_in_running = 0;
  if (VAR_0->intf)
   FUNC_0(VAR_0->interrupt_in_urb);
 }
 if (VAR_0->interrupt_out_busy)
  if (VAR_0->intf)
   FUNC_0(VAR_0->interrupt_out_urb);
}
