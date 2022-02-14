
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_9__ {TYPE_2__* p_dtrace_helpers; } ;
typedef TYPE_1__ proc_t ;
typedef int dtrace_vstate_t ;
struct TYPE_10__ {int dthps_generation; size_t dthps_nprovs; TYPE_3__** dthps_provs; TYPE_4__** dthps_actions; int dthps_vstate; } ;
typedef TYPE_2__ dtrace_helpers_t ;
struct TYPE_11__ {int dthp_generation; int dthp_prov; } ;
typedef TYPE_3__ dtrace_helper_provider_t ;
struct TYPE_12__ {int dtha_generation; struct TYPE_12__* dtha_next; } ;
typedef TYPE_4__ dtrace_helper_action_t ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(proc_t* VAR_7, int VAR_8)
{
 dtrace_helpers_t *VAR_9 = VAR_7->p_dtrace_helpers;
 dtrace_vstate_t *VAR_10;
 uint_t VAR_11;

 FUNC_1(&VAR_5, VAR_2);
 FUNC_1(&VAR_4, VAR_2);

 if (VAR_9 == ((void*)0) || VAR_8 > VAR_9->dthps_generation)
  return (VAR_1);

 VAR_10 = &VAR_9->dthps_vstate;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  dtrace_helper_action_t *VAR_12 = ((void*)0), *VAR_13, *VAR_14;

  for (VAR_13 = VAR_9->dthps_actions[VAR_11]; VAR_13 != ((void*)0); VAR_13 = VAR_14) {
   VAR_14 = VAR_13->dtha_next;

   if (VAR_13->dtha_generation == VAR_8) {
    if (VAR_12 != ((void*)0)) {
     VAR_12->dtha_next = VAR_14;
    } else {
     VAR_9->dthps_actions[VAR_11] = VAR_14;
    }

    FUNC_2(VAR_13, VAR_10);
   } else {
    VAR_12 = VAR_13;
   }
  }
 }





 for (;;) {
  dtrace_helper_provider_t *VAR_15 = ((void*)0);







  for (VAR_11 = 0; VAR_11 < VAR_9->dthps_nprovs; VAR_11++) {
   VAR_15 = VAR_9->dthps_provs[VAR_11];

   if (VAR_15->dthp_generation == VAR_8)
    break;
  }




  if (VAR_11 == VAR_9->dthps_nprovs)
   break;




  VAR_9->dthps_nprovs--;
  VAR_9->dthps_provs[VAR_11] = VAR_9->dthps_provs[VAR_9->dthps_nprovs];
  VAR_9->dthps_provs[VAR_9->dthps_nprovs] = ((void*)0);

  FUNC_6(&VAR_4);




  if (VAR_6 != ((void*)0)) {
   FUNC_0(VAR_3 == ((void*)0));
   FUNC_4(&VAR_15->dthp_prov,
       VAR_7);
  }

  FUNC_3(VAR_15);

  FUNC_5(&VAR_4);
 }

 return (0);
}
