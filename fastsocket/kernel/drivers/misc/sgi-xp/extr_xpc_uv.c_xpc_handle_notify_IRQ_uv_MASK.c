
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xpc_partition {int dummy; } ;
struct TYPE_3__ {short partid; } ;
struct xpc_notify_mq_msg_uv {TYPE_1__ hdr; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int gru_mq_desc; } ;


 int VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (int ,char*,short) ;
 int FUNC_1 (int ,struct xpc_notify_mq_msg_uv*) ;
 struct xpc_notify_mq_msg_uv* FUNC_2 (int ) ;
 int FUNC_3 (struct xpc_partition*,struct xpc_notify_mq_msg_uv*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct xpc_partition*) ;
 scalar_t__ FUNC_5 (struct xpc_partition*) ;
 struct xpc_partition* VAR_4 ;

__attribute__((used)) static irqreturn_t
FUNC_6(int VAR_5, void *VAR_6)
{
 struct xpc_notify_mq_msg_uv *VAR_7;
 short VAR_8;
 struct xpc_partition *VAR_9;

 while ((VAR_7 = FUNC_2(VAR_2->gru_mq_desc)) !=
        ((void*)0)) {

  VAR_8 = VAR_7->hdr.partid;
  if (VAR_8 < 0 || VAR_8 >= VAR_1) {
   FUNC_0(VAR_3, "xpc_handle_notify_IRQ_uv() received "
    "invalid partid=0x%x in message\n", VAR_8);
  } else {
   VAR_9 = &VAR_4[VAR_8];

   if (FUNC_5(VAR_9)) {
    FUNC_3(VAR_9, VAR_7);
    FUNC_4(VAR_9);
   }
  }

  FUNC_1(VAR_2->gru_mq_desc, VAR_7);
 }

 return VAR_0;
}
