
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef TYPE_1__* thread_t ;
typedef int spl_t ;
typedef int ast_t ;
struct TYPE_17__ {int state; int sched_flags; scalar_t__ promotions; scalar_t__ was_promoted_on_wakeup; scalar_t__ rwlock_count; int * waiting_for_mutex; int kevent_ast_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_24 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 () ;
 TYPE_1__* FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,scalar_t__) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 scalar_t__ FUNC_18 () ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 () ;
 int FUNC_22 (int ) ;
 int FUNC_23 (TYPE_1__*,int) ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (TYPE_1__*,int) ;
 int FUNC_26 (int ,int *,int) ;
 int FUNC_27 (TYPE_1__*) ;
 int VAR_25 ;
 int FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (TYPE_1__*) ;

void
FUNC_30(void)
{
 FUNC_0(FUNC_18() == VAR_16);

 thread_t VAR_26 = FUNC_11();


 FUNC_0(FUNC_29(VAR_26));
 FUNC_0((VAR_26->state & VAR_17) == 0);
 if (FUNC_2(VAR_15) == VAR_15) {
  ast_t VAR_27 = FUNC_1(VAR_10);

  FUNC_0(VAR_27 & VAR_9);



  FUNC_26(VAR_25, ((void*)0), VAR_27);

 }







 FUNC_3(VAR_26);
 ast_t VAR_28 = FUNC_1(VAR_8 | VAR_5 | VAR_2);

 FUNC_19(VAR_23);
 if (VAR_28 & VAR_0) {
  FUNC_25(VAR_26, VAR_0);
  FUNC_24(VAR_26);
 }

 if (VAR_28 & VAR_3) {
  FUNC_25(VAR_26, VAR_3);
  FUNC_13(VAR_26);
 }

 if (VAR_28 & VAR_6) {
  FUNC_25(VAR_26, VAR_6);
  FUNC_16(VAR_26);
 }

 if (VAR_28 & VAR_5) {
  FUNC_25(VAR_26, VAR_5);
  FUNC_15(VAR_26);
 }

 if (VAR_28 & VAR_4) {
  FUNC_25(VAR_26, VAR_4);
  uint16_t VAR_29 = FUNC_4(&VAR_26->kevent_ast_bits, 0);
  if (VAR_29) FUNC_14(VAR_26, VAR_29);
 }
 spl_t VAR_30 = FUNC_21();
 FUNC_0(FUNC_29(VAR_26));
 ast_t VAR_31 = FUNC_1(VAR_10);

 if (VAR_31 & VAR_9) {


  FUNC_27(VAR_26);
  VAR_31 = FUNC_9(FUNC_10(), (VAR_31 & VAR_11));
  FUNC_28(VAR_26);
  if (VAR_31 & VAR_9) {
   FUNC_6(VAR_24++);

   FUNC_26(VAR_25, ((void*)0), VAR_31);

  }
 }

 if (FUNC_1(VAR_14) == VAR_14) {
  FUNC_8();
 }

 FUNC_7();

 FUNC_22(VAR_30);





 FUNC_0((VAR_26->sched_flags & VAR_22) == 0);
 FUNC_0((VAR_26->sched_flags & VAR_21) == 0);
 FUNC_0((VAR_26->sched_flags & VAR_19) == 0);
 FUNC_0((VAR_26->sched_flags & VAR_20) == 0);
 FUNC_0((VAR_26->sched_flags & VAR_18) == 0);

 FUNC_0(VAR_26->promotions == 0);
 FUNC_0(VAR_26->was_promoted_on_wakeup == 0);
 FUNC_0(VAR_26->waiting_for_mutex == ((void*)0));
 FUNC_0(VAR_26->rwlock_count == 0);
}
