
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int snd_una; int t_notify_ack; } ;
struct tcp_notify_ack_marker {int notify_snd_una; } ;
struct socket {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 struct tcp_notify_ack_marker* FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct socket*,int) ;

inline void
FUNC_3(struct tcpcb *VAR_2, struct socket *VAR_3)
{
 struct tcp_notify_ack_marker *VAR_4;

 VAR_4 = FUNC_1(&VAR_2->t_notify_ack);
 if (FUNC_0(VAR_2->snd_una, VAR_4->notify_snd_una)) {
  FUNC_2(VAR_3, VAR_0 | VAR_1);
 }
}
