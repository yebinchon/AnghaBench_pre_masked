
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int dtpv_probe_count; } ;
typedef TYPE_1__ dtrace_provider_t ;
typedef scalar_t__ dtrace_provider_id_t ;
struct TYPE_13__ {int dtpr_id; int dtpr_aframes; TYPE_1__* dtpr_provider; void* dtpr_arg; void* dtpr_name; void* dtpr_func; void* dtpr_mod; scalar_t__ dtpr_gen; } ;
typedef TYPE_2__ dtrace_probe_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__**,TYPE_2__**,size_t) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int VAR_9 ;
 int FUNC_5 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__** VAR_13 ;
 TYPE_1__* VAR_14 ;
 void* FUNC_6 (char const*) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__**,size_t) ;
 TYPE_2__** FUNC_9 (size_t,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int,int) ;
 TYPE_2__* FUNC_13 (int ) ;

dtrace_id_t
FUNC_14(dtrace_provider_id_t VAR_15, const char *VAR_16,
    const char *VAR_17, const char *VAR_18, int VAR_19, void *VAR_20)
{
 dtrace_probe_t *VAR_21, **VAR_22;
 dtrace_provider_t *VAR_23 = (dtrace_provider_t *)VAR_15;
 dtrace_id_t VAR_24;

 if (VAR_23 == VAR_14) {
  FUNC_1(&VAR_9, VAR_1);
 } else {
  FUNC_10(&VAR_9);
 }

 VAR_24 = (dtrace_id_t)(uintptr_t)FUNC_12(VAR_4, 1,
     VAR_2 | VAR_3);

 VAR_21 = FUNC_13(VAR_11);
 FUNC_3(VAR_21, sizeof (dtrace_probe_t));

 VAR_21->dtpr_id = VAR_24;
 VAR_21->dtpr_gen = VAR_12++;
 VAR_21->dtpr_mod = FUNC_6(VAR_16);
 VAR_21->dtpr_func = FUNC_6(VAR_17);
 VAR_21->dtpr_name = FUNC_6(VAR_18);
 VAR_21->dtpr_arg = VAR_20;
 VAR_21->dtpr_aframes = VAR_19;
 VAR_21->dtpr_provider = VAR_23;

 FUNC_4(VAR_8, VAR_21);
 FUNC_4(VAR_6, VAR_21);
 FUNC_4(VAR_5, VAR_21);
 FUNC_4(VAR_7, VAR_21);

 if (VAR_24 - 1 >= (dtrace_id_t)VAR_10) {
  size_t VAR_25 = VAR_10 * sizeof (dtrace_probe_t *);
  size_t VAR_26 = VAR_25 << 1;

  if (VAR_26 == 0) {
   FUNC_0(VAR_25 == 0);
   FUNC_0(VAR_13 == ((void*)0));
   VAR_26 = sizeof (dtrace_probe_t *);
  }

  VAR_22 = FUNC_9(VAR_26, VAR_0);

  if (VAR_13 == ((void*)0)) {
   FUNC_0(VAR_25 == 0);
   VAR_13 = VAR_22;
   VAR_10 = 1;
  } else {
   dtrace_probe_t **VAR_27 = VAR_13;

   FUNC_2(VAR_27, VAR_22, VAR_25);
   FUNC_5();
   VAR_13 = VAR_22;

   FUNC_7();





   FUNC_8(VAR_27, VAR_25);
   VAR_10 <<= 1;
  }

  FUNC_0(VAR_24 - 1 < (dtrace_id_t)VAR_10);
 }

 FUNC_0(VAR_13[VAR_24 - 1] == ((void*)0));
 VAR_13[VAR_24 - 1] = VAR_21;
 VAR_23->dtpv_probe_count++;

 if (VAR_23 != VAR_14)
  FUNC_11(&VAR_9);

 return (VAR_24);
}
