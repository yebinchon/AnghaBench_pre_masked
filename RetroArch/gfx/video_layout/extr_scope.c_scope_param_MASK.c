
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* param; int level; } ;
typedef TYPE_1__ scope_t ;
struct TYPE_8__ {char* value; struct TYPE_8__* prev; int level; int * generator; void* name; } ;
typedef TYPE_2__ param_t ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,char*,int ) ;
 char const* FUNC_4 (TYPE_1__*,char const*) ;

void FUNC_5(scope_t *VAR_0, const char *VAR_1, const char *VAR_2)
{
   param_t *VAR_3;
   char *VAR_4 = FUNC_1(FUNC_4(VAR_0, VAR_1));
   char *VAR_5 = FUNC_1(FUNC_4(VAR_0, VAR_2));

   if ((VAR_3 = FUNC_3(VAR_0, VAR_4, VAR_0->level)))
   {
      FUNC_0(VAR_3->value);
      VAR_3->value = VAR_5;
   }
   else
   {
      VAR_3 = (param_t*)FUNC_2(sizeof(param_t));
      VAR_3->name = FUNC_1(VAR_1);
      VAR_3->value = VAR_5;
      VAR_3->generator = ((void*)0);
      VAR_3->level = VAR_0->level;
      VAR_3->prev = VAR_0->param;
      VAR_0->param = VAR_3;
   }

   FUNC_0(VAR_4);
}
