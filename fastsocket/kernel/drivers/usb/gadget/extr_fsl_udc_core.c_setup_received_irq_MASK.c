
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct usb_ctrlrequest {int bRequest; int bRequestType; int wLength; int wIndex; int wValue; } ;
struct TYPE_6__ {int b_hnp_enable; int a_hnp_support; int a_alt_hnp_support; } ;
struct fsl_udc {int max_ep; int ep0_dir; int ep0_state; int lock; int local_setup_buff; TYPE_2__ gadget; TYPE_1__* driver; } ;
struct fsl_ep {int ep; } ;
struct TYPE_5__ {scalar_t__ (* setup ) (TYPE_2__*,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;




 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct fsl_udc*,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct fsl_udc*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct fsl_udc*,int ) ;
 int FUNC_3 (struct fsl_udc*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_2__*) ;
 struct fsl_ep* FUNC_6 (struct fsl_udc*,int) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_12 (TYPE_2__*,int *) ;
 int FUNC_13 (struct fsl_udc*,int ) ;

__attribute__((used)) static void FUNC_14(struct fsl_udc *VAR_15,
  struct usb_ctrlrequest *VAR_16)
{
 u16 VAR_17 = FUNC_8(VAR_16->wValue);
 u16 VAR_18 = FUNC_8(VAR_16->wIndex);
 u16 VAR_19 = FUNC_8(VAR_16->wLength);

 FUNC_13(VAR_15, 0);


 switch (VAR_16->bRequest) {
 case 130:

  if ((VAR_16->bRequestType & (VAR_7 | VAR_12))
     != (VAR_7 | VAR_13))
   break;
  FUNC_0(VAR_15, VAR_16->bRequestType, VAR_17, VAR_18, VAR_19);
  return;

 case 129:

  if (VAR_16->bRequestType != (VAR_8 | VAR_13
      | VAR_9))
   break;
  FUNC_1(VAR_15, VAR_17, VAR_18, VAR_19);
  return;

 case 131:
 case 128:

 {
  int VAR_20 = -VAR_2;

  if ((VAR_16->bRequestType & (VAR_11 | VAR_12))
    == (VAR_10 | VAR_13)) {
   int VAR_21 = FUNC_7(VAR_18);
   struct fsl_ep *VAR_22;

   if (VAR_17 != 0 || VAR_19 != 0 || VAR_21 > VAR_15->max_ep)
    break;
   VAR_22 = FUNC_6(VAR_15, VAR_21);

   FUNC_10(&VAR_15->lock);
   VAR_20 = FUNC_4(&VAR_22->ep,
     (VAR_16->bRequest == 128)
      ? 1 : 0);
   FUNC_9(&VAR_15->lock);

  } else if ((VAR_16->bRequestType & (VAR_11
    | VAR_12)) == (VAR_9
    | VAR_13)) {


   if (!FUNC_5(&VAR_15->gadget))
    break;
   else if (VAR_16->bRequest == VAR_6)
    VAR_15->gadget.b_hnp_enable = 1;
   else if (VAR_16->bRequest == VAR_5)
    VAR_15->gadget.a_hnp_support = 1;
   else if (VAR_16->bRequest ==
     VAR_4)
    VAR_15->gadget.a_alt_hnp_support = 1;
   else
    break;
   VAR_20 = 0;
  } else
   break;

  if (VAR_20 == 0) {
   if (FUNC_2(VAR_15, VAR_3))
    FUNC_3(VAR_15);
  }
  return;
 }

 default:
  break;
 }


 if (VAR_19) {

  VAR_15->ep0_dir = (VAR_16->bRequestType & VAR_7)
    ? VAR_7 : VAR_8;
  FUNC_10(&VAR_15->lock);
  if (VAR_15->driver->setup(&VAR_15->gadget,
    &VAR_15->local_setup_buff) < 0)
   FUNC_3(VAR_15);
  FUNC_9(&VAR_15->lock);
  VAR_15->ep0_state = (VAR_16->bRequestType & VAR_7)
    ? VAR_1 : VAR_0;
 } else {

  VAR_15->ep0_dir = VAR_7;
  FUNC_10(&VAR_15->lock);
  if (VAR_15->driver->setup(&VAR_15->gadget,
    &VAR_15->local_setup_buff) < 0)
   FUNC_3(VAR_15);
  FUNC_9(&VAR_15->lock);
  VAR_15->ep0_state = VAR_14;
 }
}
