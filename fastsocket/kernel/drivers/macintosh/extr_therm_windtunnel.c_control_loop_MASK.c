
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_7(void *VAR_1)
{
 FUNC_2(&VAR_0.lock);
 FUNC_6();
 FUNC_3(&VAR_0.lock);

 for (;;) {
  FUNC_1(8000);
  if (FUNC_0())
   break;

  FUNC_2(&VAR_0.lock);
  FUNC_4();
  FUNC_3(&VAR_0.lock);
 }

 FUNC_2(&VAR_0.lock);
 FUNC_5();
 FUNC_3(&VAR_0.lock);

 return 0;
}
