
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct secasvar {int flags; int * sched; } ;
struct esp_algorithm {int ivlenval; } ;
typedef TYPE_1__* esp_chachapoly_ctx_t ;
struct TYPE_2__ {scalar_t__ ccp_implicit_iv; } ;


 int FUNC_0 (struct esp_algorithm const*) ;
 int VAR_0 ;

int
FUNC_1(const struct esp_algorithm *VAR_1,
      struct secasvar *VAR_2)
{
 FUNC_0(VAR_1);

 if (VAR_2 != ((void*)0) &&
  ((VAR_2->sched != ((void*)0) && ((esp_chachapoly_ctx_t)VAR_2->sched)->ccp_implicit_iv) ||
   ((VAR_2->flags & VAR_0) != 0))) {
  return 0;
 } else {
  return VAR_1->ivlenval;
 }
}
