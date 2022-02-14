
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* proc_t ;
typedef int pid_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {int p_memstat_state; int p_memstat_effectivepriority; scalar_t__ p_memstat_memlimit; int task; } ;


 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int,int *,scalar_t__,scalar_t__) ;

int
FUNC_9(pid_t VAR_9, uint32_t VAR_10, int VAR_11, boolean_t VAR_12)
{
 int VAR_13 = 0;
 boolean_t VAR_14 = VAR_2;
 proc_t VAR_15 = ((void*)0);

 if (VAR_10 == VAR_5) {
  VAR_14 = VAR_7;
 } else if (VAR_10 == VAR_4) {
  VAR_14 = VAR_2;
 } else {
  return VAR_0;
 }

 VAR_15 = FUNC_4(VAR_9);
 if (VAR_15 != ((void*)0)) {

  if ((VAR_14 && ((VAR_15->p_memstat_state & VAR_6) == VAR_6)) ||
      (!VAR_14 && ((VAR_15->p_memstat_state & VAR_6) == 0))) {




  } else {

   FUNC_5();

   if (VAR_14) {
    VAR_15->p_memstat_state |= VAR_6;
    FUNC_2(VAR_15, VAR_7);

    if (VAR_12) {
     if (VAR_15->p_memstat_effectivepriority < VAR_11) {
      if(VAR_8) {





       boolean_t VAR_16;
       boolean_t VAR_17 = VAR_7;
       FUNC_0(VAR_15, VAR_16);
       FUNC_8(VAR_15->task, (VAR_15->p_memstat_memlimit > 0) ? VAR_15->p_memstat_memlimit : -1, ((void*)0), VAR_17, VAR_16);
      }
      FUNC_3(VAR_15, VAR_11, VAR_2, VAR_2);
     }
    } else {
     if (FUNC_1(VAR_15)) {
      FUNC_3(VAR_15, VAR_3, VAR_2, VAR_7);
     }
    }
   } else {

    VAR_15->p_memstat_state &= ~VAR_6;
    FUNC_2(VAR_15, VAR_7);

    if (VAR_12) {
     if (VAR_15->p_memstat_effectivepriority == VAR_11) {
      FUNC_3(VAR_15, VAR_3, VAR_2, VAR_7);
     }
    } else {
     if (FUNC_1(VAR_15)) {
      FUNC_3(VAR_15, VAR_3, VAR_2, VAR_7);
     }
    }
   }

   FUNC_6();
  }
  FUNC_7(VAR_15);
  VAR_13 = 0;

 } else {
  VAR_13 = VAR_1;
 }

 return VAR_13;
}
