
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sk_buff {int * data; scalar_t__ len; } ;
struct TYPE_12__ {scalar_t__ flags; } ;
struct TYPE_13__ {TYPE_3__ data_b3_req; } ;
struct TYPE_10__ {int cmd; scalar_t__ subcmd; } ;
struct TYPE_11__ {TYPE_1__ cmd; } ;
struct TYPE_14__ {TYPE_4__ msg; TYPE_2__ hdr; } ;
typedef TYPE_5__ actcapi_msg ;
struct TYPE_15__ {struct sk_buff* sbuf; int ackq; scalar_t__ need_b3ack; int * ack_msg; int ilock; int lock; int sndq; } ;
typedef TYPE_6__ act2000_card ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,void*) ;
 scalar_t__ FUNC_9 (int ,void*) ;

void
FUNC_10(act2000_card * VAR_1)
{
 unsigned long VAR_2;
 struct sk_buff *VAR_3;
 actcapi_msg *VAR_4;
 int VAR_5;

        if (FUNC_9(VAR_0, (void *) &VAR_1->ilock) != 0)
  return;
 while (1) {
  FUNC_6(&VAR_1->lock, VAR_2);
  if (!(VAR_1->sbuf)) {
   if ((VAR_1->sbuf = FUNC_3(&VAR_1->sndq))) {
    VAR_1->ack_msg = VAR_1->sbuf->data;
    VAR_4 = (actcapi_msg *)VAR_1->sbuf->data;
    if ((VAR_4->hdr.cmd.cmd == 0x86) &&
        (VAR_4->hdr.cmd.subcmd == 0) ) {

     VAR_1->need_b3ack = VAR_4->msg.data_b3_req.flags;
     VAR_4->msg.data_b3_req.flags = 0;
    }
   }
  }
  FUNC_7(&VAR_1->lock, VAR_2);
  if (!(VAR_1->sbuf)) {

   FUNC_8(VAR_0, (void *) &VAR_1->ilock);
   return;
  }
  VAR_3 = VAR_1->sbuf;
  VAR_5 = 0;
  while (VAR_3->len) {
   if (FUNC_0(VAR_1, *(VAR_3->data))) {

    FUNC_8(VAR_0, (void *) &VAR_1->ilock);

    FUNC_1(VAR_1);
    return;
   }
   FUNC_4(VAR_3, 1);
   VAR_5++;
  }
  VAR_4 = (actcapi_msg *)VAR_1->ack_msg;
  if ((VAR_4->hdr.cmd.cmd == 0x86) &&
      (VAR_4->hdr.cmd.subcmd == 0) ) {




   VAR_3->data = VAR_1->ack_msg;

   VAR_4->msg.data_b3_req.flags = VAR_1->need_b3ack;
   FUNC_5(&VAR_1->ackq, VAR_3);
  } else
   FUNC_2(VAR_3);
  VAR_1->sbuf = ((void*)0);
 }
}
