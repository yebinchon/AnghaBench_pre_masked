
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct tcp_heuristic_key {int dummy; } ;
struct tcp_cache_key_src {int dummy; } ;


 int FUNC_0 (struct tcp_heuristic_key*,int) ;
 int FUNC_1 (struct tcp_heuristic_key*,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct tcp_cache_key_src*,struct tcp_heuristic_key*) ;
 int VAR_1 ;

__attribute__((used)) static u_int16_t FUNC_3(struct tcp_cache_key_src *VAR_2, struct tcp_heuristic_key *VAR_3)
{
 u_int32_t VAR_4;

 FUNC_0(VAR_3, sizeof(struct tcp_heuristic_key));

 FUNC_2(VAR_2, VAR_3);

 VAR_4 = FUNC_1(VAR_3, sizeof(struct tcp_heuristic_key),
     VAR_0);

 return (VAR_4 & (VAR_1 - 1));
}
