
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {struct ncp_server* sk_user_data; } ;
struct TYPE_2__ {int tq; } ;
struct ncp_server {TYPE_1__ rcv; int (* data_ready ) (struct sock*,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sock*,int) ;

void FUNC_2(struct sock *VAR_0, int VAR_1)
{
 struct ncp_server *VAR_2 = VAR_0->sk_user_data;

 VAR_2->data_ready(VAR_0, VAR_1);
 FUNC_0(&VAR_2->rcv.tq);
}
