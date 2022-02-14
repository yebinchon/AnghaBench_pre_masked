
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int snd_una; int t_notify_ack; } ;
struct tcp_notify_ack_marker {int notify_snd_una; } ;
struct socket {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 struct tcp_notify_ack_marker* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct socket*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (struct socket*) ;
 struct tcpcb* FUNC_5 (int ) ;
 int FUNC_6 (struct socket*) ;

bool
FUNC_7(struct socket *VAR_3)
{
 if ((FUNC_3(VAR_3) == VAR_0 || FUNC_3(VAR_3) == VAR_1) &&
     FUNC_4(VAR_3) == VAR_2) {
  struct tcpcb *VAR_4 = FUNC_5(FUNC_6(VAR_3));

  if (!FUNC_1(&VAR_4->t_notify_ack)) {
   struct tcp_notify_ack_marker *VAR_5;
   VAR_5 = FUNC_2(&VAR_4->t_notify_ack);
   if (FUNC_0(VAR_4->snd_una, VAR_5->notify_snd_una))
    return (1);
  }
 }
 return (0);
}
