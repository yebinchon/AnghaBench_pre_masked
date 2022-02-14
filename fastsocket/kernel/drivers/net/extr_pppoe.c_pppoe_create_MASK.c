
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int * ops; int state; } ;
struct sock {int sk_protocol; int sk_family; int sk_type; int sk_state; int sk_backlog_rcv; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sock* FUNC_0 (struct net*,int ,int ,int *) ;
 int FUNC_1 (struct socket*,struct sock*) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_10, struct socket *VAR_11)
{
 struct sock *VAR_12;

 VAR_12 = FUNC_0(VAR_10, VAR_2, VAR_1, &VAR_9);
 if (!VAR_12)
  return -VAR_0;

 FUNC_1(VAR_11, VAR_12);

 VAR_11->state = VAR_6;
 VAR_11->ops = &VAR_7;

 VAR_12->sk_backlog_rcv = VAR_8;
 VAR_12->sk_state = VAR_3;
 VAR_12->sk_type = VAR_5;
 VAR_12->sk_family = VAR_2;
 VAR_12->sk_protocol = VAR_4;

 return 0;
}
