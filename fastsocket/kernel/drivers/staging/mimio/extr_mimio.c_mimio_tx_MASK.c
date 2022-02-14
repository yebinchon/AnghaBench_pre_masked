
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* urb; } ;
struct mimio {int txflags; TYPE_2__ out; int waitq; TYPE_1__* idev; int txlock; int udev; } ;
struct TYPE_7__ {int transfer_buffer_length; int transfer_buffer; int dev; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *) ;
 int VAR_7 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_14(struct mimio *VAR_9, const char *VAR_10, int VAR_11)
{
 int VAR_12;
 int VAR_13;
 unsigned long VAR_14;
 FUNC_0(VAR_8, VAR_7);

 if (!(FUNC_4(VAR_11))) {
  FUNC_3(&VAR_9->idev->dev, "invalid arg: nbytes: %d.\n",
   VAR_11);
  return -VAR_0;
 }




 VAR_9->out.urb->dev = VAR_9->udev;
 VAR_9->out.urb->transfer_buffer_length = VAR_11;
 FUNC_5(VAR_9->out.urb->transfer_buffer, VAR_10, VAR_11);




 FUNC_10(&VAR_9->txlock, VAR_14);
 VAR_9->txflags = VAR_4;
 VAR_12 = FUNC_12(VAR_9->out.urb, VAR_1);
 FUNC_11(&VAR_9->txlock, VAR_14);
 FUNC_2(&VAR_9->idev->dev, "rslt: %d.\n", VAR_12);

 if (VAR_12) {
  FUNC_3(&VAR_9->idev->dev, "usb_submit_urb failure: %d.\n",
   VAR_12);
  return VAR_12;
 }





 VAR_13 = VAR_2;
 FUNC_9(VAR_5);
 FUNC_1(&VAR_9->waitq, &VAR_8);

 while (VAR_13 && ((VAR_9->txflags & VAR_3) == 0)) {
  VAR_13 = FUNC_8(VAR_13);
  FUNC_7();
 }

 if ((VAR_9->txflags & VAR_3) == 0)
  FUNC_2(&VAR_9->idev->dev, "tx timed out.\n");





 FUNC_9(VAR_6);
 FUNC_6(&VAR_9->waitq, &VAR_8);
 FUNC_13(VAR_9->out.urb);

 return VAR_12;
}
