
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int ast_t ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int ,int *,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;

void
FUNC_9(void)
{
 FUNC_0(FUNC_6() == VAR_3);

 thread_t VAR_7 = FUNC_5();


 if ((VAR_7->state & VAR_5)) {
  FUNC_2(VAR_1);
  return;
 }





 if (FUNC_3(VAR_2) != VAR_2)
  return;





 if (FUNC_8(VAR_7) == VAR_3) {

  FUNC_1(VAR_2);
  return;
 }



 ast_t VAR_8 = FUNC_1(VAR_1);

 FUNC_0(VAR_8 & VAR_0);

 FUNC_4(VAR_6++);

 FUNC_7(VAR_4, ((void*)0), VAR_8);

 FUNC_0(FUNC_6() == VAR_3);
}
