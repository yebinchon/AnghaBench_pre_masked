
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint_t ;
typedef int proc_t ;
struct TYPE_11__ {int * dtms_remove_proc; int * dtms_provide_proc; int * dtms_create_probe; } ;
typedef TYPE_2__ dtrace_mops_t ;
struct TYPE_12__ {int dtm_name; void* dtm_arg; TYPE_2__ dtm_mops; } ;
typedef TYPE_3__ dtrace_meta_t ;
typedef scalar_t__ dtrace_meta_provider_id_t ;
struct TYPE_13__ {size_t dthps_nprovs; scalar_t__ dthps_deferred; int * dthps_prev; struct TYPE_13__* dthps_next; TYPE_1__** dthps_provs; int dthps_pid; } ;
typedef TYPE_4__ dtrace_helpers_t ;
struct TYPE_10__ {int dthp_prov; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 TYPE_4__* VAR_5 ;
 int FUNC_1 (int *,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 TYPE_3__* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

int
FUNC_9(const char *VAR_9, const dtrace_mops_t *VAR_10, void *VAR_11,
    dtrace_meta_provider_id_t *VAR_12)
{
 dtrace_meta_t *VAR_13;
 dtrace_helpers_t *VAR_14, *VAR_15;
 uint_t VAR_16;

 *VAR_12 = VAR_1;





 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_0, "failed to register meta-provider: "
      "invalid name");
  return (VAR_2);
 }

 if (VAR_10 == ((void*)0) ||
     VAR_10->dtms_create_probe == ((void*)0) ||
     VAR_10->dtms_provide_proc == ((void*)0) ||
     VAR_10->dtms_remove_proc == ((void*)0)) {
  FUNC_0(VAR_0, "failed to register meta-register %s: "
      "invalid ops", VAR_9);
  return (VAR_2);
 }

 VAR_13 = FUNC_4(sizeof (dtrace_meta_t), VAR_3);
 VAR_13->dtm_mops = *VAR_10;
 VAR_13->dtm_arg = VAR_11;

 FUNC_5(&VAR_7);
 FUNC_5(&VAR_6);

 if (VAR_8 != ((void*)0)) {
  FUNC_6(&VAR_6);
  FUNC_6(&VAR_7);
  FUNC_0(VAR_0, "failed to register meta-register %s: "
      "user-land meta-provider exists", VAR_9);
  FUNC_3(VAR_13, sizeof (dtrace_meta_t));
  return (VAR_2);
 }

 VAR_13->dtm_name = FUNC_2(VAR_9);

 VAR_8 = VAR_13;
 *VAR_12 = (dtrace_meta_provider_id_t)VAR_13;






 VAR_14 = VAR_5;
 VAR_5 = ((void*)0);

 FUNC_6(&VAR_6);

 while (VAR_14 != ((void*)0)) {
  for (VAR_16 = 0; VAR_16 < VAR_14->dthps_nprovs; VAR_16++) {
   proc_t *VAR_17 = FUNC_7(VAR_14->dthps_pid);
   if (VAR_17 == VAR_4)
    continue;
   FUNC_1(&VAR_14->dthps_provs[VAR_16]->dthp_prov,
       VAR_17);
   FUNC_8(VAR_17);
  }

  VAR_15 = VAR_14->dthps_next;
  VAR_14->dthps_next = ((void*)0);
  VAR_14->dthps_prev = ((void*)0);
  VAR_14->dthps_deferred = 0;
  VAR_14 = VAR_15;
 }

 FUNC_6(&VAR_7);

 return (0);
}
