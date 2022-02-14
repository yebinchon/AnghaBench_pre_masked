
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ctrlrequest {void* wLength; void* wIndex; void* wValue; int bRequest; int bRequestType; } ;
struct ub_scsi_cmd {int dummy; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct ub_dev {TYPE_1__ work_timer; int work_done; int work_urb; int send_ctrl_pipe; int dev; struct usb_ctrlrequest work_cr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 void* FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 int FUNC_4 (int *,int ,int ,unsigned char*,int *,int ,int ,struct ub_dev*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(struct ub_dev *VAR_8, struct ub_scsi_cmd *VAR_9,
    int VAR_10)
{
 int VAR_11;
 struct usb_ctrlrequest *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_5(VAR_10);
 if (FUNC_6 (VAR_10))
  VAR_11 |= VAR_2;

 VAR_12 = &VAR_8->work_cr;
 VAR_12->bRequestType = VAR_4;
 VAR_12->bRequest = VAR_5;
 VAR_12->wValue = FUNC_2(VAR_3);
 VAR_12->wIndex = FUNC_2(VAR_11);
 VAR_12->wLength = FUNC_2(0);

 FUNC_0(VAR_8->work_done);

 FUNC_4(&VAR_8->work_urb, VAR_8->dev, VAR_8->send_ctrl_pipe,
     (unsigned char*) VAR_12, ((void*)0), 0, VAR_7, VAR_8);

 if ((VAR_13 = FUNC_7(&VAR_8->work_urb, VAR_0)) != 0) {
  FUNC_3(&VAR_8->work_done);
  return VAR_13;
 }

 VAR_8->work_timer.expires = VAR_6 + VAR_1;
 FUNC_1(&VAR_8->work_timer);
 return 0;
}
