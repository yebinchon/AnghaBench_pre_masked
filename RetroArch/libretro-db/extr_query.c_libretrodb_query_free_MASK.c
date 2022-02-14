
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int argc; struct query* argv; } ;
struct query {scalar_t__ ref_count; TYPE_1__ root; } ;


 int FUNC_0 (struct query*) ;
 int FUNC_1 (struct query*) ;

void FUNC_2(void *VAR_0)
{
   unsigned VAR_1;
   struct query *VAR_2 = (struct query*)VAR_0;

   VAR_2->ref_count--;
   if (VAR_2->ref_count > 0)
      return;

   for (VAR_1 = 0; VAR_1 < VAR_2->root.argc; VAR_1++)
      FUNC_1(&VAR_2->root.argv[VAR_1]);

   FUNC_0(VAR_2->root.argv);
   VAR_2->root.argv = ((void*)0);
   VAR_2->root.argc = 0;
   FUNC_0(VAR_2);
}
