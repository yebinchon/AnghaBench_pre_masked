
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int dummy; } ;
struct tcp_cache_key_src {int dummy; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tcpcb*,struct tcp_cache_key_src*) ;
 scalar_t__ FUNC_1 (struct tcp_cache_key_src*) ;

boolean_t FUNC_2(struct tcpcb *VAR_2)
{
 struct tcp_cache_key_src VAR_3;

 FUNC_0(VAR_2, &VAR_3);
 if (FUNC_1(&VAR_3))
  return (VAR_1);

 return (VAR_0);
}
