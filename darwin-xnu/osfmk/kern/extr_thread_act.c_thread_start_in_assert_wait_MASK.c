
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ wait_result_t ;
typedef int wait_interrupt_t ;
typedef TYPE_1__* thread_t ;
struct waitq {int dummy; } ;
typedef int spl_t ;
typedef int event_t ;
struct TYPE_6__ {int state; scalar_t__ started; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int) ;
 struct waitq* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (struct waitq*,int ,int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_8 (struct waitq*) ;
 int FUNC_9 (struct waitq*) ;

void
FUNC_10(
 thread_t VAR_7,
 event_t VAR_8,
 wait_interrupt_t VAR_9)
{
 struct waitq *VAR_10 = FUNC_2(VAR_8);
 wait_result_t VAR_11;
 spl_t VAR_12;

 VAR_12 = FUNC_3();
 FUNC_8(VAR_10);


 FUNC_5(VAR_7);
 FUNC_1(!VAR_7->started);
 FUNC_1((VAR_7->state & (VAR_2 | VAR_1)) == (VAR_2 | VAR_1));
 VAR_7->state &= ~(VAR_2 | VAR_1);
 FUNC_6(VAR_7);


 VAR_11 = FUNC_7(VAR_10, FUNC_0(VAR_8),
                                  VAR_9,
                                  VAR_4,
                                  VAR_5,
                                  VAR_3,
                                  VAR_7);
 FUNC_1 (VAR_11 == VAR_0);


 FUNC_5(VAR_7);
 VAR_7->started = VAR_6;
 FUNC_6(VAR_7);

 FUNC_9(VAR_10);
 FUNC_4(VAR_12);
}
