
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dcr_cred; } ;
struct TYPE_5__ {TYPE_1__ dts_cred; } ;
typedef TYPE_2__ dtrace_state_t ;
typedef int cred_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(dtrace_state_t *VAR_0)
{
 cred_t *VAR_1, *VAR_2 = VAR_0->dts_cred.dcr_cred;
#pragma unused(cr, s_cr, state)





 FUNC_0(VAR_2 != ((void*)0));

 return 1;
}
