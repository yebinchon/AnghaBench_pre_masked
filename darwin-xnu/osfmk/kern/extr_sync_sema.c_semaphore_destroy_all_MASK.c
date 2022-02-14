
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* task_t ;
typedef int spl_t ;
typedef scalar_t__ semaphore_t ;
struct TYPE_6__ {int semaphore_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

void
FUNC_8(
 task_t VAR_1)
{
 uint32_t VAR_2;
 spl_t VAR_3;

 VAR_2 = 0;
 FUNC_6(VAR_1);
 while (!FUNC_0(&VAR_1->semaphore_list)) {
  semaphore_t VAR_4;

  VAR_4 = (semaphore_t) FUNC_1(&VAR_1->semaphore_list);

  if (VAR_2 == 0)
   VAR_3 = FUNC_4();
  FUNC_3(VAR_4);

  FUNC_2(VAR_1, VAR_4);



  if (++VAR_2 == VAR_0) {
   VAR_2 = 0;
   FUNC_5(VAR_3);
  }
 }
 if (VAR_2 != 0)
  FUNC_5(VAR_3);

 FUNC_7(VAR_1);
}
