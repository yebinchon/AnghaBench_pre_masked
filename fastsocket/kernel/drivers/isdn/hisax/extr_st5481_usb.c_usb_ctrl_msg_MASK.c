
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct TYPE_3__ {struct ctrl_msg* data; int f; } ;
struct st5481_ctrl {int urb; TYPE_1__ msg_fifo; } ;
struct st5481_adapter {struct st5481_ctrl ctrl; } ;
struct TYPE_4__ {scalar_t__ wLength; void* wIndex; void* wValue; void* bRequest; void* bRequestType; } ;
struct ctrl_msg {void* context; int complete; TYPE_2__ dr; } ;
typedef int ctrl_complete_t ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct st5481_adapter*) ;

__attribute__((used)) static void FUNC_4(struct st5481_adapter *VAR_0,
    u8 VAR_1, u8 VAR_2, u16 VAR_3, u16 VAR_4,
    ctrl_complete_t VAR_5, void *VAR_6)
{
 struct st5481_ctrl *VAR_7 = &VAR_0->ctrl;
 int VAR_8;
 struct ctrl_msg *VAR_9;

 if ((VAR_8 = FUNC_2(&VAR_7->msg_fifo.f)) < 0) {
  FUNC_0("control msg FIFO full");
  return;
 }
 VAR_9 = &VAR_7->msg_fifo.data[VAR_8];

 VAR_9->dr.bRequestType = VAR_2;
 VAR_9->dr.bRequest = VAR_1;
 VAR_9->dr.wValue = FUNC_1(&VAR_3);
 VAR_9->dr.wIndex = FUNC_1(&VAR_4);
 VAR_9->dr.wLength = 0;
 VAR_9->complete = VAR_5;
 VAR_9->context = VAR_6;

 FUNC_3(VAR_7->urb, VAR_0);
}
