
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile {int ts_refcount; } ;


 struct turnstile* VAR_0 ;
 int FUNC_0 (int *) ;

void
FUNC_1(struct turnstile *VAR_1)
{
 if (VAR_1 == VAR_0) {
  return;
 }
 FUNC_0(&VAR_1->ts_refcount);
}
