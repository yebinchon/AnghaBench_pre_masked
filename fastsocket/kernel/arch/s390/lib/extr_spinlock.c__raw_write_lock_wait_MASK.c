
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ raw_rwlock_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 () ;
 int VAR_0 ;

void FUNC_3(raw_rwlock_t *VAR_1)
{
 int VAR_2 = VAR_0;

 while (1) {
  if (VAR_2-- <= 0) {
   FUNC_2();
   VAR_2 = VAR_0;
  }
  if (!FUNC_0(VAR_1))
   continue;
  if (FUNC_1(&VAR_1->lock, 0, 0x80000000) == 0)
   return;
 }
}
