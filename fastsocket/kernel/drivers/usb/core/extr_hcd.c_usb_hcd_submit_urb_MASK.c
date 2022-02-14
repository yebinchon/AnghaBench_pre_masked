
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_hcd {int self; TYPE_1__* driver; } ;
struct urb {int reject; TYPE_2__* dev; int use_count; int urb_list; int * hcpriv; } ;
typedef int gfp_t ;
struct TYPE_4__ {int urbnum; int bus; } ;
struct TYPE_3__ {int (* urb_enqueue ) (struct usb_hcd*,struct urb*,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct usb_hcd* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct usb_hcd*,struct urb*,int ) ;
 int FUNC_7 (struct usb_hcd*,struct urb*) ;
 int FUNC_8 (struct usb_hcd*,struct urb*,int ) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct usb_hcd*,struct urb*) ;
 int FUNC_11 (struct urb*) ;
 int VAR_0 ;
 int FUNC_12 (struct urb*) ;
 int FUNC_13 (int *,struct urb*) ;
 int FUNC_14 (int *,struct urb*,int) ;
 int FUNC_15 (int *) ;

int FUNC_16 (struct urb *VAR_1, gfp_t VAR_2)
{
 int VAR_3;
 struct usb_hcd *VAR_4 = FUNC_4(VAR_1->dev->bus);





 FUNC_11(VAR_1);
 FUNC_2(&VAR_1->use_count);
 FUNC_2(&VAR_1->dev->urbnum);
 FUNC_13(&VAR_4->self, VAR_1);
 VAR_3 = FUNC_6(VAR_4, VAR_1, VAR_2);
 if (FUNC_9(VAR_3)) {
  FUNC_14(&VAR_4->self, VAR_1, VAR_3);
  goto error;
 }

 if (FUNC_5(VAR_1->dev))
  VAR_3 = FUNC_7(VAR_4, VAR_1);
 else
  VAR_3 = VAR_4->driver->urb_enqueue(VAR_4, VAR_1, VAR_2);

 if (FUNC_9(VAR_3)) {
  FUNC_14(&VAR_4->self, VAR_1, VAR_3);
  FUNC_10(VAR_4, VAR_1);
 error:
  VAR_1->hcpriv = ((void*)0);
  FUNC_0(&VAR_1->urb_list);
  FUNC_1(&VAR_1->use_count);
  FUNC_1(&VAR_1->dev->urbnum);
  if (FUNC_3(&VAR_1->reject))
   FUNC_15(&VAR_0);
  FUNC_12(VAR_1);
 }
 return VAR_3;
}
