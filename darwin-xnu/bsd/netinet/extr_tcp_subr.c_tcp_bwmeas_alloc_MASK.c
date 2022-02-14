
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int t_maxseg; } ;
struct bwmeas {int bw_minsizepkts; int bw_minsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bwmeas*,int ) ;
 int VAR_2 ;
 struct bwmeas* FUNC_1 (int ) ;

struct bwmeas *
FUNC_2(struct tcpcb *VAR_3)
{
 struct bwmeas *VAR_4;
 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 == ((void*)0))
  return (VAR_4);

 FUNC_0(VAR_4, VAR_1);
 VAR_4->bw_minsizepkts = VAR_0;
 VAR_4->bw_minsize = VAR_4->bw_minsizepkts * VAR_3->t_maxseg;
 return (VAR_4);
}
