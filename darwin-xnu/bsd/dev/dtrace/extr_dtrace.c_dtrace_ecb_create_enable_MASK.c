
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int dtrace_state_t ;
struct TYPE_9__ {scalar_t__ dtpr_gen; } ;
typedef TYPE_2__ dtrace_probe_t ;
struct TYPE_10__ {TYPE_1__* dten_vstate; } ;
typedef TYPE_3__ dtrace_enabling_t ;
struct TYPE_11__ {scalar_t__ dted_probegen; } ;
typedef TYPE_4__ dtrace_ecbdesc_t ;
typedef int dtrace_ecb_t ;
struct TYPE_8__ {int * dtvs_state; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(dtrace_probe_t *VAR_3, void *VAR_4, void *VAR_5)
{
 dtrace_ecb_t *VAR_6;
 dtrace_enabling_t *VAR_7 = VAR_4;
 dtrace_ecbdesc_t *VAR_8 = VAR_5;
 dtrace_state_t *VAR_9 = VAR_7->dten_vstate->dtvs_state;

 FUNC_0(VAR_9 != ((void*)0));

 if (VAR_3 != ((void*)0) && VAR_8 != ((void*)0) && VAR_3->dtpr_gen < VAR_8->dted_probegen) {





  return (VAR_2);
 }

 if ((VAR_6 = FUNC_1(VAR_9, VAR_3, VAR_7)) == ((void*)0))
  return (VAR_0);

 if (FUNC_2(VAR_6) < 0)
               return (VAR_1);

 return (VAR_2);
}
