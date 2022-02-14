
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_flagsext; scalar_t__ t_stretchack_delayed; int rcv_nostrack_ts; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tcpcb*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

void
FUNC_2(struct tcpcb *VAR_3)
{
 int32_t VAR_4;

 if (!(VAR_3->t_flagsext & VAR_1))
  return;

 VAR_4 = FUNC_1(VAR_2, 0, VAR_3->rcv_nostrack_ts, 0);
 if (VAR_4 < 0)
  VAR_4 = -VAR_4;

 if (VAR_4 > VAR_0) {
  VAR_3->t_flagsext &= ~VAR_1;
  VAR_3->t_stretchack_delayed = 0;

  FUNC_0(VAR_3);
 }
}
