
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct conninfo_tcp {int tcpci_tcp_info; int tcpci_peer_pid; } ;


 int FUNC_0 (struct socket*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct socket*,int *) ;

void
FUNC_3(struct socket *VAR_0, struct conninfo_tcp *VAR_1)
{
 (void) FUNC_2(VAR_0, &VAR_1->tcpci_peer_pid);
 FUNC_1(FUNC_0(VAR_0), &VAR_1->tcpci_tcp_info);
}
