
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef TYPE_1__* timer_call_t ;
typedef int spl_t ;
struct TYPE_15__ {int soft_deadline; int flags; int earliest_soft_deadline; int ttd; int head; } ;
typedef TYPE_1__ mpqueue_head_t ;
typedef int boolean_t ;
struct TYPE_14__ {int deadline; } ;
struct TYPE_13__ {int deadline; int entry_time; int param0; int func; } ;


 TYPE_12__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int,int ,int,unsigned int) ;
 int VAR_3 ;
 TYPE_10__* FUNC_2 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_3 (int ,int,int,int,int,int,int ) ;
 int VAR_5 ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 TYPE_1__* FUNC_10 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (TYPE_1__*,int,int) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_9 ;

boolean_t
FUNC_14(
 timer_call_t VAR_10)
{
 mpqueue_head_t *VAR_11;
 spl_t VAR_12;

 VAR_12 = FUNC_8();

 FUNC_3(VAR_3,
         VAR_2 | VAR_1,
  FUNC_4(VAR_10),
  FUNC_2(VAR_10)->deadline, VAR_10->soft_deadline, VAR_10->flags, 0);

 VAR_11 = FUNC_10(VAR_10);

 if (VAR_11 != ((void*)0)) {
  FUNC_12(VAR_11);
  if (!FUNC_6(&VAR_11->head)) {
   FUNC_11(VAR_11, FUNC_2(VAR_10)->deadline, FUNC_0(FUNC_7(&VAR_11->head))->deadline);
    timer_call_t VAR_13 = (timer_call_t)FUNC_7(&VAR_11->head);
    VAR_11->earliest_soft_deadline = VAR_13->flags & VAR_4 ? FUNC_2(VAR_13)->deadline : VAR_13->soft_deadline;
  }
  else {
   FUNC_11(VAR_11, FUNC_2(VAR_10)->deadline, VAR_5);
   VAR_11->earliest_soft_deadline = VAR_5;
  }
  FUNC_13(VAR_11);
 }
 FUNC_3(VAR_3,
         VAR_2 | VAR_0,
  FUNC_4(VAR_10),
  FUNC_4(VAR_11),
  FUNC_2(VAR_10)->deadline - FUNC_5(),
  FUNC_2(VAR_10)->deadline - FUNC_2(VAR_10)->entry_time, 0);
 FUNC_9(VAR_12);







 return (VAR_11 != ((void*)0));
}
