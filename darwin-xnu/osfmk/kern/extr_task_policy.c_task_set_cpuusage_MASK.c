
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned long long uint64_t ;
typedef int thread_call_param_t ;
typedef TYPE_1__* task_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_11__ {int * bsd_info; } ;
struct TYPE_10__ {int cpu_time; } ;
struct TYPE_9__ {int rusage_cpu_flags; unsigned long long rusage_cpu_perthr_interval; int rusage_cpu_perthr_percentage; int rusage_cpu_percentage; unsigned long long rusage_cpu_interval; unsigned long long rusage_cpu_deadline; int * rusage_cpu_callt; int ledger; int lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long long,unsigned long long*) ;
 TYPE_8__* FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,unsigned long long,int ) ;
 int FUNC_6 (int ,int ,unsigned long long) ;
 int FUNC_7 (unsigned long long,unsigned long long*) ;
 int FUNC_8 (char*,char const*,int) ;
 unsigned long long VAR_11 ;
 int VAR_12 ;
 char* FUNC_9 (int *) ;
 int FUNC_10 () ;
 int VAR_13 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 TYPE_5__ VAR_14 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int * FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,unsigned long long) ;

__attribute__((used)) static int
FUNC_18(task_t VAR_15, uint8_t VAR_16, uint64_t VAR_17, uint64_t VAR_18, int VAR_19, int VAR_20)
{
 uint64_t VAR_21 = 0;
 uint64_t VAR_22 = 0;

 FUNC_3(&VAR_15->lock, VAR_1);


 if (VAR_17 == 0)
  VAR_17 = VAR_3;

 if (VAR_16 != 0) {
  if (VAR_19 == VAR_7) {
   boolean_t VAR_23 = VAR_0;







   if (VAR_16 == VAR_5) {
    if (VAR_20) {

     FUNC_11(VAR_15);
     return 0;
    }
    VAR_23 = VAR_10;
    VAR_16 = VAR_4;
   }

   if (VAR_16 == VAR_4) {
    VAR_16 = VAR_12;
    VAR_17 = VAR_11;
   }

   if (VAR_16 > 100) {
    VAR_16 = 100;
   }







   if (VAR_17 == -1ULL) {
    if (VAR_15->rusage_cpu_flags & VAR_7) {
      VAR_17 = VAR_15->rusage_cpu_perthr_interval;
    } else {
     VAR_17 = VAR_11;
    }
   }





    if ((VAR_16 > VAR_12) && (VAR_20 == 0)) {
    VAR_23 = VAR_10;
     VAR_16 = VAR_12;
    }

    if ((VAR_17 > VAR_11) && (VAR_20 == 0)) {
    VAR_23 = VAR_10;
     VAR_17 = VAR_11;
    }

   if (VAR_23) {
    int VAR_24 = 0;
    const char *VAR_25 = "unknown";
    FUNC_8("process %s[%d] denied attempt to escape CPU monitor"
     " (missing required entitlement).\n", VAR_25, VAR_24);
   }


   VAR_15->rusage_cpu_perthr_percentage = VAR_16;
   VAR_15->rusage_cpu_perthr_interval = VAR_17;


   (void)FUNC_12(VAR_15);
  } else if (VAR_19 == VAR_8) {




   VAR_15->rusage_cpu_flags |= VAR_8;
   VAR_15->rusage_cpu_percentage = VAR_16;
   VAR_15->rusage_cpu_interval = VAR_17;

   VAR_22 = (VAR_17 * VAR_16) / 100;
   FUNC_7(VAR_22, &VAR_21);

   FUNC_5(VAR_15->ledger, VAR_14.cpu_time, VAR_21, 0);
   FUNC_6(VAR_15->ledger, VAR_14.cpu_time, VAR_17);
   FUNC_4(VAR_15->ledger, VAR_14.cpu_time, VAR_2);
  }
 }

 if (VAR_18 != 0) {
  FUNC_0(VAR_19 == VAR_6);


  if (VAR_15->rusage_cpu_callt != ((void*)0)) {
   FUNC_14(VAR_15);
   FUNC_16(VAR_15->rusage_cpu_callt);
   FUNC_13(VAR_15);
  }
  if (VAR_15->rusage_cpu_callt == ((void*)0)) {
   VAR_15->rusage_cpu_callt = FUNC_15(VAR_13, (thread_call_param_t)VAR_15, VAR_9);
  }

  if (VAR_15->rusage_cpu_callt != 0) {
   uint64_t VAR_26 = 0;

   VAR_15->rusage_cpu_flags |= VAR_6;
   VAR_15->rusage_cpu_deadline = VAR_18;

   FUNC_7(VAR_18, &VAR_21);
   VAR_26 = VAR_21;
   FUNC_1(VAR_26, &VAR_21);
   FUNC_17(VAR_15->rusage_cpu_callt, VAR_21);
  }
 }

 return(0);
}
