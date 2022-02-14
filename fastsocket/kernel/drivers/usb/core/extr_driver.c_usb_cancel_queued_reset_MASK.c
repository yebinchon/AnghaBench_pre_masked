
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {scalar_t__ reset_running; int reset_ws; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct usb_interface *VAR_0)
{
 if (VAR_0->reset_running == 0)
  FUNC_0(&VAR_0->reset_ws);
}
