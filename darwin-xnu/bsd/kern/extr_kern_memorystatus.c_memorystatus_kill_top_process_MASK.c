
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* proc_t ;
typedef int pid_t ;
typedef int os_reason_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_14__ {scalar_t__ entry_count; } ;
struct TYPE_13__ {scalar_t__ p_memstat_effectivepriority; int p_memstat_state; int p_pid; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int ,int,int ,int ,int ) ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 TYPE_1__* FUNC_3 (unsigned int*,scalar_t__) ;
 TYPE_1__* FUNC_4 (unsigned int*,TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_20 ;
 int FUNC_5 (int *,int ) ;
 int VAR_21 ;
 TYPE_7__* VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_6 (TYPE_1__*,scalar_t__,int ,scalar_t__*) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 TYPE_1__* FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_15(boolean_t VAR_24, boolean_t VAR_25, uint32_t VAR_26, os_reason_t VAR_27,
         int32_t *VAR_28, uint32_t *VAR_29)
{
 pid_t VAR_30;
 proc_t VAR_31 = VAR_9, VAR_32 = VAR_9;
 boolean_t VAR_33 = VAR_4, VAR_34 = VAR_4, VAR_35 = VAR_4, VAR_36 = VAR_4;
 unsigned int VAR_37 = 0;
 uint32_t VAR_38;
 int32_t VAR_39 = VAR_6;


#pragma unused(any)


 FUNC_1(FUNC_0(VAR_1, VAR_0) | VAR_3,
  VAR_19, 0, 0, 0, 0);
 if (VAR_25 == VAR_14) {
  (void)FUNC_7(VAR_6, VAR_8);
 }
 if (VAR_26 == VAR_16) {
  VAR_39 = VAR_7;
 } else {
  VAR_39 = VAR_18;
 }





 VAR_34 = VAR_14;



 FUNC_10();

 VAR_32 = FUNC_3(&VAR_37, VAR_14);
 while (VAR_32 && (VAR_32->p_memstat_effectivepriority <= VAR_39)) {




  VAR_31 = VAR_32;
  VAR_32 = FUNC_4(&VAR_37, VAR_31, VAR_14);





  VAR_30 = VAR_31->p_pid;
  VAR_38 = VAR_31->p_memstat_effectivepriority;

  if (VAR_31->p_memstat_state & (VAR_11 | VAR_13)) {
   continue;
  }
  if (VAR_26 == VAR_15)
  {
   if (VAR_31 == FUNC_2()) {

    continue;
   }
  }
  {
   if (FUNC_12(VAR_31) == VAR_31) {






    VAR_31->p_memstat_state |= VAR_13;

   } else {






    VAR_37 = 0;
    VAR_32 = FUNC_3(&VAR_37, VAR_14);
    continue;
   }
                 if ((VAR_23 == 0) &&
       (VAR_34 || VAR_20 || ((!VAR_28) || (VAR_28 && (VAR_38 != VAR_6))))) {
    FUNC_5(((void*)0),0);
                  VAR_33 = VAR_14;
                 }

   FUNC_11();

   VAR_36 = FUNC_6(VAR_31, VAR_26, VAR_27, &VAR_35);

   if (VAR_36) {
    if (VAR_35) {
     if (VAR_28) {
      *VAR_28 = VAR_38;
     }
    } else {

     FUNC_10();
     VAR_31->p_memstat_state &= ~VAR_13;
     FUNC_11();
    }
    FUNC_13(VAR_31);
    goto exit;
   }





   FUNC_10();
   FUNC_14(VAR_31);
   VAR_31->p_memstat_state &= ~VAR_13;
   VAR_31->p_memstat_state |= VAR_11;
   *VAR_29 += 1;

   VAR_37 = 0;
   VAR_32 = FUNC_3(&VAR_37, VAR_14);
  }
 }

 FUNC_11();

exit:
 FUNC_8(VAR_27);


 if (VAR_33 && !VAR_35) {
  FUNC_10();
  VAR_22->entry_count = VAR_23 = 0;
  FUNC_11();
 }

 FUNC_1(FUNC_0(VAR_1, VAR_0) | VAR_2,
         VAR_19, VAR_35 ? VAR_30 : 0, 0, 0, 0);

 return VAR_35;
}
