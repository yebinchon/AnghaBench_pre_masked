
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct tcpopt {int to_flags; scalar_t__ to_tsecr; } ;
struct tcphdr {scalar_t__ th_ack; } ;
struct tcpcb {scalar_t__ t_rtttime; scalar_t__ t_rtseq; scalar_t__ t_pipeack_lastuna; scalar_t__ t_pipeack; int t_pipeack_ind; scalar_t__* t_pipeack_sample; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct tcpcb*) ;
 int VAR_3 ;
 int FUNC_4 (struct tcpcb*,int,int,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct tcpcb *VAR_4, struct tcpopt *VAR_5, struct tcphdr *VAR_6)
{
 int VAR_7 = 0;
 FUNC_2(VAR_5 != ((void*)0) && VAR_6 != ((void*)0));
 if (VAR_4->t_rtttime != 0 && FUNC_0(VAR_6->th_ack, VAR_4->t_rtseq)) {
  u_int32_t VAR_8;
  VAR_7 = VAR_3 - VAR_4->t_rtttime;




  if (FUNC_0(VAR_6->th_ack, VAR_4->t_pipeack_lastuna)) {
   VAR_8 = VAR_6->th_ack - VAR_4->t_pipeack_lastuna;

   VAR_4->t_pipeack_sample[VAR_4->t_pipeack_ind++] =
       VAR_8;
   VAR_4->t_pipeack_ind %= VAR_1;


   VAR_8 = FUNC_3(VAR_4);
   VAR_4->t_pipeack = (VAR_8 >
        VAR_0) ?
        VAR_8 : 0;
  }

  VAR_4->t_rtttime = 0;
 }
 if (((VAR_5->to_flags & VAR_2) != 0) &&
  (VAR_5->to_tsecr != 0) &&
  FUNC_1(VAR_3, VAR_5->to_tsecr)) {
  FUNC_4(VAR_4, (VAR_3 - VAR_5->to_tsecr),
   VAR_5->to_tsecr, VAR_6->th_ack);
 } else if (VAR_7 > 0) {
  FUNC_4(VAR_4, VAR_7, 0, VAR_6->th_ack);
 }
}
