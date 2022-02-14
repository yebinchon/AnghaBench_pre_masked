
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tcpcb {int t_tfo_stats; } ;
struct tcp_cache_key_src {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tcpcb*,struct tcp_cache_key_src*) ;
 int FUNC_1 (struct tcp_cache_key_src*,int) ;

void FUNC_2(struct tcpcb *VAR_4)
{
 struct tcp_cache_key_src VAR_5;
 uint32_t VAR_6 = 0;

 FUNC_0(VAR_4, &VAR_5);

 if (VAR_4->t_tfo_stats & VAR_3)
  VAR_6 = (VAR_0 | VAR_1);
 if (VAR_4->t_tfo_stats & VAR_2)
  VAR_6 = VAR_1;

 FUNC_1(&VAR_5, VAR_6);
}
