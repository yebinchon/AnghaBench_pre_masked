
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct connection {struct socket* sock; } ;
struct TYPE_2__ {int sk_allocation; struct connection* sk_user_data; int sk_state_change; int sk_write_space; int sk_data_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct socket *VAR_4, struct connection *VAR_5)
{
 VAR_5->sock = VAR_4;


 VAR_5->sock->sk->sk_data_ready = VAR_1;
 VAR_5->sock->sk->sk_write_space = VAR_3;
 VAR_5->sock->sk->sk_state_change = VAR_2;
 VAR_5->sock->sk->sk_user_data = VAR_5;
 VAR_5->sock->sk->sk_allocation = VAR_0;
 return 0;
}
