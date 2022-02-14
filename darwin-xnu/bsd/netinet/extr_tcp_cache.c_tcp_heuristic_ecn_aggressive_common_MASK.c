
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_heuristics_head {int dummy; } ;
struct tcp_heuristic {int th_ecn_aggressive; scalar_t__ th_ecn_backoff; } ;
struct tcp_cache_key_src {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcp_heuristic* FUNC_0 (struct tcp_cache_key_src*,int,struct tcp_heuristics_head**) ;
 int FUNC_1 (struct tcp_heuristics_head*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_3(struct tcp_cache_key_src *VAR_3)
{
 struct tcp_heuristics_head *VAR_4;
 struct tcp_heuristic *VAR_5;

 VAR_5 = FUNC_0(VAR_3, 1, &VAR_4);
 if (VAR_5 == ((void*)0))
  return;


 VAR_5->th_ecn_backoff = VAR_2 +
  (FUNC_2(VAR_1) << (VAR_5->th_ecn_aggressive));





 if (VAR_5->th_ecn_aggressive < VAR_0)
  VAR_5->th_ecn_aggressive++;

 FUNC_1(VAR_4);
}
