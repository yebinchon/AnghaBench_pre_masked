
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_27__ {int dcr_visible; } ;
struct TYPE_29__ {TYPE_2__ dts_cred; } ;
typedef TYPE_4__ dtrace_state_t ;
struct TYPE_28__ {int dtpp_flags; } ;
struct TYPE_30__ {TYPE_3__ dtpv_priv; } ;
typedef TYPE_5__ dtrace_provider_t ;
struct TYPE_31__ {TYPE_5__* dtpr_provider; } ;
typedef TYPE_6__ dtrace_probe_t ;
typedef int dtrace_predicate_t ;
struct TYPE_32__ {int dten_error; TYPE_8__* dten_current; } ;
typedef TYPE_7__ dtrace_enabling_t ;
struct TYPE_26__ {int * dtpdd_predicate; } ;
struct TYPE_33__ {TYPE_11__* dted_action; TYPE_1__ dted_pred; int dted_uarg; } ;
typedef TYPE_8__ dtrace_ecbdesc_t ;
struct TYPE_34__ {int dte_alignment; int dte_size; int dte_needed; int dte_action_last; TYPE_10__* dte_action; int dte_cond; int * dte_predicate; int dte_uarg; } ;
typedef TYPE_9__ dtrace_ecb_t ;
struct TYPE_24__ {scalar_t__ dta_refcnt; } ;
typedef TYPE_10__ dtrace_action_t ;
struct TYPE_25__ {struct TYPE_25__* dtad_next; } ;
typedef TYPE_11__ dtrace_actdesc_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_9__*,TYPE_11__*) ;
 TYPE_9__* FUNC_3 (TYPE_4__*,TYPE_6__*) ;
 TYPE_9__* VAR_9 ;
 int FUNC_4 (TYPE_9__*) ;
 int FUNC_5 (TYPE_9__*) ;
 int VAR_10 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static dtrace_ecb_t *
FUNC_7(dtrace_state_t *VAR_11, dtrace_probe_t *VAR_12,
    dtrace_enabling_t *VAR_13)
{
 dtrace_ecb_t *VAR_14;
 dtrace_predicate_t *VAR_15;
 dtrace_actdesc_t *VAR_16;
 dtrace_provider_t *VAR_17;
 dtrace_ecbdesc_t *VAR_18 = VAR_13->dten_current;

 FUNC_1(&VAR_10, VAR_8);
 FUNC_0(VAR_11 != ((void*)0));

 VAR_14 = FUNC_3(VAR_11, VAR_12);
 VAR_14->dte_uarg = VAR_18->dted_uarg;

 if ((VAR_15 = VAR_18->dted_pred.dtpdd_predicate) != ((void*)0)) {
  FUNC_6(VAR_15);
  VAR_14->dte_predicate = VAR_15;
 }

 if (VAR_12 != ((void*)0)) {
  VAR_17 = VAR_12->dtpr_provider;
  if (!(VAR_11->dts_cred.dcr_visible & VAR_3) &&
      (VAR_17->dtpv_priv.dtpp_flags & VAR_7))
   VAR_14->dte_cond |= VAR_0;

  if (!(VAR_11->dts_cred.dcr_visible & VAR_4) &&
      (VAR_17->dtpv_priv.dtpp_flags & VAR_7))
   VAR_14->dte_cond |= VAR_2;






  if (!(VAR_11->dts_cred.dcr_visible & VAR_5) &&
      (VAR_17->dtpv_priv.dtpp_flags & VAR_6))
   VAR_14->dte_cond |= VAR_1;
 }

 if (VAR_9 != ((void*)0)) {




  dtrace_ecb_t *VAR_19 = VAR_9;
  dtrace_action_t *VAR_20 = VAR_19->dte_action;

  if (VAR_20 != ((void*)0)) {
   FUNC_0(VAR_20->dta_refcnt > 0);
   VAR_20->dta_refcnt++;
   VAR_14->dte_action = VAR_20;
   VAR_14->dte_action_last = VAR_19->dte_action_last;
   VAR_14->dte_needed = VAR_19->dte_needed;
   VAR_14->dte_size = VAR_19->dte_size;
   VAR_14->dte_alignment = VAR_19->dte_alignment;
  }

  return (VAR_14);
 }

 for (VAR_16 = VAR_18->dted_action; VAR_16 != ((void*)0); VAR_16 = VAR_16->dtad_next) {
  if ((VAR_13->dten_error = FUNC_2(VAR_14, VAR_16)) != 0) {
   FUNC_4(VAR_14);
   return (((void*)0));
  }
 }

 if ((VAR_13->dten_error = FUNC_5(VAR_14)) != 0) {
  FUNC_4(VAR_14);
  return (((void*)0));
 }

 return (VAR_9 = VAR_14);
}
