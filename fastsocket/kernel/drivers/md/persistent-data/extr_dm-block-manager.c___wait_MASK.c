
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct waiter {int task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct waiter *VAR_3)
{
 for (;;) {
  FUNC_1(VAR_2, VAR_1);

  if (!VAR_3->task)
   break;

  FUNC_0();
 }

 FUNC_1(VAR_2, VAR_0);
}
