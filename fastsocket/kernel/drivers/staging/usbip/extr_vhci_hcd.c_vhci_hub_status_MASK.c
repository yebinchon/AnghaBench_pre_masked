
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vhci_hcd {int* port_status; int lock; } ;
struct usb_hcd {scalar_t__ state; } ;


 int FUNC_0 (struct usb_hcd*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vhci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7(struct usb_hcd *VAR_3, char *VAR_4)
{
 struct vhci_hcd *VAR_5;
 unsigned long VAR_6;
 int VAR_7 = 0;


 unsigned long *VAR_8 = (unsigned long *) VAR_4;
 int VAR_9;
 int VAR_10 = 0;


 *VAR_8 = 0;

 VAR_5 = FUNC_1(VAR_3);

 FUNC_2(&VAR_5->lock, VAR_6);
 if (!FUNC_0(VAR_3)) {
  FUNC_5("hw accessible flag in on?\n");
  goto done;
 }


 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if ((VAR_5->port_status[VAR_9] & VAR_1)) {

   FUNC_5("port %d is changed\n", VAR_9);

   *VAR_8 |= 1 << (VAR_9 + 1);
   VAR_10 = 1;
  }
 }

 FUNC_6("changed %d\n", VAR_10);

 if (VAR_3->state == VAR_0)
  FUNC_4(VAR_3);

 if (VAR_10)
  VAR_7 = 1 + (VAR_2 / 8);
 else
  VAR_7 = 0;

done:
 FUNC_3(&VAR_5->lock, VAR_6);
 return VAR_7;
}
