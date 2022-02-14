
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nouveau_timer {scalar_t__ (* read ) (struct nouveau_timer*) ;} ;


 struct nouveau_timer* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (struct nouveau_timer*) ;
 scalar_t__ FUNC_2 (struct nouveau_timer*) ;

bool
FUNC_3(void *VAR_0, u64 VAR_1, bool (*VAR_2)(void *), void *VAR_3)
{
 struct nouveau_timer *VAR_4 = FUNC_0(VAR_0);
 u64 VAR_5;

 VAR_5 = VAR_4->read(VAR_4);
 do {
  if (VAR_2(VAR_3) == 1)
   return 1;
 } while (VAR_4->read(VAR_4) - VAR_5 < VAR_1);

 return 0;
}
