
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ slock; } ;
typedef TYPE_1__ raw_spinlock_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(raw_spinlock_t *VAR_1)
{
 while (VAR_1->slock) {
  FUNC_0();
  if (VAR_0)
   FUNC_2(VAR_1);
 }
 FUNC_1();
}
