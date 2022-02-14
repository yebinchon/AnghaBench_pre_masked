
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u8 ;
typedef int u16 ;
struct usb_ctrlrequest {int bRequestType; int wIndex; int wLength; } ;
struct lh7a40x_udc {struct lh7a40x_ep* ep; } ;
struct lh7a40x_ep {int ep_type; int csr1; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;



 scalar_t__ FUNC_1 (struct lh7a40x_ep*) ;

 int FUNC_2 (struct lh7a40x_ep*) ;
 int FUNC_3 (struct lh7a40x_ep*,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct lh7a40x_udc *VAR_13,
         struct usb_ctrlrequest *VAR_14)
{
 struct lh7a40x_ep *VAR_15 = &VAR_13->ep[0];
 struct lh7a40x_ep *VAR_16;
 int VAR_17 = (VAR_14->bRequestType & VAR_12);
 u16 VAR_18 = 0;

 if (VAR_17 == VAR_11) {




  FUNC_0("GET_STATUS: USB_RECIP_INTERFACE\n");
 } else if (VAR_17 == VAR_9) {
  FUNC_0("GET_STATUS: USB_RECIP_DEVICE\n");
  VAR_18 |= (1 << 0);

 } else if (VAR_17 == VAR_10) {
  int VAR_19 = (VAR_14->wIndex & ~VAR_5);

  FUNC_0
      ("GET_STATUS: USB_RECIP_ENDPOINT (%d), ctrl->wLength = %d\n",
       VAR_19, VAR_14->wLength);

  if (VAR_14->wLength > 2 || VAR_19 > 3)
   return -VAR_0;

  VAR_16 = &VAR_13->ep[VAR_19];
  if (FUNC_2(VAR_16) != ((VAR_14->wIndex & VAR_5) ? 1 : 0)
      && FUNC_1(VAR_16) != 0) {
   return -VAR_0;
  }

  FUNC_6(FUNC_1(VAR_16));


  switch (VAR_16->ep_type) {
  case 129:
   VAR_18 =
       (FUNC_4(VAR_16->csr1) & VAR_4) ==
       VAR_4;
   break;
  case 131:
  case 128:
   VAR_18 =
       (FUNC_4(VAR_16->csr1) & VAR_7) ==
       VAR_7;
   break;
  case 130:
   VAR_18 =
       (FUNC_4(VAR_16->csr1) & VAR_8) ==
       VAR_8;
   break;
  }


  FUNC_6(0);

  FUNC_0("GET_STATUS, ep: %d (%x), val = %d\n", VAR_19,
       VAR_14->wIndex, VAR_18);
 } else {
  FUNC_0("Unknown REQ TYPE: %d\n", VAR_17);
  return -VAR_0;
 }


 FUNC_5((VAR_1), VAR_6);

 FUNC_3(VAR_15, (u8 *) & VAR_18, sizeof(VAR_18));

 FUNC_5((VAR_3 | VAR_2), VAR_6);

 return 0;
}
