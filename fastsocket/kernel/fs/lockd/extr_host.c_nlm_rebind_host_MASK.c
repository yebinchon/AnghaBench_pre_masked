
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_host {scalar_t__ h_nextrebind; scalar_t__ h_rpcclnt; int h_name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

void
FUNC_3(struct nlm_host *VAR_2)
{
 FUNC_0("lockd: rebind host %s\n", VAR_2->h_name);
 if (VAR_2->h_rpcclnt && FUNC_2(VAR_1, VAR_2->h_nextrebind)) {
  FUNC_1(VAR_2->h_rpcclnt);
  VAR_2->h_nextrebind = VAR_1 + VAR_0;
 }
}
