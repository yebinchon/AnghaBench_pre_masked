
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int (* dtps_enable ) (void*,VAR_0,void*) ;int (* dtps_destroy ) (int ,int,int ) ;} ;
struct TYPE_11__ {int dtpv_arg; TYPE_1__ dtpv_pops; int dtpv_probe_count; } ;
typedef TYPE_2__ dtrace_provider_t ;
typedef scalar_t__ dtrace_provider_id_t ;
struct TYPE_12__ {int dtpr_id; struct TYPE_12__* dtpr_nextmod; int dtpr_name; int dtpr_func; int dtpr_mod; int dtpr_arg; int * dtpr_ecb; TYPE_2__* dtpr_provider; } ;
typedef TYPE_3__ dtrace_probe_t ;


 int FUNC_0 (int) ;
 TYPE_3__** FUNC_1 (int ,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_3__* FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_3__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int ** VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,void*,int) ;
 int FUNC_9 (int ,TYPE_3__*) ;

int
FUNC_10(dtrace_provider_id_t VAR_11)
{
 dtrace_provider_t *VAR_12 = (dtrace_provider_t *)VAR_11;
 dtrace_probe_t *VAR_13, *VAR_14 = ((void*)0);
 dtrace_probe_t VAR_15 = {
  .dtpr_provider = VAR_12
 };




 FUNC_0(VAR_12->dtpv_pops.dtps_enable !=
   (int (*)(void *, VAR_16, void *))VAR_6);

 FUNC_5(&VAR_10);
 FUNC_5(&VAR_7);




 for (VAR_13 = FUNC_2(VAR_5, &VAR_15); VAR_13 != ((void*)0);
     VAR_13 = *(FUNC_1(VAR_5, VAR_13))) {

  if (VAR_13->dtpr_provider != VAR_12)
   continue;

  if (VAR_13->dtpr_ecb != ((void*)0))
   continue;

  VAR_9[VAR_13->dtpr_id - 1] = ((void*)0);
  VAR_12->dtpv_probe_count--;

  FUNC_3(VAR_3, VAR_13);
  FUNC_3(VAR_2, VAR_13);
  FUNC_3(VAR_4, VAR_13);

  VAR_12->dtpv_pops.dtps_destroy(VAR_12->dtpv_arg, VAR_13->dtpr_id,
      VAR_13->dtpr_arg);
  FUNC_4(VAR_13->dtpr_mod);
  FUNC_4(VAR_13->dtpr_func);
  FUNC_4(VAR_13->dtpr_name);
  if (VAR_14 == ((void*)0)) {
   VAR_14 = VAR_13;
   VAR_13->dtpr_nextmod = ((void*)0);
  } else {



   VAR_13->dtpr_nextmod = VAR_14;
   VAR_14 = VAR_13;
  }
 }

 for (VAR_13 = VAR_14; VAR_13 != ((void*)0); VAR_13 = VAR_14) {
  VAR_14 = VAR_13->dtpr_nextmod;
  FUNC_3(VAR_5, VAR_13);
  FUNC_8(VAR_1, (void *)((uintptr_t)VAR_13->dtpr_id), 1);
  FUNC_9(VAR_8, VAR_13);
 }

 FUNC_6(&VAR_7);
 FUNC_6(&VAR_10);

 return (0);
}
