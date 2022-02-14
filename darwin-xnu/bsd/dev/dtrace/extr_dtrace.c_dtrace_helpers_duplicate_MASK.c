
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_13__ {TYPE_3__* p_dtrace_helpers; } ;
typedef TYPE_2__ proc_t ;
typedef int dtrace_vstate_t ;
struct TYPE_14__ {scalar_t__ dthps_nprovs; scalar_t__ dthps_maxprovs; TYPE_1__** dthps_provs; TYPE_4__** dthps_actions; int dthps_vstate; int dthps_generation; } ;
typedef TYPE_3__ dtrace_helpers_t ;
typedef int dtrace_helper_provider_t ;
struct TYPE_15__ {int dtha_nactions; struct TYPE_15__* dtha_next; int ** dtha_actions; int * dtha_predicate; int dtha_generation; } ;
typedef TYPE_4__ dtrace_helper_action_t ;
typedef int dtrace_difo_t ;
struct TYPE_12__ {int dthp_ref; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int *) ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_4 (int,int ) ;
 TYPE_4__* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(proc_t *VAR_5, proc_t *VAR_6)
{
 dtrace_helpers_t *VAR_7, *VAR_8;
 dtrace_helper_action_t *VAR_9, *VAR_10, *VAR_11;
 dtrace_difo_t *VAR_12;
 dtrace_vstate_t *VAR_13;
 uint_t VAR_14;
 int VAR_15, VAR_16, VAR_17 = 0;

 FUNC_6(&VAR_4);
 FUNC_6(&VAR_3);
 FUNC_0(VAR_5->p_dtrace_helpers != ((void*)0));
 FUNC_0(VAR_2 > 0);

 VAR_7 = VAR_5->p_dtrace_helpers;
 VAR_8 = FUNC_3(VAR_6);
 FUNC_0(VAR_6->p_dtrace_helpers != ((void*)0));

 VAR_8->dthps_generation = VAR_7->dthps_generation;
 VAR_13 = &VAR_8->dthps_vstate;




 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  if ((VAR_9 = VAR_7->dthps_actions[VAR_14]) == ((void*)0))
   continue;

  for (VAR_11 = ((void*)0); VAR_9 != ((void*)0); VAR_9 = VAR_9->dtha_next) {
   VAR_10 = FUNC_5(sizeof (dtrace_helper_action_t),
       VAR_1);
   VAR_10->dtha_generation = VAR_9->dtha_generation;

   if ((VAR_12 = VAR_9->dtha_predicate) != ((void*)0)) {
    VAR_12 = FUNC_1(VAR_12, VAR_13);
    VAR_10->dtha_predicate = VAR_12;
   }

   VAR_10->dtha_nactions = VAR_9->dtha_nactions;
   VAR_16 = sizeof (dtrace_difo_t *) * VAR_10->dtha_nactions;
   VAR_10->dtha_actions = FUNC_4(VAR_16, VAR_1);

   for (VAR_15 = 0; VAR_15 < VAR_10->dtha_nactions; VAR_15++) {
    dtrace_difo_t *VAR_18 = VAR_9->dtha_actions[VAR_15];

    FUNC_0(VAR_18 != ((void*)0));
    VAR_18 = FUNC_1(VAR_18, VAR_13);
    VAR_10->dtha_actions[VAR_15] = VAR_18;
   }

   if (VAR_11 != ((void*)0)) {
    VAR_11->dtha_next = VAR_10;
   } else {
    VAR_8->dthps_actions[VAR_14] = VAR_10;
   }

   VAR_11 = VAR_10;
  }
 }





 if (VAR_7->dthps_nprovs > 0) {
  VAR_8->dthps_nprovs = VAR_7->dthps_nprovs;
  VAR_8->dthps_maxprovs = VAR_7->dthps_nprovs;
  VAR_8->dthps_provs = FUNC_4(VAR_8->dthps_nprovs *
      sizeof (dtrace_helper_provider_t *), VAR_1);
  for (VAR_14 = 0; VAR_14 < VAR_8->dthps_nprovs; VAR_14++) {
   VAR_8->dthps_provs[VAR_14] = VAR_7->dthps_provs[VAR_14];
   VAR_8->dthps_provs[VAR_14]->dthp_ref++;
  }

  VAR_17 = 1;
 }

 FUNC_7(&VAR_3);

 if (VAR_17)
  FUNC_2(VAR_6, VAR_8, ((void*)0));

 FUNC_7(&VAR_4);
}
