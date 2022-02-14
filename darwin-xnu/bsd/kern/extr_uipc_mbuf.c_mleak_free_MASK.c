
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mtrace {scalar_t__ allocs; scalar_t__ depth; } ;
struct mallocation {size_t trace_index; TYPE_1__* element; } ;
struct TYPE_4__ {struct TYPE_4__* obj_next; } ;
typedef TYPE_1__ mcache_obj_t ;
struct TYPE_5__ {int outstanding_allocs; } ;


 size_t FUNC_0 (uintptr_t,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 struct mallocation* VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 size_t VAR_4 ;
 struct mtrace* VAR_5 ;

__attribute__((used)) static void
FUNC_3(mcache_obj_t *VAR_6)
{
 while (VAR_6 != ((void*)0)) {
  struct mallocation *VAR_7 = &VAR_1
      [FUNC_0((uintptr_t)VAR_6, VAR_0)];

  if (VAR_7->element == VAR_6 &&
      VAR_7->trace_index < VAR_4) {
   FUNC_1(VAR_2);
   if (VAR_7->element == VAR_6 &&
       VAR_7->trace_index < VAR_4) {
    struct mtrace *VAR_8;
    VAR_8 = &VAR_5[VAR_7->trace_index];

    if (VAR_8->allocs > 0)
     VAR_8->allocs--;
    if (VAR_8->allocs == 0)
     VAR_8->depth = 0;

    VAR_7->element = ((void*)0);
    VAR_3.outstanding_allocs--;
   }
   FUNC_2(VAR_2);
  }
  VAR_6 = VAR_6->obj_next;
 }
}
