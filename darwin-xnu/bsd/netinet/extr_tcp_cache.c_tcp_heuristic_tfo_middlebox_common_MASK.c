
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_heuristics_head {int dummy; } ;
struct tcp_heuristic {int dummy; } ;
struct tcp_cache_key_src {int dummy; } ;


 int FUNC_0 (struct tcp_heuristic*) ;
 struct tcp_heuristic* FUNC_1 (struct tcp_cache_key_src*,int,struct tcp_heuristics_head**) ;
 int FUNC_2 (struct tcp_heuristics_head*) ;

__attribute__((used)) static void FUNC_3(struct tcp_cache_key_src *VAR_0)
{
 struct tcp_heuristics_head *VAR_1;
 struct tcp_heuristic *VAR_2;

 VAR_2 = FUNC_1(VAR_0, 1, &VAR_1);
 if (VAR_2 == ((void*)0))
  return;

 FUNC_0(VAR_2);

 FUNC_2(VAR_1);
}
