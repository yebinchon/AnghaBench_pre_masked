
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_9__ {int dtvs_nlocals; TYPE_2__** dtvs_locals; } ;
typedef TYPE_1__ dtrace_vstate_t ;
struct TYPE_10__ {int dtsv_size; scalar_t__ dtsv_data; } ;
typedef TYPE_2__ dtrace_statvar_t ;
struct TYPE_11__ {int dtms_present; int dtms_fltoffs; } ;
typedef TYPE_3__ dtrace_mstate_t ;
struct TYPE_12__ {int dtht_where; int dtht_nlocals; int dtht_fltoffs; int * dtht_locals; int dtht_illval; int dtht_fault; int * dtht_helper; } ;
typedef TYPE_4__ dtrace_helptrace_t ;
typedef int dtrace_helper_action_t ;
struct TYPE_14__ {size_t cpu_id; } ;
struct TYPE_13__ {int cpuc_dtrace_illval; int cpuc_dtrace_flags; } ;


 int FUNC_0 (int) ;
 TYPE_8__* VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_7__* VAR_3 ;
 int FUNC_2 (int*,int,int) ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_3(dtrace_helper_action_t *VAR_9,
    dtrace_mstate_t *VAR_10, dtrace_vstate_t *VAR_11, int VAR_12)
{
 uint32_t VAR_13, VAR_14, VAR_15;
 int VAR_16;
 dtrace_helptrace_t *VAR_17;
 uint16_t VAR_18 = VAR_3[VAR_0->cpu_id].cpuc_dtrace_flags;

 if (!VAR_6)
  return;

 FUNC_0((uint32_t)VAR_11->dtvs_nlocals <= VAR_8);





 VAR_13 = sizeof (dtrace_helptrace_t) + VAR_8 *
     sizeof (uint64_t) - sizeof (uint64_t);




 do {
  VAR_14 = VAR_7;

  if (VAR_14 + VAR_13 < VAR_5) {
   VAR_15 = VAR_14 + VAR_13;
  } else {
   VAR_15 = VAR_13;
  }
 } while (FUNC_2(&VAR_7, VAR_14, VAR_15) != VAR_14);




 if (VAR_15 == VAR_13)
  VAR_14 = 0;

 VAR_17 = (dtrace_helptrace_t *)&VAR_4[VAR_14];
 VAR_17->dtht_helper = VAR_9;
 VAR_17->dtht_where = VAR_12;
 VAR_17->dtht_nlocals = VAR_11->dtvs_nlocals;

 VAR_17->dtht_fltoffs = (VAR_10->dtms_present & VAR_1) ?
     VAR_10->dtms_fltoffs : -1;
 VAR_17->dtht_fault = FUNC_1(VAR_18);
 VAR_17->dtht_illval = VAR_3[VAR_0->cpu_id].cpuc_dtrace_illval;

 for (VAR_16 = 0; VAR_16 < VAR_11->dtvs_nlocals; VAR_16++) {
  dtrace_statvar_t *VAR_19;

  if ((VAR_19 = VAR_11->dtvs_locals[VAR_16]) == ((void*)0))
   continue;

  FUNC_0(VAR_19->dtsv_size >= (int)VAR_2 * sizeof (uint64_t));
  VAR_17->dtht_locals[VAR_16] =
      ((uint64_t *)(uintptr_t)VAR_19->dtsv_data)[VAR_0->cpu_id];
 }
}
