
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_partition {int dummy; } ;
struct xpc_activate_mq_msghdr_uv {short partid; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int gru_mq_desc; } ;


 int VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (int ,char*,short) ;
 int FUNC_1 (int ,struct xpc_activate_mq_msghdr_uv*) ;
 struct xpc_activate_mq_msghdr_uv* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (struct xpc_partition*,struct xpc_activate_mq_msghdr_uv*,int,int*) ;
 int VAR_4 ;
 int FUNC_5 (struct xpc_partition*) ;
 int FUNC_6 (struct xpc_partition*) ;
 struct xpc_partition* VAR_5 ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_6, void *VAR_7)
{
 struct xpc_activate_mq_msghdr_uv *VAR_8;
 short VAR_9;
 struct xpc_partition *VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 while (1) {
  VAR_8 = FUNC_2(VAR_3->gru_mq_desc);
  if (VAR_8 == ((void*)0))
   break;

  VAR_9 = VAR_8->partid;
  if (VAR_9 < 0 || VAR_9 >= VAR_1) {
   FUNC_0(VAR_4, "xpc_handle_activate_IRQ_uv() "
    "received invalid partid=0x%x in message\n",
    VAR_9);
  } else {
   VAR_10 = &VAR_5[VAR_9];

   VAR_12 = FUNC_6(VAR_10);
   FUNC_4(VAR_10, VAR_8,
            VAR_12,
            &VAR_11);
   if (VAR_12)
    FUNC_5(VAR_10);
  }

  FUNC_1(VAR_3->gru_mq_desc, VAR_8);
 }

 if (VAR_11)
  FUNC_3(&VAR_2);

 return VAR_0;
}
