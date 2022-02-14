
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef void* uint64_t ;
typedef int uint16_t ;
typedef int dtrace_vstate_t ;
typedef int dtrace_state_t ;
struct TYPE_12__ {void** dtms_arg; } ;
typedef TYPE_1__ dtrace_mstate_t ;
struct TYPE_13__ {int dthps_vstate; TYPE_3__** dthps_actions; } ;
typedef TYPE_2__ dtrace_helpers_t ;
struct TYPE_14__ {int dtha_nactions; int ** dtha_actions; int * dtha_predicate; struct TYPE_14__* dtha_next; } ;
typedef TYPE_3__ dtrace_helper_action_t ;
typedef int dtrace_difo_t ;
struct TYPE_16__ {int cpuc_dtrace_flags; } ;
struct TYPE_15__ {TYPE_2__* p_dtrace_helpers; } ;
struct TYPE_11__ {size_t cpu_id; } ;


 int FUNC_0 (int) ;
 TYPE_10__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_9__* VAR_6 ;
 TYPE_8__* VAR_7 ;
 void* FUNC_1 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,int *,int) ;
 int VAR_8 ;

__attribute__((used)) static uint64_t
FUNC_3(int VAR_9, dtrace_mstate_t *VAR_10,
    dtrace_state_t *VAR_11, uint64_t VAR_12, uint64_t VAR_13)
{
 uint16_t *VAR_14 = &VAR_6[VAR_0->cpu_id].cpuc_dtrace_flags;
 uint64_t VAR_15 = VAR_10->dtms_arg[0];
 uint64_t VAR_16 = VAR_10->dtms_arg[1];
 uint64_t VAR_17 = 0;
 dtrace_helpers_t *VAR_18 = VAR_7->p_dtrace_helpers;
 dtrace_helper_action_t *VAR_19;
 dtrace_vstate_t *VAR_20;
 dtrace_difo_t *VAR_21;
 int VAR_22, VAR_23 = VAR_8;

 FUNC_0(VAR_9 >= 0 && VAR_9 < VAR_5);

 if (VAR_18 == ((void*)0))
  return (0);

 if ((VAR_19 = VAR_18->dthps_actions[VAR_9]) == ((void*)0))
  return (0);

 VAR_20 = &VAR_18->dthps_vstate;
 VAR_10->dtms_arg[0] = VAR_12;
 VAR_10->dtms_arg[1] = VAR_13;
 for (; VAR_19 != ((void*)0); VAR_19 = VAR_19->dtha_next) {
  if ((VAR_21 = VAR_19->dtha_predicate) != ((void*)0)) {
   if (VAR_23)
    FUNC_2(VAR_19, VAR_10, VAR_20, 0);

   if (!FUNC_1(VAR_21, VAR_10, VAR_20, VAR_11))
    goto next;

   if (*VAR_14 & VAR_1)
    goto err;
  }

  for (VAR_22 = 0; VAR_22 < VAR_19->dtha_nactions; VAR_22++) {
   if (VAR_23)
    FUNC_2(VAR_19,
        VAR_10, VAR_20, VAR_22 + 1);

   VAR_17 = FUNC_1(VAR_19->dtha_actions[VAR_22],
       VAR_10, VAR_20, VAR_11);

   if (*VAR_14 & VAR_1)
    goto err;
  }

next:
  if (VAR_23)
   FUNC_2(VAR_19, VAR_10, VAR_20,
       VAR_4);
 }

 if (VAR_23)
  FUNC_2(VAR_19, VAR_10, VAR_20,
      VAR_2);




 VAR_10->dtms_arg[0] = VAR_15;
 VAR_10->dtms_arg[1] = VAR_16;

 return (VAR_17);

err:
 if (VAR_23)
  FUNC_2(VAR_19, VAR_10, VAR_20,
      VAR_3);




 VAR_10->dtms_arg[0] = VAR_15;
 VAR_10->dtms_arg[1] = VAR_16;

 return (0);
}
