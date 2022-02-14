
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data; } ;
struct hci_event_hdr {scalar_t__ evt; } ;
struct hci_ev_cmd_complete {int opcode; } ;
struct TYPE_3__ {int sendcmdflag; } ;
struct btmrvl_private {TYPE_2__* adapter; TYPE_1__ btmrvl_dev; } ;
struct TYPE_4__ {int cmd_complete; int cmd_wait_q; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct btmrvl_private *VAR_3, struct sk_buff *VAR_4)
{
 struct hci_event_hdr *VAR_5 = (void *) VAR_4->data;
 struct hci_ev_cmd_complete *VAR_6;
 u16 VAR_7, VAR_8;

 if (VAR_5->evt == VAR_2) {
  VAR_6 = (void *) (VAR_4->data + VAR_1);
  VAR_7 = FUNC_0(VAR_6->opcode);
  VAR_8 = FUNC_1(VAR_7);
  if (VAR_8 == VAR_0 &&
     VAR_3->btmrvl_dev.sendcmdflag) {
   VAR_3->btmrvl_dev.sendcmdflag = 0;
   VAR_3->adapter->cmd_complete = 1;
   FUNC_2(&VAR_3->adapter->cmd_wait_q);
  }
 }
}
