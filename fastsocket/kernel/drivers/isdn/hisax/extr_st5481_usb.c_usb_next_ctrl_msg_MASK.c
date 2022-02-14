
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {unsigned char* setup_packet; int dev; } ;
struct TYPE_3__ {int * data; int f; } ;
struct st5481_ctrl {TYPE_1__ msg_fifo; int busy; } ;
struct st5481_adapter {int usb_dev; struct st5481_ctrl ctrl; } ;
struct TYPE_4__ {int wIndex; int wValue; int bRequest; } ;
struct ctrl_msg {TYPE_2__ dr; } ;


 int FUNC_0 (int,char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct urb*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_1,
         struct st5481_adapter *VAR_2)
{
 struct st5481_ctrl *VAR_3 = &VAR_2->ctrl;
 int VAR_4;

 if (FUNC_4(0, &VAR_3->busy)) {
  return;
 }

 if ((VAR_4 = FUNC_2(&VAR_3->msg_fifo.f)) < 0) {
  FUNC_3(0,&VAR_3->busy);
  return;
 }
 VAR_1->setup_packet =
  (unsigned char *)&VAR_3->msg_fifo.data[VAR_4];

 FUNC_0(1,"request=0x%02x,value=0x%04x,index=%x",
     ((struct ctrl_msg *)VAR_1->setup_packet)->dr.bRequest,
     ((struct ctrl_msg *)VAR_1->setup_packet)->dr.wValue,
     ((struct ctrl_msg *)VAR_1->setup_packet)->dr.wIndex);


 VAR_1->dev = VAR_2->usb_dev;

 FUNC_1(VAR_1, VAR_0);
}
