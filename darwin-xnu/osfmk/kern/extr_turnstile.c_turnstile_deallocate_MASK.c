
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile {int ts_refcount; } ;


 struct turnstile* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct turnstile*) ;

void
FUNC_3(struct turnstile *VAR_1)
{
 if (VAR_1 == VAR_0) {
  return;
 }

 if (FUNC_0(FUNC_1(&VAR_1->ts_refcount) == 0)) {
  FUNC_2(VAR_1);
 }
}
