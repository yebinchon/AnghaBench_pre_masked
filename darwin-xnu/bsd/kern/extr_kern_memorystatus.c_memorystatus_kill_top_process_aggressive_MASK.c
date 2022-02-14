
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
typedef TYPE_1__* proc_t ;
typedef int pid_t ;
typedef scalar_t__ os_reason_t ;
typedef scalar_t__ int32_t ;
typedef int clock_usec_t ;
typedef scalar_t__ clock_sec_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_14__ {scalar_t__ entry_count; } ;
struct TYPE_13__ {int p_listflag; scalar_t__ p_memstat_effectivepriority; char* p_name; int p_pid; int p_memstat_state; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,scalar_t__,int,int,int ,int ) ;
 int FUNC_2 (int,char*,int,int,char*,...) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_3 (int ,scalar_t__*,int*) ;
 int VAR_18 ;
 int FUNC_4 () ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_5 (TYPE_1__*,size_t,scalar_t__) ;
 TYPE_1__* FUNC_6 (unsigned int*,scalar_t__) ;
 TYPE_1__* FUNC_7 (unsigned int*,TYPE_1__*,scalar_t__) ;
 int FUNC_8 (int *,int ) ;
 int VAR_21 ;
 TYPE_7__* VAR_22 ;
 scalar_t__ VAR_23 ;
 int * VAR_24 ;
 unsigned int VAR_25 ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (TYPE_1__*,size_t,int ) ;
 scalar_t__ FUNC_11 (int ,size_t) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 TYPE_1__* FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_20(uint32_t VAR_26, int VAR_27,
      int32_t VAR_28, uint32_t *VAR_29)
{
 pid_t VAR_30;
 proc_t VAR_31 = VAR_11, VAR_32 = VAR_11;
 boolean_t VAR_33 = VAR_5, VAR_34 = VAR_5;
 int VAR_35 = 0;
 unsigned int VAR_36 = 0;
 int32_t VAR_37 = 0;
 unsigned int VAR_38 = 0;
 uint64_t VAR_39 = 0;
        clock_sec_t VAR_40;
        clock_usec_t VAR_41;
        uint32_t VAR_42;
 os_reason_t VAR_43 = VAR_10;

 FUNC_1(FUNC_0(VAR_2, VAR_1) | VAR_4,
  VAR_20, VAR_28, 0, 0, 0);

 FUNC_9(VAR_6, VAR_8);

 VAR_43 = FUNC_11(VAR_9, VAR_26);
 if (VAR_43 == VAR_10) {
  FUNC_14("memorystatus_kill_top_process_aggressive: failed to allocate exit reason\n");
 }

 FUNC_15();

 VAR_32 = FUNC_6(&VAR_36, VAR_17);
 while (VAR_32) {





  if (((VAR_32->p_listflag & VAR_12) != 0) ||
      ((unsigned int)(VAR_32->p_memstat_effectivepriority) != VAR_36)) {
   FUNC_2(1, "memorystatus: aggressive%d: rewinding band %d, %s(%d) moved or exiting.\n",
        VAR_27, VAR_36, (*VAR_32->p_name ? VAR_32->p_name : "unknown"), VAR_32->p_pid);

   VAR_32 = FUNC_6(&VAR_36, VAR_17);
   continue;
  }

  VAR_31 = VAR_32;
  VAR_32 = FUNC_7(&VAR_36, VAR_31, VAR_17);

  if (VAR_31->p_memstat_effectivepriority > VAR_28) {






   FUNC_16();
   goto exit;
  }






  VAR_30 = VAR_31->p_pid;
  VAR_37 = VAR_31->p_memstat_effectivepriority;

  if (VAR_31->p_memstat_state & (VAR_14 | VAR_16)) {
   continue;
  }
  if (VAR_23 == 0) {
   FUNC_8(((void*)0),0);
   VAR_33 = VAR_17;
  }







  VAR_31->p_memstat_state |= VAR_16;

  VAR_39 = FUNC_4();
  FUNC_3(VAR_39, &VAR_40, &VAR_41);
  VAR_42 = VAR_41 / 1000;


  FUNC_10(VAR_31, VAR_26, VAR_39);
  if (FUNC_17(VAR_31) == VAR_31) {
   if (VAR_32) {
    while (VAR_32 && (FUNC_17(VAR_32) != VAR_32)) {
     proc_t VAR_44;






     FUNC_2(1, "memorystatus: aggressive%d: skipping %d [%s] (exiting?)\n",
            VAR_27, VAR_32->p_pid, (*VAR_32->p_name ? VAR_32->p_name : "(unknown)"));

     VAR_44 = VAR_32;
     VAR_32 = FUNC_7(&VAR_36, VAR_44, VAR_17);
     }
   }
   FUNC_16();

   FUNC_14("%lu.%03d memorystatus: %s%d pid %d [%s] (%s %d) - memorystatus_available_pages: %llu\n",
          (unsigned long)VAR_40, VAR_42,
          ((VAR_37 == VAR_7) ? "killing_idle_process_aggressive" : "killing_top_process_aggressive"),
          VAR_27, VAR_30, (*VAR_31->p_name ? VAR_31->p_name : "unknown"),
          VAR_24[VAR_26], VAR_37, (uint64_t)VAR_20);

   VAR_38 = VAR_25;






   FUNC_13(VAR_43);
   VAR_34 = FUNC_5(VAR_31, VAR_26, VAR_43);


   if (VAR_34) {
    FUNC_18(VAR_31);
    VAR_35++;
    VAR_31 = ((void*)0);
    VAR_34 = VAR_5;




    FUNC_15();
    if (VAR_32) {
     FUNC_19(VAR_32);
    }

    if (VAR_37 == VAR_6 && VAR_19 == VAR_17) {
     if (VAR_25 > VAR_38 && ((VAR_25 - VAR_38) >= VAR_0)) {



      VAR_19 = VAR_5;
      break;
     }
    }

    continue;
   }





   FUNC_15();
   FUNC_19(VAR_31);
   if (VAR_32) {
    FUNC_19(VAR_32);
   }
   VAR_31->p_memstat_state &= ~VAR_16;
   VAR_31->p_memstat_state |= VAR_14;
   *VAR_29 += 1;
   VAR_31 = ((void*)0);
  }
  VAR_32 = FUNC_6(&VAR_36, VAR_17);
 }

 FUNC_16();

exit:
 FUNC_12(VAR_43);


 if (VAR_33 && (VAR_35 == 0)) {
     FUNC_15();
     VAR_22->entry_count = VAR_23 = 0;
     FUNC_16();
 }

 FUNC_1(FUNC_0(VAR_2, VAR_1) | VAR_3,
         VAR_20, VAR_34 ? VAR_30 : 0, VAR_35, 0, 0);

 if (VAR_35 > 0) {
  return(VAR_17);
 }
 else {
  return(VAR_5);
 }
}
