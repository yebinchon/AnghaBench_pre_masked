
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
 int FUNC_3 () ;
 int FUNC_4 (unsigned long) ;
 int VAR_0 ;

void FUNC_5(raw_rwlock_t *VAR_1, unsigned long VAR_2)
{
 unsigned int VAR_3;
 int VAR_4 = VAR_0;

 FUNC_4(VAR_2);
 while (1) {
  if (VAR_4-- <= 0) {
   FUNC_2();
   VAR_4 = VAR_0;
  }
  if (!FUNC_0(VAR_1))
   continue;
  VAR_3 = VAR_1->lock & 0x7fffffffU;
  FUNC_3();
  if (FUNC_1(&VAR_1->lock, VAR_3, VAR_3 + 1) == VAR_3)
   return;
 }
}
