
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {struct ncp_server* sk_user_data; } ;
struct TYPE_2__ {int tq; } ;
struct ncp_server {TYPE_1__ rcv; int (* error_report ) (struct sock*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sock*) ;

void FUNC_2(struct sock *VAR_0)
{
 struct ncp_server *VAR_1 = VAR_0->sk_user_data;

 VAR_1->error_report(VAR_0);
 FUNC_0(&VAR_1->rcv.tq);
}
