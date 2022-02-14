
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
typedef size_t uint32_t ;
typedef TYPE_1__* proc_t ;
typedef int pid_t ;
typedef int os_reason_t ;
typedef int clock_usec_t ;
typedef scalar_t__ clock_sec_t ;
typedef int boolean_t ;
struct TYPE_6__ {int p_pid; size_t p_memstat_effectivepriority; char* p_name; int p_memstat_state; int task; scalar_t__ p_memstat_memlimit; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned long long,scalar_t__*,int*) ;
 unsigned long long VAR_6 ;
 unsigned long long FUNC_2 (int ) ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long long FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (TYPE_1__*,size_t,int ) ;
 int VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (TYPE_1__*,size_t,unsigned long long) ;
 int FUNC_7 (TYPE_1__*,size_t) ;
 int FUNC_8 (int ,char*,unsigned long,size_t,char*,int,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (int ) ;
 unsigned long long FUNC_15 (int ) ;

__attribute__((used)) static boolean_t
FUNC_16(proc_t VAR_18, uint32_t VAR_19, os_reason_t VAR_20, boolean_t *VAR_21)
{
 pid_t VAR_22 = 0;
 uint32_t VAR_23 = 0;

 uint64_t VAR_24 = 0;
        clock_sec_t VAR_25;
        clock_usec_t VAR_26;
        uint32_t VAR_27;
 boolean_t VAR_28 = VAR_0;
 uint64_t VAR_29 = 0;

 VAR_22 = VAR_18->p_pid;
 VAR_23 = VAR_18->p_memstat_effectivepriority;

 if (VAR_19 != VAR_10 && VAR_19 != VAR_11) {



  boolean_t VAR_30 = VAR_0;

  FUNC_7(VAR_18, VAR_19);
  VAR_29 = FUNC_15(VAR_18->task);

  if (VAR_29) {




   if (VAR_19 == VAR_9) {
    uint64_t VAR_31 = FUNC_2(VAR_18->task);
    uint64_t VAR_32 = (((uint64_t)VAR_18->p_memstat_memlimit) * 1024ULL * 1024ULL);
    VAR_30 = (VAR_31 <= VAR_32);
   } else {
    VAR_30 = (FUNC_4() == VAR_0);
   }

   if (VAR_30) {

    VAR_17++;

    FUNC_8(VAR_2, "memorystatus: purged %llu pages from pid %d [%s] and avoided %s\n",
    VAR_29, VAR_22, (*VAR_18->p_name ? VAR_18->p_name : "unknown"), VAR_16[VAR_19]);

    *VAR_21 = VAR_0;

    return VAR_5;
   }
  }
 }
 VAR_24 = FUNC_3();
 FUNC_1(VAR_24, &VAR_25, &VAR_26);
 VAR_27 = VAR_26 / 1000;
 {
  FUNC_11();
  FUNC_6(VAR_18, VAR_19, VAR_24);
  FUNC_12();

  char VAR_33[128];

  if (VAR_19 == VAR_9) {
   FUNC_13(VAR_33, "killing_highwater_process", 128);
  } else {
   if (VAR_23 == VAR_1) {
    FUNC_13(VAR_33, "killing_idle_process", 128);
   } else {
    FUNC_13(VAR_33, "killing_top_process", 128);
   }
  }

  FUNC_8(VAR_2, "%lu.%03d memorystatus: %s pid %d [%s] (%s %d) - memorystatus_available_pages: %llu\n",
         (unsigned long)VAR_25, VAR_27, VAR_33,
         VAR_22, (*VAR_18->p_name ? VAR_18->p_name : "unknown"),
         VAR_16[VAR_19], VAR_23, (uint64_t)VAR_14);






  FUNC_9(VAR_20);

  VAR_28 = FUNC_5(VAR_18, VAR_19, VAR_20);

  *VAR_21 = VAR_28;
 }

 return VAR_28;
}
