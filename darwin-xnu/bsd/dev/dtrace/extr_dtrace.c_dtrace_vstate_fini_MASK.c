
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dtvs_nglobals; int dtvs_ntlocals; int dtvs_nlocals; int * dtvs_locals; int * dtvs_tlocals; int * dtvs_globals; } ;
typedef TYPE_1__ dtrace_vstate_t ;
typedef int dtrace_statvar_t ;
typedef int dtrace_difv_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(dtrace_vstate_t *VAR_0)
{



 FUNC_0((VAR_0->dtvs_nglobals == 0) ^ (VAR_0->dtvs_globals != ((void*)0)));

 if (VAR_0->dtvs_nglobals > 0) {
  FUNC_1(VAR_0->dtvs_globals, VAR_0->dtvs_nglobals *
      sizeof (dtrace_statvar_t *));
 }

 if (VAR_0->dtvs_ntlocals > 0) {
  FUNC_1(VAR_0->dtvs_tlocals, VAR_0->dtvs_ntlocals *
      sizeof (dtrace_difv_t));
 }

 FUNC_0((VAR_0->dtvs_nlocals == 0) ^ (VAR_0->dtvs_locals != ((void*)0)));

 if (VAR_0->dtvs_nlocals > 0) {
  FUNC_1(VAR_0->dtvs_locals, VAR_0->dtvs_nlocals *
      sizeof (dtrace_statvar_t *));
 }
}
