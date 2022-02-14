
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int dummy; } ;
struct nstat_tucookie {struct inpcb* inp; } ;
struct inpcb {scalar_t__ inp_state; } ;
typedef scalar_t__ nstat_provider_cookie_t ;


 scalar_t__ VAR_0 ;
 struct tcpcb* FUNC_0 (struct inpcb*) ;

__attribute__((used)) static int
FUNC_1(
 nstat_provider_cookie_t VAR_1)
{
 struct nstat_tucookie *VAR_2 =
     (struct nstat_tucookie *)VAR_1;
 struct inpcb *VAR_3;
 struct tcpcb *VAR_4;

 return (!(VAR_3 = VAR_2->inp) ||
     !(VAR_4 = FUNC_0(VAR_3)) ||
     VAR_3->inp_state == VAR_0) ? 1 : 0;
}
