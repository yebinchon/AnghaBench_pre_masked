
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct sk_buff {int dummy; } ;
struct rxrpc_call {int dummy; } ;
struct afs_call {struct rxrpc_call* rxcall; TYPE_1__* type; int state; int rx_queue; int waitq; int * wait_mode; int async_work; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct rxrpc_call*) ;
 int FUNC_2 (char*,...) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct afs_call*) ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct afs_call* FUNC_8 (int,int ) ;
 struct rxrpc_call* FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int ) ;
 struct sk_buff* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct work_struct *VAR_8)
{
 struct rxrpc_call *VAR_9;
 struct afs_call *VAR_10 = ((void*)0);
 struct sk_buff *VAR_11;

 while ((VAR_11 = FUNC_11(&VAR_4))) {
  FUNC_2("new call");


  FUNC_4(VAR_11);

  if (!VAR_10) {
   VAR_10 = FUNC_8(sizeof(struct afs_call), VAR_1);
   if (!VAR_10) {
    FUNC_10(VAR_7);
    return;
   }

   FUNC_0(&VAR_10->async_work, VAR_6);
   VAR_10->wait_mode = &VAR_3;
   VAR_10->type = &VAR_2;
   FUNC_7(&VAR_10->waitq);
   FUNC_12(&VAR_10->rx_queue);
   VAR_10->state = VAR_0;

   FUNC_2("CALL %p{%s} [%d]",
          VAR_10, VAR_10->type->name,
          FUNC_6(&VAR_5));
   FUNC_5(&VAR_5);
  }

  VAR_9 = FUNC_9(VAR_7,
        (unsigned long) VAR_10);
  if (!FUNC_1(VAR_9)) {
   VAR_10->rxcall = VAR_9;
   VAR_10 = ((void*)0);
  }
 }

 if (VAR_10)
  FUNC_3(VAR_10);
}
