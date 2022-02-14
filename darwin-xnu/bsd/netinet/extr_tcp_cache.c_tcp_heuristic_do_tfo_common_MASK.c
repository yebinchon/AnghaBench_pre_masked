
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_heuristics_head {int dummy; } ;
struct tcp_heuristic {scalar_t__ th_tfo_in_backoff; int th_tfo_enabled_time; int th_tfo_backoff_until; } ;
struct tcp_cache_key_src {int dummy; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 struct tcp_heuristic* FUNC_1 (struct tcp_cache_key_src*,int ,struct tcp_heuristics_head**) ;
 int FUNC_2 (struct tcp_heuristics_head*) ;
 int VAR_3 ;

__attribute__((used)) static boolean_t FUNC_3(struct tcp_cache_key_src *VAR_4)
{
 struct tcp_heuristics_head *VAR_5;
 struct tcp_heuristic *VAR_6;

 if (VAR_2)
  return (VAR_1);


 VAR_6 = FUNC_1(VAR_4, 0, &VAR_5);
 if (VAR_6 == ((void*)0))
  return (VAR_1);

 if (VAR_6->th_tfo_in_backoff == 0)
  goto tfo_ok;

 if (FUNC_0(VAR_3, VAR_6->th_tfo_backoff_until)) {
  VAR_6->th_tfo_in_backoff = 0;
  VAR_6->th_tfo_enabled_time = VAR_3;

  goto tfo_ok;
 }

 FUNC_2(VAR_5);
 return (VAR_0);

tfo_ok:
 FUNC_2(VAR_5);
 return (VAR_1);
}
