
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_20__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;


typedef int uint64_t ;
typedef size_t processorid_t ;
typedef int dtrace_xcall_t ;
struct TYPE_22__ {int dtvs_dynvars; } ;
struct TYPE_24__ {int dcr_destructive; } ;
struct TYPE_25__ {int* dts_options; scalar_t__ dts_activity; int dts_nspeculations; scalar_t__ dts_necbs; size_t dts_needed; TYPE_4__* dts_speculations; TYPE_4__* dts_aggbuffer; TYPE_4__* dts_buffer; void* dts_deadman; int dts_laststatus; int dts_alive; void* dts_cleaner; TYPE_1__ dts_vstate; int * dts_aggregations; scalar_t__ dts_speculates; struct TYPE_25__* dts_anon; TYPE_2__ dts_cred; scalar_t__ dts_destructive; } ;
typedef TYPE_3__ dtrace_state_t ;
struct TYPE_26__ {int dtb_flags; struct TYPE_26__* dtsp_buffer; } ;
typedef TYPE_4__ dtrace_speculation_t ;
typedef int dtrace_optval_t ;
typedef int dtrace_icookie_t ;
typedef TYPE_4__ dtrace_buffer_t ;
struct TYPE_27__ {int cyt_interval; scalar_t__ cyt_when; } ;
typedef TYPE_6__ cyc_time_t ;
struct TYPE_28__ {void* cyh_level; TYPE_3__* cyh_arg; void* cyh_func; } ;
typedef TYPE_7__ cyc_handler_t ;
typedef void* cyc_func_t ;
struct TYPE_23__ {size_t cpu_id; } ;
struct TYPE_21__ {size_t dta_beganon; int * dta_state; } ;


 int FUNC_0 (int) ;
 TYPE_20__* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 void* FUNC_1 (TYPE_7__*,TYPE_6__*) ;
 TYPE_17__ VAR_31 ;
 TYPE_3__* FUNC_2 () ;
 scalar_t__ VAR_32 ;
 int FUNC_3 (TYPE_4__*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int VAR_39 ;
 int FUNC_9 (int ,int ,int ,int ,int ,int ) ;
 int VAR_40 ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 int FUNC_11 (TYPE_3__*) ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_12 (int ,int ,TYPE_3__*) ;
 int FUNC_13 (TYPE_4__*,int) ;
 TYPE_4__* FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int
FUNC_17(dtrace_state_t *VAR_46, processorid_t *VAR_47)
{
 dtrace_optval_t *VAR_48 = VAR_46->dts_options, VAR_49, VAR_50;
 dtrace_speculation_t *VAR_51;
 dtrace_buffer_t *VAR_52;
 cyc_handler_t VAR_53;
 cyc_time_t VAR_54;
 int VAR_55 = 0, VAR_56, VAR_57 = (int)VAR_29 * sizeof (dtrace_buffer_t);
 dtrace_icookie_t VAR_58;

 FUNC_15(&VAR_30);
 FUNC_15(&VAR_39);

 if (VAR_46->dts_activity != VAR_18) {
  VAR_55 = VAR_23;
  goto out;
 }





 FUNC_5(VAR_46);

 if (VAR_46->dts_destructive && !VAR_46->dts_cred.dcr_destructive) {
  VAR_55 = VAR_21;
  goto out;
 }

 FUNC_11(VAR_46);






 VAR_50 = VAR_48[VAR_11];
 FUNC_0(VAR_50 != VAR_15);

 if (VAR_50 > VAR_27) {
  VAR_55 = VAR_25;
  goto out;
 }

 VAR_51 = FUNC_14(VAR_50 * sizeof (dtrace_speculation_t), VAR_28);

 if (VAR_51 == ((void*)0)) {
  VAR_55 = VAR_25;
  goto out;
 }

 VAR_46->dts_speculations = VAR_51;
 VAR_46->dts_nspeculations = (int)VAR_50;

 for (VAR_56 = 0; VAR_56 < VAR_50; VAR_56++) {
  if ((VAR_52 = FUNC_14(VAR_57, VAR_28)) == ((void*)0)) {
   VAR_55 = VAR_25;
   goto err;
  }

  VAR_51[VAR_56].dtsp_buffer = VAR_52;
 }

 if (VAR_48[VAR_10] != VAR_15) {
  if (VAR_31.dta_state == ((void*)0)) {
   VAR_55 = VAR_24;
   goto out;
  }

  if (VAR_46->dts_necbs != 0) {
   VAR_55 = VAR_22;
   goto out;
  }

  VAR_46->dts_anon = FUNC_2();
  FUNC_0(VAR_46->dts_anon != ((void*)0));
  VAR_46 = VAR_46->dts_anon;






  VAR_46->dts_options[VAR_10] =
      VAR_48[VAR_10];

  *VAR_47 = VAR_31.dta_beganon;







  if (VAR_46->dts_activity != VAR_18)
   goto out;
 }

 if (VAR_48[VAR_3] != VAR_15 &&
     VAR_48[VAR_3] != 0) {
  if (VAR_46->dts_aggregations == ((void*)0)) {





   VAR_48[VAR_3] = 0;
  } else {




   if (VAR_48[VAR_7] == VAR_15 ||
     (size_t)VAR_48[VAR_7] < VAR_46->dts_needed) {
    VAR_48[VAR_7] = VAR_46->dts_needed;
   }
  }
 }

 if (VAR_48[VAR_12] != VAR_15 &&
     VAR_48[VAR_12] != 0) {
  if (!VAR_46->dts_speculates) {





   VAR_48[VAR_12] = 0;
  }
 }





 VAR_49 = sizeof (uint64_t);

 if ((VAR_46->dts_needed != 0 && VAR_48[VAR_7] < VAR_49) ||
     (VAR_46->dts_speculates && VAR_48[VAR_12] < VAR_49) ||
     (VAR_46->dts_aggregations != ((void*)0) && VAR_48[VAR_3] < VAR_49)) {







  VAR_55 = VAR_26;
  goto out;
 }

 if ((VAR_55 = FUNC_10(VAR_46)) != 0)
  goto err;

 if ((VAR_49 = VAR_48[VAR_9]) == VAR_15)
  VAR_49 = VAR_38;

 do {
  VAR_55 = FUNC_4(&VAR_46->dts_vstate.dtvs_dynvars, VAR_49);

  if (VAR_55 == 0)
   break;

  if (VAR_48[VAR_5] == VAR_6)
   goto err;
 } while (VAR_49 >>= 1);

 VAR_48[VAR_9] = VAR_49;

 if (VAR_55 != 0)
  goto err;

 if (VAR_48[VAR_13] > VAR_43)
  VAR_48[VAR_13] = VAR_43;

 if (VAR_48[VAR_8] == 0)
  VAR_48[VAR_8] = VAR_35;

 if (VAR_48[VAR_8] < VAR_36)
  VAR_48[VAR_8] = VAR_36;

 if (VAR_48[VAR_8] > VAR_35)
  VAR_48[VAR_8] = VAR_35;

 if (VAR_48[VAR_14] > VAR_44)
  VAR_48[VAR_14] = VAR_44;

 if (VAR_48[VAR_14] < VAR_45)
  VAR_48[VAR_14] = VAR_45;

 if (VAR_48[VAR_4] > VAR_33)
  VAR_48[VAR_4] = VAR_33;

 if (VAR_48[VAR_4] < VAR_34)
  VAR_48[VAR_4] = VAR_34;

 VAR_53.cyh_func = (cyc_func_t)VAR_41;
 VAR_53.cyh_arg = VAR_46;
 VAR_53.cyh_level = VAR_1;

 VAR_54.cyt_when = 0;
 VAR_54.cyt_interval = VAR_48[VAR_8];

 VAR_46->dts_cleaner = FUNC_1(&VAR_53, &VAR_54);

 VAR_53.cyh_func = (cyc_func_t)VAR_42;
 VAR_53.cyh_arg = VAR_46;
 VAR_53.cyh_level = VAR_1;

 VAR_54.cyt_when = 0;
 VAR_54.cyt_interval = VAR_37;

 VAR_46->dts_alive = VAR_46->dts_laststatus = FUNC_6();
 VAR_46->dts_deadman = FUNC_1(&VAR_53, &VAR_54);

 VAR_46->dts_activity = VAR_19;







 VAR_58 = FUNC_7();
 *VAR_47 = VAR_0->cpu_id;
 FUNC_0(VAR_46->dts_buffer[*VAR_47].dtb_flags & VAR_2);
 VAR_46->dts_buffer[*VAR_47].dtb_flags &= ~VAR_2;

 FUNC_9(VAR_40,
     (uint64_t)(uintptr_t)VAR_46, 0, 0, 0, 0);
 FUNC_8(VAR_58);




 FUNC_0(VAR_46->dts_activity == VAR_19 ||
     VAR_46->dts_activity == VAR_17);

 if (VAR_46->dts_activity == VAR_19)
  VAR_46->dts_activity = VAR_16;
 FUNC_12(VAR_20,
     (dtrace_xcall_t)VAR_32, VAR_46);
 goto out;

err:
 FUNC_3(VAR_46->dts_buffer);
 FUNC_3(VAR_46->dts_aggbuffer);

 if ((VAR_50 = VAR_46->dts_nspeculations) == 0) {
  FUNC_0(VAR_46->dts_speculations == ((void*)0));
  goto out;
 }

 VAR_51 = VAR_46->dts_speculations;
 FUNC_0(VAR_51 != ((void*)0));

 for (VAR_56 = 0; VAR_56 < VAR_46->dts_nspeculations; VAR_56++) {
  if ((VAR_52 = VAR_51[VAR_56].dtsp_buffer) == ((void*)0))
   break;

  FUNC_3(VAR_52);
  FUNC_13(VAR_52, VAR_57);
 }

 FUNC_13(VAR_51, VAR_50 * sizeof (dtrace_speculation_t));
 VAR_46->dts_nspeculations = 0;
 VAR_46->dts_speculations = ((void*)0);

out:
 FUNC_16(&VAR_39);
 FUNC_16(&VAR_30);

 return (VAR_55);
}
