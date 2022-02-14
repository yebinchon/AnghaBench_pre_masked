
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ raw_rwlock_t ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (int*,unsigned int,unsigned int) ;
 int FUNC_2 () ;
 int VAR_0 ;

void FUNC_3(raw_rwlock_t *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3 = VAR_0;

 while (1) {
  if (VAR_3-- <= 0) {
   FUNC_2();
   VAR_3 = VAR_0;
  }
  if (!FUNC_0(VAR_1))
   continue;
  VAR_2 = VAR_1->lock & 0x7fffffffU;
  if (FUNC_1(&VAR_1->lock, VAR_2, VAR_2 + 1) == VAR_2)
   return;
 }
}
