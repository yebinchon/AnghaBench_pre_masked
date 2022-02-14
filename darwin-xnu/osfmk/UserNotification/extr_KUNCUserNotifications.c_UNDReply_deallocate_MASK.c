
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct UNDReply {int dummy; } ;
typedef int ipc_port_t ;
typedef TYPE_1__* UNDReplyRef ;
struct TYPE_6__ {int lock; int self_port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int *,int *) ;

void
FUNC_8(
 UNDReplyRef VAR_4)
{
 ipc_port_t VAR_5;

 FUNC_1(VAR_4);
 VAR_5 = VAR_4->self_port;
 FUNC_3(FUNC_0(VAR_5));
 FUNC_4(VAR_5, VAR_1, VAR_0);
 VAR_4->self_port = VAR_2;
 FUNC_2(VAR_4);

 FUNC_5(VAR_5);
 FUNC_7(&VAR_4->lock, &VAR_3);
 FUNC_6(VAR_4, sizeof(struct UNDReply));
 return;
}
