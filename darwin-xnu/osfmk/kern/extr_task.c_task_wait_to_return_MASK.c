
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct TYPE_6__ {int t_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;

void __attribute__((noreturn))
FUNC_9(void)
{
 task_t VAR_4;

 VAR_4 = FUNC_2();
 FUNC_5(VAR_4);

 if (VAR_4->t_flags & VAR_0) {
  do {
   VAR_4->t_flags |= VAR_1;
   FUNC_0(FUNC_4(VAR_4), VAR_3);
   FUNC_6(VAR_4);

   FUNC_7(VAR_2);

   FUNC_5(VAR_4);
  } while (VAR_4->t_flags & VAR_0);
 }

 FUNC_6(VAR_4);
 FUNC_8();
}
