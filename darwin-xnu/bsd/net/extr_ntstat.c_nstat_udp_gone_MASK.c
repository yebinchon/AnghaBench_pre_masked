
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nstat_tucookie {struct inpcb* inp; } ;
struct inpcb {scalar_t__ inp_state; } ;
typedef scalar_t__ nstat_provider_cookie_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(
 nstat_provider_cookie_t VAR_1)
{
 struct nstat_tucookie *VAR_2 =
     (struct nstat_tucookie *)VAR_1;
 struct inpcb *VAR_3;

 return (!(VAR_3 = VAR_2->inp) ||
  VAR_3->inp_state == VAR_0) ? 1 : 0;
}
