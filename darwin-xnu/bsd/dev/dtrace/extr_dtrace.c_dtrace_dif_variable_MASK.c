
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;
typedef struct TYPE_20__ TYPE_16__ ;
typedef struct TYPE_19__ TYPE_14__ ;


typedef TYPE_2__* uthread_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int * thread_t ;
typedef void* pc_t ;
typedef int dtrace_vstate_t ;
struct TYPE_24__ {int dts_arg_error_illval; int dts_vstate; } ;
typedef TYPE_3__ dtrace_state_t ;
struct TYPE_22__ {int (* dtps_getargval ) (int ,int,int ,int,int) ;} ;
struct TYPE_25__ {int dtpv_name; int dtpv_arg; TYPE_1__ dtpv_pops; } ;
typedef TYPE_4__ dtrace_provider_t ;
struct TYPE_26__ {int dtms_present; int* dtms_arg; int dtms_timestamp; int dtms_walltimestamp; int dtms_machtimestamp; int dtms_ipl; int dtms_epid; int dtms_stackdepth; int dtms_ustackdepth; uintptr_t dtms_caller; int dtms_ucaller; size_t dtms_scratch_ptr; TYPE_16__* dtms_probe; } ;
typedef TYPE_5__ dtrace_mstate_t ;
struct TYPE_23__ {int t_dtrace_errno; } ;
struct TYPE_21__ {size_t cpu_id; } ;
struct TYPE_20__ {int dtpr_id; int dtpr_name; int dtpr_func; int dtpr_mod; TYPE_4__* dtpr_provider; int dtpr_aframes; int dtpr_arg; } ;
struct TYPE_19__ {int cpuc_dtrace_illval; } ;


 int FUNC_0 (int) ;
 TYPE_17__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_17__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_16__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,size_t) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_14__* VAR_19 ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 uintptr_t FUNC_8 (int) ;
 int FUNC_9 (uintptr_t,TYPE_3__*,TYPE_5__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int,int,TYPE_5__*,int *) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (void**,int,int,int *) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int*,int) ;
 int FUNC_20 () ;
 int FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*) ;
 int VAR_20 ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int VAR_21 ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int FUNC_33 () ;
 int FUNC_34 () ;
 int FUNC_35 (char*,size_t) ;
 int FUNC_36 (char*,char*,size_t) ;
 int FUNC_37 (int ,int,int ,int,int) ;
 int FUNC_38 (int *) ;
 int FUNC_39 (int *) ;

__attribute__((used)) static uint64_t
FUNC_40(dtrace_mstate_t *VAR_22, dtrace_state_t *VAR_23, uint64_t VAR_24,
    uint64_t VAR_25)
{




 if (VAR_24 >= VAR_5 && VAR_24 <= VAR_6) {
  VAR_25 = VAR_24 - VAR_5;
  VAR_24 = 160;
 }

 switch (VAR_24) {
 case 160:
  FUNC_0(VAR_22->dtms_present & VAR_7);
  if (VAR_25 >= sizeof (VAR_22->dtms_arg) /
      sizeof (VAR_22->dtms_arg[0])) {



   int VAR_26 = VAR_22->dtms_probe->dtpr_aframes + 3;
   dtrace_vstate_t *VAR_27 = &VAR_23->dts_vstate;
   dtrace_provider_t *VAR_28;
   uint64_t VAR_29;

   VAR_28 = VAR_22->dtms_probe->dtpr_provider;
   if (VAR_28->dtpv_pops.dtps_getargval != ((void*)0))
    VAR_29 = VAR_28->dtpv_pops.dtps_getargval(VAR_28->dtpv_arg,
        VAR_22->dtms_probe->dtpr_id,
        VAR_22->dtms_probe->dtpr_arg, VAR_25, VAR_26);

   else if (VAR_22->dtms_probe->dtpr_id == VAR_20 && VAR_25 == 5) {
           return ((dtrace_state_t *)(uintptr_t)(VAR_22->dtms_arg[0]))->dts_arg_error_illval;
   }

   else
    VAR_29 = FUNC_12(VAR_25, VAR_26, VAR_22, VAR_27);
   if (VAR_22->dtms_probe != ((void*)0))
    return (VAR_29);

   FUNC_0(0);
  }

  return (VAR_22->dtms_arg[VAR_25]);

 case 134: {
  thread_t VAR_30;

  if (!FUNC_22(VAR_23))
   return (0);

  if ((VAR_30 = FUNC_6()) == ((void*)0)) {
   FUNC_4(VAR_1);
   VAR_19[VAR_0->cpu_id].cpuc_dtrace_illval = 0;
   return (0);
  }

  return (FUNC_17(FUNC_27(VAR_30), VAR_25));
 }


 case 155:
  if (!FUNC_21(VAR_23))
   return (0);

  return ((uint64_t)(uintptr_t)FUNC_6());

 case 137:
  if (!(VAR_22->dtms_present & VAR_14)) {
   VAR_22->dtms_timestamp = FUNC_14();
   VAR_22->dtms_present |= VAR_14;
  }
  return (VAR_22->dtms_timestamp);

 case 130:
  FUNC_0(VAR_21 != 0);
  return (FUNC_11(FUNC_6()));

 case 129:
  if (!(VAR_22->dtms_present & VAR_17)) {
   VAR_22->dtms_walltimestamp = FUNC_13();
   VAR_22->dtms_present |= VAR_17;
  }
  return (VAR_22->dtms_walltimestamp);

 case 147:
  if (!(VAR_22->dtms_present & VAR_11)) {
   VAR_22->dtms_machtimestamp = FUNC_30();
   VAR_22->dtms_present |= VAR_11;
  }
  return (VAR_22->dtms_machtimestamp);

 case 158:
  return ((uint64_t) FUNC_10(FUNC_6()));

 case 148:
  if (!FUNC_21(VAR_23))
   return (0);
  if (!(VAR_22->dtms_present & VAR_10)) {
   VAR_22->dtms_ipl = FUNC_15();
   VAR_22->dtms_present |= VAR_10;
  }
  return (VAR_22->dtms_ipl);

 case 153:
  FUNC_0(VAR_22->dtms_present & VAR_9);
  return (VAR_22->dtms_epid);

 case 149:
  FUNC_0(VAR_22->dtms_present & VAR_12);
  return (VAR_22->dtms_probe->dtpr_id);

 case 139:
  if (!FUNC_21(VAR_23))
   return (0);
  if (!(VAR_22->dtms_present & VAR_13)) {



   int VAR_31 = VAR_22->dtms_probe->dtpr_aframes + 3;

   VAR_22->dtms_stackdepth = FUNC_18(VAR_31);
   VAR_22->dtms_present |= VAR_13;
  }
  return (VAR_22->dtms_stackdepth);

 case 133:
  if (!FUNC_22(VAR_23))
   return (0);
  if (!(VAR_22->dtms_present & VAR_16)) {



   if (FUNC_2(VAR_22->dtms_probe) &&
       FUNC_1(VAR_0)) {
    VAR_22->dtms_ustackdepth = 0;
   } else {
    FUNC_4(VAR_3);
    VAR_22->dtms_ustackdepth =
        FUNC_20();
    FUNC_3(VAR_3);
   }
   VAR_22->dtms_present |= VAR_16;
  }
  return (VAR_22->dtms_ustackdepth);

 case 159:
  if (!FUNC_21(VAR_23))
   return (0);
  if (!(VAR_22->dtms_present & VAR_8)) {



   int VAR_32 = VAR_22->dtms_probe->dtpr_aframes + 3;

   if (!FUNC_2(VAR_22->dtms_probe)) {






    pc_t VAR_33[2];

    FUNC_16(VAR_33, 2, VAR_32,
        (uint32_t *)(uintptr_t)VAR_22->dtms_arg[0]);
    VAR_22->dtms_caller = VAR_33[1];
   } else if ((VAR_22->dtms_caller =
    FUNC_8(VAR_32)) == (uintptr_t)-1) {





    pc_t VAR_34;

    FUNC_16(&VAR_34, 1, VAR_32, ((void*)0));
    VAR_22->dtms_caller = VAR_34;
   }

   VAR_22->dtms_present |= VAR_8;
  }
  return (VAR_22->dtms_caller);

 case 136:
  if (!FUNC_22(VAR_23))
   return (0);

  if (!(VAR_22->dtms_present & VAR_15)) {
   uint64_t VAR_35[3];
   VAR_35[2] = 0;
   FUNC_4(VAR_3);
   FUNC_19(VAR_35, 3);
   FUNC_3(VAR_3);
   VAR_22->dtms_ucaller = VAR_35[2];
   VAR_22->dtms_present |= VAR_15;
  }

  return (VAR_22->dtms_ucaller);

 case 141:
  FUNC_0(VAR_22->dtms_present & VAR_12);
  return (FUNC_9(
      (uintptr_t)VAR_22->dtms_probe->dtpr_provider->dtpv_name,
      VAR_23, VAR_22));

 case 143:
  FUNC_0(VAR_22->dtms_present & VAR_12);
  return (FUNC_9(
      (uintptr_t)VAR_22->dtms_probe->dtpr_mod,
      VAR_23, VAR_22));

 case 144:
  FUNC_0(VAR_22->dtms_present & VAR_12);
  return (FUNC_9(
      (uintptr_t)VAR_22->dtms_probe->dtpr_func,
      VAR_23, VAR_22));

 case 142:
  FUNC_0(VAR_22->dtms_present & VAR_12);
  return (FUNC_9(
      (uintptr_t)VAR_22->dtms_probe->dtpr_name,
      VAR_23, VAR_22));

 case 146:
  if (!FUNC_23(VAR_23))
   return (0);






  if (FUNC_2(VAR_22->dtms_probe) && FUNC_1(VAR_0))

   return 0;

  return ((uint64_t)FUNC_24());

 case 145:
  if (!FUNC_23(VAR_23))
   return (0);




  if (FUNC_2(VAR_22->dtms_probe) && FUNC_1(VAR_0))
   return (0);

  return ((uint64_t)FUNC_25());

 case 138:

  return FUNC_39(FUNC_6());

 case 140:
  if (!FUNC_22(VAR_23))
   return (0);


  return 0;

 case 154:
  if (!FUNC_22(VAR_23))
   return (0);


  return FUNC_38(FUNC_6());

 case 151:
 {
  char *VAR_36 = (char *)VAR_22->dtms_scratch_ptr;
  size_t VAR_37 = VAR_18+1;


  if (!FUNC_5(VAR_22, VAR_37)) {
   FUNC_4(VAR_4);
   return 0;
  }

  if (!FUNC_23(VAR_23))
   return (0);

  VAR_22->dtms_scratch_ptr += VAR_37;
  FUNC_35( VAR_36, VAR_37 );

  return ((uint64_t)(uintptr_t)VAR_36);
 }


 case 128:
 {

  char *VAR_38 = (char *)VAR_22->dtms_scratch_ptr;
  size_t VAR_39 = 6 + 1;

  if (!FUNC_22(VAR_23))
   return (0);


  if (!FUNC_5(VAR_22, VAR_39)) {
   FUNC_4(VAR_4);
   return 0;
  }

  VAR_22->dtms_scratch_ptr += VAR_39;


  FUNC_36(VAR_38, "global", VAR_39);

  return ((uint64_t)(uintptr_t)VAR_38);
 }
 case 156:
 case 157:
 case 131:
 case 132:
  return 0;


 case 135:
  if (!FUNC_23(VAR_23))
   return (0);




  if (FUNC_2(VAR_22->dtms_probe) && FUNC_1(VAR_0))
   return (0);

  return ((uint64_t) FUNC_26());

 case 150:
  if (!FUNC_22(VAR_23))
   return (0);




  if (FUNC_2(VAR_22->dtms_probe) && FUNC_1(VAR_0))
   return (0);

  if (FUNC_7() != ((void*)0))

   return ((uint64_t)FUNC_29());
  else {

   FUNC_4(VAR_2);
   return -1ULL;
  }

 case 152: {
  uthread_t VAR_40 = (uthread_t)FUNC_28(FUNC_6());
  if (!FUNC_22(VAR_23))
   return (0);




  if (FUNC_2(VAR_22->dtms_probe) && FUNC_1(VAR_0))
   return (0);

  if (VAR_40)
   return (uint64_t)VAR_40->t_dtrace_errno;
  else {
   FUNC_4(VAR_2);
   return -1ULL;
  }
 }

 default:
  FUNC_4(VAR_2);
  return (0);
 }
}
