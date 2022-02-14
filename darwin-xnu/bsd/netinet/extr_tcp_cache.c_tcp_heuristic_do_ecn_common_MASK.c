
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_heuristics_head {int dummy; } ;
struct tcp_heuristic {scalar_t__ th_ecn_droprst; scalar_t__ th_ecn_droprxmt; scalar_t__ th_ecn_synrst; int th_ecn_backoff; } ;
struct tcp_cache_key_src {int dummy; } ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_3 ;
 struct tcp_heuristic* FUNC_1 (struct tcp_cache_key_src*,int ,struct tcp_heuristics_head**) ;
 int FUNC_2 (struct tcp_heuristics_head*) ;
 int VAR_4 ;

__attribute__((used)) static boolean_t FUNC_3(struct tcp_cache_key_src *VAR_5)
{
 struct tcp_heuristics_head *VAR_6;
 struct tcp_heuristic *VAR_7;
 boolean_t VAR_8 = VAR_2;

 if (VAR_3)
  return (VAR_2);


 VAR_7 = FUNC_1(VAR_5, 0, &VAR_6);
 if (VAR_7 == ((void*)0))
  return VAR_8;

 if (FUNC_0(VAR_7->th_ecn_backoff, VAR_4)) {
  VAR_8 = VAR_1;
 } else {

  if (VAR_7->th_ecn_droprst >= VAR_0)
   VAR_7->th_ecn_droprst = 0;
  if (VAR_7->th_ecn_droprxmt >= VAR_0)
   VAR_7->th_ecn_droprxmt = 0;
  if (VAR_7->th_ecn_synrst >= VAR_0)
   VAR_7->th_ecn_synrst = 0;
 }

 FUNC_2(VAR_6);

 return (VAR_8);
}
