
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* timer_call_t ;
typedef int boolean_t ;
struct TYPE_7__ {int param0; int func; scalar_t__ entry_time; scalar_t__ deadline; } ;
struct TYPE_6__ {int ttd; scalar_t__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,scalar_t__,int ,int,unsigned int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,int ,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

boolean_t
FUNC_8(
 timer_call_t VAR_9)
{
 FUNC_4(FUNC_6() == VAR_3);

 FUNC_2(VAR_4,
         VAR_2 | VAR_1,
  FUNC_3(VAR_9), FUNC_1(VAR_9)->deadline,
  0, VAR_9->flags, 0);

 FUNC_1(VAR_9)->deadline = 0;
 FUNC_7(0);

 FUNC_2(VAR_4,
         VAR_2 | VAR_0,
  FUNC_3(VAR_9), 0,
  FUNC_1(VAR_9)->deadline - FUNC_5(),
  FUNC_1(VAR_9)->deadline - FUNC_1(VAR_9)->entry_time, 0);







 return 1;
}
