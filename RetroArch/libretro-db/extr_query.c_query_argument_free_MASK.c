
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int argc; struct argument* argv; } ;
struct TYPE_3__ {TYPE_2__ invocation; int value; } ;
struct argument {scalar_t__ type; TYPE_1__ a; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct argument *VAR_1)
{
   unsigned VAR_2;

   if (VAR_1->type != VAR_0)
   {
      FUNC_1(&VAR_1->a.value);
      return;
   }

   for (VAR_2 = 0; VAR_2 < VAR_1->a.invocation.argc; VAR_2++)
      FUNC_2(&VAR_1->a.invocation.argv[VAR_2]);

   FUNC_0((void*)VAR_1->a.invocation.argv);
}
