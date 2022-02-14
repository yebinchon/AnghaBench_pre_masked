
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tcpcb {int t_tfo_stats; } ;
struct tcp_cache_key_src {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tcpcb*,struct tcp_cache_key_src*) ;
 int FUNC_1 (struct tcp_cache_key_src*,int) ;

void FUNC_2(struct tcpcb *VAR_6)
{
 struct tcp_cache_key_src VAR_7;
 uint8_t VAR_8 = 0;

 FUNC_0(VAR_6, &VAR_7);

 if (VAR_6->t_tfo_stats & VAR_5)
  VAR_8 = (VAR_0 | VAR_2 |
   VAR_1 | VAR_3 );
 if (VAR_6->t_tfo_stats & VAR_4)
  VAR_8 = (VAR_2 | VAR_3);

 FUNC_1(&VAR_7, VAR_8);
}
