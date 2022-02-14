
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ result; } ;
struct TYPE_4__ {TYPE_1__ results; } ;
struct inpcb {TYPE_2__ inp_policyresult; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

bool
FUNC_0(struct inpcb *VAR_2)
{
 if (VAR_2 == ((void*)0)) {
  return (VAR_0);
 }

 return (VAR_2->inp_policyresult.results.result == VAR_1);
}
