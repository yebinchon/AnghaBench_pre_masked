
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usba_udc {int lock; } ;
struct TYPE_2__ {int name; } ;
struct usba_ep {scalar_t__ is_in; int queue; TYPE_1__ ep; scalar_t__ is_isoc; int desc; struct usba_udc* udc; } ;
struct usb_ep {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,long) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct usba_ep* FUNC_5 (struct usb_ep*) ;
 int FUNC_6 (struct usba_ep*,int ) ;
 int FUNC_7 (struct usba_ep*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct usb_ep *VAR_11, int VAR_12)
{
 struct usba_ep *VAR_13 = FUNC_5(VAR_11);
 struct usba_udc *VAR_14 = VAR_13->udc;
 unsigned long VAR_15;
 int VAR_16 = 0;

 FUNC_0(VAR_3, "endpoint %s: %s HALT\n", VAR_13->ep.name,
   VAR_12 ? "set" : "clear");

 if (!VAR_13->desc) {
  FUNC_0(VAR_2, "Attempted to halt uninitialized ep %s\n",
    VAR_13->ep.name);
  return -VAR_5;
 }
 if (VAR_13->is_isoc) {
  FUNC_0(VAR_2, "Attempted to halt isochronous ep %s\n",
    VAR_13->ep.name);
  return -VAR_6;
 }

 FUNC_3(&VAR_14->lock, VAR_15);





 if (!FUNC_2(&VAR_13->queue)
   || ((VAR_12 && VAR_13->is_in && (FUNC_6(VAR_13, VAR_8)
     & FUNC_1(VAR_0, -1L))))) {
  VAR_16 = -VAR_4;
 } else {
  if (VAR_12)
   FUNC_7(VAR_13, VAR_7, VAR_9);
  else
   FUNC_7(VAR_13, VAR_1,
     VAR_9 | VAR_10);
  FUNC_6(VAR_13, VAR_8);
 }

 FUNC_4(&VAR_14->lock, VAR_15);

 return VAR_16;
}
