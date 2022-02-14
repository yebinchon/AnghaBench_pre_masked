
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {scalar_t__ number_of_packets; scalar_t__ interval; int complete; scalar_t__ hcpriv; int dev; } ;
struct TYPE_2__ {struct urb* urb; } ;
struct mimio {int greeted; TYPE_1__ in; int udev; scalar_t__ present; int open; } ;
struct input_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 struct mimio* FUNC_3 (struct input_dev*) ;
 int FUNC_4 (struct mimio*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_7(struct input_dev *VAR_4)
{
 int VAR_5;
 struct mimio *VAR_6;

 VAR_5 = 0;
 FUNC_2(&VAR_3);
 VAR_6 = FUNC_3(VAR_4);
 FUNC_0(&VAR_4->dev, "mimio_open\n");

 if (VAR_6 == ((void*)0)) {
  FUNC_1(&VAR_4->dev, "null mimio.\n");
  VAR_5 = -VAR_1;
  goto exit;
 }

 if (VAR_6->open++)
  goto exit;

 if (VAR_6->present && !VAR_6->greeted) {
  struct urb *VAR_7 = VAR_6->in.urb;
  VAR_6->in.urb->dev = VAR_6->udev;
  VAR_5 = FUNC_6(VAR_6->in.urb, VAR_2);
  if (VAR_5) {
   FUNC_1(&VAR_4->dev, "usb_submit_urb failure "
    "(res = %d: %s). Not greeting.\n",
    VAR_5,
    (!VAR_7 ? "urb is NULL" :
     (VAR_7->hcpriv ? "urb->hcpriv is non-NULL" :
      (!VAR_7->complete ? "urb is not complete" :
       (VAR_7->number_of_packets <= 0 ? "urb has no packets" :
        (VAR_7->interval <= 0 ? "urb interval too small" :
         "urb interval too large or some other error"))))));
   VAR_5 = -VAR_0;
   goto exit;
  }
  VAR_5 = FUNC_4(VAR_6);
  if (VAR_5 == 0) {
   FUNC_0(&VAR_4->dev, "Mimio greeted OK.\n");
   VAR_6->greeted = 1;
  } else {
   FUNC_0(&VAR_4->dev, "Mimio greet Failure (%d)\n",
    VAR_5);
  }
 }

exit:
 FUNC_5(&VAR_3);
 return VAR_5;
}
