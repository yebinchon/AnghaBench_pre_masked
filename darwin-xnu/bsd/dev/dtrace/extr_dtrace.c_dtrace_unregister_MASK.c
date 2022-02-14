
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_16__ {int (* dtps_enable ) (void*,VAR_0,void*) ;int (* dtps_destroy ) (int ,int,int ) ;} ;
struct TYPE_17__ {scalar_t__ dtpv_ecb_count; int dtpv_name; struct TYPE_17__* dtpv_next; int dtpv_arg; TYPE_2__ dtpv_pops; int dtpv_probe_count; int dtpv_defunct; } ;
typedef TYPE_3__ dtrace_provider_t ;
typedef scalar_t__ dtrace_provider_id_t ;
struct TYPE_18__ {int dtpr_id; int dtpr_name; int dtpr_func; int dtpr_mod; int dtpr_arg; struct TYPE_18__* dtpr_nextmod; TYPE_3__* dtpr_provider; } ;
typedef TYPE_4__ dtrace_probe_t ;
struct TYPE_15__ {scalar_t__ dts_necbs; } ;
struct TYPE_14__ {TYPE_1__* dta_state; } ;


 int FUNC_0 (int) ;
 TYPE_4__** FUNC_1 (int ,TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 TYPE_11__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_4__* FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int ** VAR_14 ;
 TYPE_3__* VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_17 ;
 int FUNC_10 (char*,void*) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (int ,void*,int) ;
 int FUNC_13 (int ,TYPE_4__*) ;

int
FUNC_14(dtrace_provider_id_t VAR_18)
{
 dtrace_provider_t *VAR_19 = (dtrace_provider_t *)VAR_18;
 dtrace_provider_t *VAR_20 = ((void*)0);
 int VAR_21 = 0;
 dtrace_probe_t *VAR_22, *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);
 dtrace_probe_t VAR_25 = {
  .dtpr_provider = VAR_19
 };

 if (VAR_19->dtpv_pops.dtps_enable ==
     (int (*)(void *, VAR_26, void *))VAR_10) {




  FUNC_0(VAR_19 == VAR_15);
  FUNC_0(VAR_9 != ((void*)0));
  FUNC_2(&VAR_16, VAR_2);
  FUNC_2(&VAR_11, VAR_2);
  VAR_21 = 1;

  if (VAR_15->dtpv_next != ((void*)0)) {



   return (VAR_1);
  }
 } else {
  FUNC_8(&VAR_16);
  FUNC_8(&VAR_17);
  FUNC_8(&VAR_11);
 }






 if (!VAR_19->dtpv_defunct &&
     (VAR_12 || (VAR_3.dta_state != ((void*)0) &&
     VAR_3.dta_state->dts_necbs > 0))) {
  if (!VAR_21) {
   FUNC_9(&VAR_11);
   FUNC_9(&VAR_17);
   FUNC_9(&VAR_16);
  }
  return (VAR_1);
 }




 if (VAR_19->dtpv_ecb_count!=0) {



  if (!VAR_21) {
   FUNC_9(&VAR_11);
   FUNC_9(&VAR_17);
   FUNC_9(&VAR_16);
  }
  return (VAR_1);
 }





 for (VAR_22 = FUNC_3(VAR_8, &VAR_25); VAR_22 != ((void*)0);
     VAR_22 = *(FUNC_1(VAR_8, VAR_22))) {
  if (VAR_22->dtpr_provider != VAR_19)
   continue;

  VAR_14[VAR_22->dtpr_id - 1] = ((void*)0);
  VAR_19->dtpv_probe_count--;

  FUNC_4(VAR_6, VAR_22);
  FUNC_4(VAR_5, VAR_22);
  FUNC_4(VAR_7, VAR_22);

  if (VAR_23 == ((void*)0)) {
   VAR_23 = VAR_22;
   VAR_22->dtpr_nextmod = ((void*)0);
  } else {



   VAR_22->dtpr_nextmod = VAR_23;
   VAR_23 = VAR_22;
  }
 }

 for (VAR_22 = VAR_23; VAR_22 != ((void*)0); VAR_22 = VAR_24) {
  VAR_24 = VAR_22->dtpr_nextmod;
  FUNC_4(VAR_8, VAR_22);
 }






 FUNC_6();

 for (VAR_22 = VAR_23; VAR_22 != ((void*)0); VAR_22 = VAR_24) {
  VAR_24 = VAR_22->dtpr_nextmod;

  VAR_19->dtpv_pops.dtps_destroy(VAR_19->dtpv_arg, VAR_22->dtpr_id,
      VAR_22->dtpr_arg);
  FUNC_5(VAR_22->dtpr_mod);
  FUNC_5(VAR_22->dtpr_func);
  FUNC_5(VAR_22->dtpr_name);
  FUNC_12(VAR_4, (void *)(uintptr_t)(VAR_22->dtpr_id), 1);
  FUNC_13(VAR_13, VAR_22);
 }

 if ((VAR_20 = VAR_15) == VAR_19) {
  FUNC_0(VAR_21 || VAR_9 == ((void*)0));
  FUNC_0(VAR_19->dtpv_next == ((void*)0) || VAR_9 == ((void*)0));
  VAR_15 = VAR_19->dtpv_next;
 } else {
  while (VAR_20 != ((void*)0) && VAR_20->dtpv_next != VAR_19)
   VAR_20 = VAR_20->dtpv_next;

  if (VAR_20 == ((void*)0)) {
   FUNC_10("attempt to unregister non-existent "
       "dtrace provider %p\n", (void *)VAR_18);
  }

  VAR_20->dtpv_next = VAR_19->dtpv_next;
 }

 FUNC_5(VAR_19->dtpv_name);

 if (!VAR_21) {
  FUNC_9(&VAR_11);
  FUNC_9(&VAR_17);
  FUNC_9(&VAR_16);
 }

 FUNC_7(VAR_19, sizeof (dtrace_provider_t));

 return (0);
}
