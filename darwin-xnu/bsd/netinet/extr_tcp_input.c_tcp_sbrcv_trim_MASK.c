
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct tcpcb {int rcv_adv; int rcv_nxt; int t_maxseg; } ;
struct sockbuf {scalar_t__ sb_idealsize; scalar_t__ sb_hiwat; scalar_t__ sb_cc; } ;
typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct sockbuf*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_3(struct tcpcb *VAR_2, struct sockbuf *VAR_3)
{
 if (VAR_1 == 1 && VAR_3->sb_idealsize > 0 &&
  VAR_3->sb_hiwat > VAR_3->sb_idealsize) {
  int32_t VAR_4;

  u_int32_t VAR_5 = VAR_3->sb_hiwat - VAR_3->sb_idealsize;




  u_int32_t VAR_6 = VAR_2->rcv_adv - VAR_2->rcv_nxt;






  u_int32_t VAR_7 = FUNC_1(VAR_6, (VAR_3->sb_idealsize >> 4));




  if (VAR_7 == 0)
   VAR_7 = VAR_2->t_maxseg << VAR_0;

  VAR_4 = VAR_3->sb_hiwat - (VAR_3->sb_cc + VAR_7);
  VAR_4 = FUNC_0(VAR_4, (int32_t)VAR_5);

  if (VAR_4 > 0)
   FUNC_2(VAR_3, (VAR_3->sb_hiwat - VAR_4));
 }
}
