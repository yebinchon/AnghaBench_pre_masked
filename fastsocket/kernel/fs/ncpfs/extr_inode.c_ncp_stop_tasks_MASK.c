
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_write_space; int sk_data_ready; int sk_error_report; } ;
struct ncp_server {int timeout_tm; int write_space; int data_ready; int error_report; TYPE_1__* ncp_sock; } ;
struct TYPE_2__ {struct sock* sk; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct ncp_server *VAR_0) {
 struct sock* VAR_1 = VAR_0->ncp_sock->sk;

 VAR_1->sk_error_report = VAR_0->error_report;
 VAR_1->sk_data_ready = VAR_0->data_ready;
 VAR_1->sk_write_space = VAR_0->write_space;
 FUNC_0(&VAR_0->timeout_tm);
 FUNC_1();
}
