
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef scalar_t__ u_int32_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
typedef scalar_t__ tcp_seq ;
struct timeval {int tv_sec; } ;
struct tcpcb {scalar_t__ t_state; TYPE_1__* t_inpcb; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int isn_secret ;
struct TYPE_2__ {int inp_vflag; int inp_laddr; int inp_faddr; int in6p_laddr; int in6p_faddr; int inp_lport; int inp_fport; } ;
typedef int MD5_CTX ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct timeval*) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int **,int) ;
 int FUNC_7 (int **,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

tcp_seq
FUNC_8(struct tcpcb *VAR_7)
{
 u_int32_t VAR_8[4];
 tcp_seq VAR_9;
 struct timeval VAR_10;
 u_char VAR_11[32];
 int VAR_12 = 0;
 MD5_CTX VAR_13;


 if (((VAR_7->t_state == VAR_2) || (VAR_7->t_state == VAR_3)) &&
     VAR_6 == 0)



  return (FUNC_4());

 FUNC_5(&VAR_10);


 if ((VAR_12 == 0) ||
     ((VAR_6 == 0) && (VAR_5 > 0) &&
     (((u_int)VAR_12 + (u_int)VAR_5*VAR_4)
  < (u_int)VAR_10.tv_sec))) {



  FUNC_7(&VAR_11, sizeof(VAR_11));

  VAR_12 = VAR_10.tv_sec;
 }


 FUNC_1(&VAR_13);
 FUNC_2(&VAR_13, (u_char *) &VAR_7->t_inpcb->inp_fport,
     sizeof(u_short));
 FUNC_2(&VAR_13, (u_char *) &VAR_7->t_inpcb->inp_lport,
     sizeof(u_short));
 {
  FUNC_2(&VAR_13, (u_char *) &VAR_7->t_inpcb->inp_faddr,
      sizeof(struct in_addr));
  FUNC_2(&VAR_13, (u_char *) &VAR_7->t_inpcb->inp_laddr,
      sizeof(struct in_addr));
 }
 FUNC_2(&VAR_13, (u_char *) &VAR_11, sizeof(VAR_11));
 FUNC_0((u_char *) &VAR_8, &VAR_13);
 VAR_9 = (tcp_seq) VAR_8[0];
 VAR_9 += VAR_10.tv_sec * (VAR_1 / VAR_4);
 return (VAR_9);
}
