
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* proc_t ;
typedef int pid_t ;
typedef scalar_t__ os_reason_t ;
typedef int boolean_t ;
struct TYPE_13__ {scalar_t__ entry_count; } ;
struct TYPE_12__ {int p_memstat_effectivepriority; int p_memstat_state; scalar_t__ p_memstat_memlimit; int task; int p_pid; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ,int ,int ,int ,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long long FUNC_2 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_1__* FUNC_3 (unsigned int*,int) ;
 TYPE_1__* FUNC_4 (unsigned int*,TYPE_1__*,int) ;
 int FUNC_5 (int *,int ) ;
 int VAR_17 ;
 TYPE_7__* VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_6 (TYPE_1__*,int ,scalar_t__,int*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 TYPE_1__* FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_15(uint32_t *VAR_20, boolean_t *VAR_21)
{
 pid_t VAR_22 = 0;
 proc_t VAR_23 = VAR_8, VAR_24 = VAR_8;
 boolean_t VAR_25 = VAR_4, VAR_26 = VAR_4, VAR_27 = VAR_4;
 unsigned int VAR_28 = 0;
 uint32_t VAR_29;
 os_reason_t VAR_30 = VAR_7;
 FUNC_1(FUNC_0(VAR_1, VAR_0) | VAR_3,
  VAR_16, 0, 0, 0, 0);

 VAR_30 = FUNC_7(VAR_6, VAR_5);
 if (VAR_30 == VAR_7) {
  FUNC_9("memorystatus_kill_hiwat_proc: failed to allocate exit reason\n");
 }

 FUNC_10();

 VAR_24 = FUNC_3(&VAR_28, VAR_13);
 while (VAR_24) {
  uint64_t VAR_31 = 0;
  uint64_t VAR_32 = 0;
  boolean_t VAR_33 = 0;

  VAR_23 = VAR_24;
  VAR_24 = FUNC_4(&VAR_28, VAR_23, VAR_13);

  VAR_22 = VAR_23->p_pid;
  VAR_29 = VAR_23->p_memstat_effectivepriority;

  if (VAR_23->p_memstat_state & (VAR_10 | VAR_12)) {
   continue;
  }


  if (VAR_23->p_memstat_memlimit <= 0) {
   continue;
  }

  VAR_31 = FUNC_2(VAR_23->task);
  VAR_32 = (((uint64_t)VAR_23->p_memstat_memlimit) * 1024ULL * 1024ULL);
  VAR_33 = (VAR_31 <= VAR_32);
  if (VAR_33) {
   continue;
  } else {

   if (VAR_19 == 0) {
    FUNC_5(((void*)0),0);
    VAR_25 = VAR_13;
   }

   if (FUNC_12(VAR_23) == VAR_23) {






    VAR_23->p_memstat_state |= VAR_12;

    FUNC_11();
   } else {






    VAR_28 = 0;
    VAR_24 = FUNC_3(&VAR_28, VAR_13);
    continue;
   }

   VAR_27 = FUNC_6(VAR_23, VAR_14, VAR_30, &VAR_26);


   if (VAR_27) {
    if (VAR_26 == VAR_4) {

     *VAR_21 = VAR_13;

     FUNC_10();
     VAR_23->p_memstat_state &= ~VAR_12;
     FUNC_11();
    }
    FUNC_13(VAR_23);
    goto exit;
   }




   FUNC_10();
   FUNC_14(VAR_23);
   VAR_23->p_memstat_state &= ~VAR_12;
   VAR_23->p_memstat_state |= VAR_10;
   *VAR_20 += 1;

   VAR_28 = 0;
   VAR_24 = FUNC_3(&VAR_28, VAR_13);
  }
 }

 FUNC_11();

exit:
 FUNC_8(VAR_30);


 if (VAR_25 && !VAR_26) {
  FUNC_10();
  VAR_18->entry_count = VAR_19 = 0;
  FUNC_11();
 }

 FUNC_1(FUNC_0(VAR_1, VAR_0) | VAR_2,
         VAR_16, VAR_26 ? VAR_22 : 0, 0, 0, 0);

 return VAR_26;
}
