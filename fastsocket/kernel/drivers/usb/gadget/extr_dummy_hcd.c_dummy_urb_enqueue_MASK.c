
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct urbp {int urbp_list; struct urb* urb; } ;
struct urb {scalar_t__ dev; int error_count; int pipe; struct urbp* hcpriv; scalar_t__ transfer_buffer_length; int transfer_buffer; } ;
struct dummy {scalar_t__ udev; int lock; int timer; int urbp_list; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dummy*) ;
 struct dummy* FUNC_2 (struct usb_hcd*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct urbp*) ;
 struct urbp* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct usb_hcd*,struct urb*) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14 (
 struct usb_hcd *VAR_4,
 struct urb *VAR_5,
 gfp_t VAR_6
) {
 struct dummy *VAR_7;
 struct urbp *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 if (!VAR_5->transfer_buffer && VAR_5->transfer_buffer_length)
  return -VAR_0;

 VAR_8 = FUNC_4 (sizeof *VAR_8, VAR_6);
 if (!VAR_8)
  return -VAR_1;
 VAR_8->urb = VAR_5;

 VAR_7 = FUNC_2 (VAR_4);
 FUNC_7 (&VAR_7->lock, VAR_9);
 VAR_10 = FUNC_12(VAR_4, VAR_5);
 if (VAR_10) {
  FUNC_3(VAR_8);
  goto done;
 }

 if (!VAR_7->udev) {
  VAR_7->udev = VAR_5->dev;
  FUNC_11 (VAR_7->udev);
 } else if (FUNC_10 (VAR_7->udev != VAR_5->dev))
  FUNC_0 (FUNC_1(VAR_7), "usb_device address has changed!\n");

 FUNC_5 (&VAR_8->urbp_list, &VAR_7->urbp_list);
 VAR_5->hcpriv = VAR_8;
 if (FUNC_13 (VAR_5->pipe) == VAR_2)
  VAR_5->error_count = 1;


 if (!FUNC_9 (&VAR_7->timer))
  FUNC_6 (&VAR_7->timer, VAR_3 + 1);

 done:
 FUNC_8(&VAR_7->lock, VAR_9);
 return VAR_10;
}
