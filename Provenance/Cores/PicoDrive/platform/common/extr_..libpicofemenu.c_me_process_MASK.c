
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int beh; scalar_t__ var; scalar_t__ data; scalar_t__ min; scalar_t__ max; } ;
typedef TYPE_1__ menu_entry ;







 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(menu_entry *VAR_0, int VAR_1, int VAR_2)
{
 const char **VAR_3;
 int VAR_4;
 switch (VAR_0->beh)
 {
  case 129:
  case 132:
   FUNC_0(VAR_0);
   return 1;
  case 128:
  case 131:
   VAR_4 = VAR_2 ? 10 : 1;
   *(int *)VAR_0->var += VAR_1 ? VAR_4 : -VAR_4;
   if (*(int *)VAR_0->var < (int)VAR_0->min)
    *(int *)VAR_0->var = (int)VAR_0->max;
   if (*(int *)VAR_0->var > (int)VAR_0->max)
    *(int *)VAR_0->var = (int)VAR_0->min;
   return 1;
  case 130:
   VAR_3 = (const char **)VAR_0->data;
   for (VAR_4 = 0; VAR_3[VAR_4] != ((void*)0); VAR_4++)
    ;
   *(signed char *)VAR_0->var += VAR_1 ? 1 : -1;
   if (*(signed char *)VAR_0->var < 0)
    *(signed char *)VAR_0->var = 0;
   if (*(signed char *)VAR_0->var >= VAR_4)
    *(signed char *)VAR_0->var = VAR_4 - 1;
   return 1;
  default:
   return 0;
 }
}
