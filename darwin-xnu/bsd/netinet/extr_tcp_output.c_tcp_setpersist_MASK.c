
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_srtt; int t_rttvar; scalar_t__ t_persist_timeout; scalar_t__* t_timer; scalar_t__ t_persist_stop; size_t t_rxtshift; } ;


 scalar_t__ FUNC_0 (struct tcpcb*,scalar_t__) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (scalar_t__,int,int ,int ,int ) ;
 size_t VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void
FUNC_2(struct tcpcb *VAR_6)
{
 int VAR_7 = ((VAR_6->t_srtt >> 2) + VAR_6->t_rttvar) >> 1;







 if ((VAR_6->t_persist_timeout != 0) &&
            (VAR_6->t_timer[VAR_1] == 0) &&
            (VAR_6->t_persist_stop == 0)) {
  VAR_6->t_persist_stop = VAR_4 + VAR_6->t_persist_timeout;
 }




 FUNC_1(VAR_6->t_timer[VAR_1],
     VAR_7 * VAR_3[VAR_6->t_rxtshift],
     VAR_5, VAR_0, 0);
 VAR_6->t_timer[VAR_1] = FUNC_0(VAR_6, VAR_6->t_timer[VAR_1]);

 if (VAR_6->t_rxtshift < VAR_2)
  VAR_6->t_rxtshift++;
}
