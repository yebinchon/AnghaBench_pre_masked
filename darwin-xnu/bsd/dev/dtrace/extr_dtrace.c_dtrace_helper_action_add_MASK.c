
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_15__ {TYPE_5__* p_dtrace_helpers; } ;
typedef TYPE_2__ proc_t ;
struct TYPE_16__ {scalar_t__ dtvs_nlocals; } ;
typedef TYPE_3__ dtrace_vstate_t ;
struct TYPE_17__ {int * dtp_difo; } ;
typedef TYPE_4__ dtrace_predicate_t ;
struct TYPE_18__ {TYPE_6__** dthps_actions; int dthps_generation; TYPE_3__ dthps_vstate; } ;
typedef TYPE_5__ dtrace_helpers_t ;
struct TYPE_19__ {int dtha_nactions; struct TYPE_19__* dtha_next; int ** dtha_actions; int * dtha_predicate; int dtha_generation; } ;
typedef TYPE_6__ dtrace_helper_action_t ;
struct TYPE_14__ {TYPE_4__* dtpdd_predicate; } ;
struct TYPE_20__ {TYPE_8__* dted_action; TYPE_1__ dted_pred; } ;
typedef TYPE_7__ dtrace_ecbdesc_t ;
typedef int dtrace_difo_t ;
struct TYPE_21__ {scalar_t__ dtad_kind; int * dtad_difo; struct TYPE_21__* dtad_next; } ;
typedef TYPE_8__ dtrace_actdesc_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_6__*,TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_6__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5(proc_t* VAR_8, int VAR_9, dtrace_ecbdesc_t *VAR_10)
{
 dtrace_helpers_t *VAR_11;
 dtrace_helper_action_t *VAR_12, *VAR_13;
 dtrace_actdesc_t *VAR_14;
 dtrace_vstate_t *VAR_15;
 dtrace_predicate_t *VAR_16;
 int VAR_17 = 0, VAR_18 = 0, VAR_19;

 if (VAR_9 < 0 || VAR_9 >= VAR_1)
  return (VAR_2);

 VAR_11 = VAR_8->p_dtrace_helpers;
 VAR_13 = VAR_11->dthps_actions[VAR_9];
 VAR_15 = &VAR_11->dthps_vstate;

 for (VAR_17 = 0; VAR_13 != ((void*)0); VAR_13 = VAR_13->dtha_next) {
  VAR_17++;
  if (VAR_13->dtha_next == ((void*)0))
   break;
 }





 if (VAR_17 >= VAR_5)
  return (VAR_3);

 VAR_12 = FUNC_4(sizeof (dtrace_helper_action_t), VAR_4);
 VAR_12->dtha_generation = VAR_11->dthps_generation;

 if ((VAR_16 = VAR_10->dted_pred.dtpdd_predicate) != ((void*)0)) {
  FUNC_0(VAR_16->dtp_difo != ((void*)0));
  FUNC_1(VAR_16->dtp_difo);
  VAR_12->dtha_predicate = VAR_16->dtp_difo;
 }

 for (VAR_14 = VAR_10->dted_action; VAR_14 != ((void*)0); VAR_14 = VAR_14->dtad_next) {
  if (VAR_14->dtad_kind != VAR_0)
   goto err;

  if (VAR_14->dtad_difo == ((void*)0))
   goto err;

  VAR_18++;
 }

 VAR_12->dtha_actions = FUNC_4(sizeof (dtrace_difo_t *) *
     (VAR_12->dtha_nactions = VAR_18), VAR_4);

 for (VAR_14 = VAR_10->dted_action, VAR_19 = 0; VAR_14 != ((void*)0); VAR_14 = VAR_14->dtad_next) {
  FUNC_1(VAR_14->dtad_difo);
  VAR_12->dtha_actions[VAR_19++] = VAR_14->dtad_difo;
 }

 if (!FUNC_3(VAR_12))
  goto err;

 if (VAR_13 == ((void*)0)) {
  VAR_11->dthps_actions[VAR_9] = VAR_12;
 } else {
  VAR_13->dtha_next = VAR_12;
 }

 if ((uint32_t)VAR_15->dtvs_nlocals > VAR_7) {
  VAR_7 = VAR_15->dtvs_nlocals;
  VAR_6 = 0;
 }

 return (0);
err:
 FUNC_2(VAR_12, VAR_15);
 return (VAR_2);
}
