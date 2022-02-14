
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct urb_priv {scalar_t__ state; TYPE_2__* ed; } ;
struct urb {struct urb_priv* hcpriv; TYPE_1__* dev; } ;
struct fhci_usb {scalar_t__ port_status; } ;
struct fhci_hcd {int lock; struct fhci_usb* usb_lld; } ;
struct TYPE_4__ {int state; } ;
struct TYPE_3__ {int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct fhci_hcd*,struct urb*) ;
 struct fhci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct usb_hcd*,struct urb*,int) ;

__attribute__((used)) static int FUNC_5(struct usb_hcd *VAR_4, struct urb *VAR_5, int VAR_6)
{
 struct fhci_hcd *VAR_7 = FUNC_1(VAR_4);
 struct fhci_usb *VAR_8 = VAR_7->usb_lld;
 int VAR_9 = -VAR_0;
 unsigned long VAR_10;

 if (!VAR_5 || !VAR_5->dev || !VAR_5->dev->bus)
  goto out;

 FUNC_2(&VAR_7->lock, VAR_10);

 VAR_9 = FUNC_4(VAR_4, VAR_5, VAR_6);
 if (VAR_9)
  goto out2;

 if (VAR_8->port_status != VAR_2) {
  struct urb_priv *VAR_11;





  VAR_11 = VAR_5->hcpriv;

  if (!VAR_11 || (VAR_11->state == VAR_3))
   goto out2;

  VAR_11->state = VAR_3;


  VAR_11->ed->state = VAR_1;
 } else {
  FUNC_0(VAR_7, VAR_5);
 }

out2:
 FUNC_3(&VAR_7->lock, VAR_10);
out:
 return VAR_9;
}
