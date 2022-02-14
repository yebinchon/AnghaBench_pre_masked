
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int wait_result_t ;
typedef TYPE_1__* thread_t ;
typedef int kern_return_t ;
struct TYPE_6__ {scalar_t__ at_safe_point; scalar_t__ wait_event; int state; int * thread_wakeup_bt; int * waitq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ) ;

kern_return_t
FUNC_5(
          thread_t VAR_8,
          wait_result_t VAR_9)
{
 FUNC_1(VAR_8);

 FUNC_0(VAR_8->at_safe_point == VAR_0);
 FUNC_0(VAR_8->wait_event == VAR_2);
 FUNC_0(VAR_8->waitq == ((void*)0));

 FUNC_0(!(VAR_8->state & (VAR_5|VAR_6)));
 FUNC_0(VAR_8->state & VAR_7);


 if (FUNC_4(VAR_8, VAR_9)) {




  FUNC_3(VAR_8, VAR_3 | VAR_4);
 }

 return (VAR_1);
}
