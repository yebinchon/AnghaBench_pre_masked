
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_9__ {int p_pid; } ;
typedef TYPE_2__ proc_t ;
struct TYPE_10__ {int dthps_deferred; size_t dthps_nprovs; TYPE_1__** dthps_provs; struct TYPE_10__* dthps_prev; struct TYPE_10__* dthps_next; int dthps_pid; } ;
typedef TYPE_3__ dtrace_helpers_t ;
typedef int dof_helper_t ;
struct TYPE_8__ {int dthp_prov; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(proc_t *VAR_6, dtrace_helpers_t *VAR_7,
    dof_helper_t *VAR_8)
{
 FUNC_0(&VAR_4, VAR_1);
 FUNC_0(&VAR_3, VAR_0);

 FUNC_3(&VAR_3);

 if (!FUNC_1() || VAR_5 == ((void*)0)) {







  if (VAR_7->dthps_next == ((void*)0) && VAR_7->dthps_prev == ((void*)0) &&
      VAR_2 != VAR_7) {
   VAR_7->dthps_deferred = 1;
   VAR_7->dthps_pid = VAR_6->p_pid;
   VAR_7->dthps_next = VAR_2;
   VAR_7->dthps_prev = ((void*)0);
   if (VAR_2 != ((void*)0))
    VAR_2->dthps_prev = VAR_7;
   VAR_2 = VAR_7;
  }

  FUNC_4(&VAR_3);

 } else if (VAR_8 != ((void*)0)) {






  FUNC_4(&VAR_3);

  FUNC_2(VAR_8, VAR_6);

 } else {





  uint_t VAR_9;
  FUNC_4(&VAR_3);

  for (VAR_9 = 0; VAR_9 < VAR_7->dthps_nprovs; VAR_9++) {
   FUNC_2(&VAR_7->dthps_provs[VAR_9]->dthp_prov,
    VAR_6);
  }
 }
}
