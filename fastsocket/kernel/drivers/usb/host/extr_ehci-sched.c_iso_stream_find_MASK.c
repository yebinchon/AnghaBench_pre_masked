
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_host_endpoint {struct ehci_iso_stream* hcpriv; } ;
struct urb {int pipe; TYPE_1__* dev; int interval; } ;
struct ehci_iso_stream {int * hw; struct usb_host_endpoint* ep; } ;
struct ehci_hcd {int lock; } ;
struct TYPE_2__ {int devpath; struct usb_host_endpoint** ep_out; struct usb_host_endpoint** ep_in; } ;


 int VAR_0 ;
 int FUNC_0 (struct ehci_hcd*,char*,int ,unsigned int,char*) ;
 struct ehci_iso_stream* FUNC_1 (int ) ;
 struct ehci_iso_stream* FUNC_2 (struct ehci_iso_stream*) ;
 int FUNC_3 (struct ehci_hcd*,struct ehci_iso_stream*,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 unsigned int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static struct ehci_iso_stream *
FUNC_10 (struct ehci_hcd *VAR_1, struct urb *VAR_2)
{
 unsigned VAR_3;
 struct ehci_iso_stream *VAR_4;
 struct usb_host_endpoint *VAR_5;
 unsigned long VAR_6;

 VAR_3 = FUNC_8 (VAR_2->pipe);
 if (FUNC_9(VAR_2->pipe))
  VAR_5 = VAR_2->dev->ep_in[VAR_3];
 else
  VAR_5 = VAR_2->dev->ep_out[VAR_3];

 FUNC_5 (&VAR_1->lock, VAR_6);
 VAR_4 = VAR_5->hcpriv;

 if (FUNC_7 (VAR_4 == ((void*)0))) {
  VAR_4 = FUNC_1(VAR_0);
  if (FUNC_4 (VAR_4 != ((void*)0))) {

   VAR_5->hcpriv = VAR_4;
   VAR_4->ep = VAR_5;
   FUNC_3(VAR_1, VAR_4, VAR_2->dev, VAR_2->pipe,
     VAR_2->interval);
  }


 } else if (FUNC_7 (VAR_4->hw != ((void*)0))) {
  FUNC_0 (VAR_1, "dev %s ep%d%s, not iso??\n",
   VAR_2->dev->devpath, VAR_3,
   FUNC_9(VAR_2->pipe) ? "in" : "out");
  VAR_4 = ((void*)0);
 }


 VAR_4 = FUNC_2 (VAR_4);

 FUNC_6 (&VAR_1->lock, VAR_6);
 return VAR_4;
}
