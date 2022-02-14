
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct dummy {int port_status; scalar_t__ rh_state; int lock; int re_timeout; scalar_t__ resuming; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct usb_hcd*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct dummy*) ;
 struct dummy* FUNC_3 (struct usb_hcd*) ;
 int VAR_4 ;
 int FUNC_4 (struct dummy*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_9 (struct usb_hcd *VAR_5, char *VAR_6)
{
 struct dummy *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_3 (VAR_5);

 FUNC_5 (&VAR_7->lock, VAR_8);
 if (!FUNC_0(VAR_5))
  goto done;

 if (VAR_7->resuming && FUNC_7 (VAR_4, VAR_7->re_timeout)) {
  VAR_7->port_status |= (VAR_2 << 16);
  VAR_7->port_status &= ~VAR_3;
  FUNC_4 (VAR_7);
 }

 if ((VAR_7->port_status & VAR_1) != 0) {
  *VAR_6 = (1 << 1);
  FUNC_1 (FUNC_2(VAR_7), "port status 0x%08x has changes\n",
    VAR_7->port_status);
  VAR_9 = 1;
  if (VAR_7->rh_state == VAR_0)
   FUNC_8 (VAR_5);
 }
done:
 FUNC_6 (&VAR_7->lock, VAR_8);
 return VAR_9;
}
