
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* list; } ;
typedef TYPE_2__ file_list_t ;
struct TYPE_4__ {char* alt; char* path; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(
      file_list_t *VAR_0, unsigned VAR_1)
{
   int VAR_2 = 0;
   const char *VAR_3 = ((void*)0);

   if (VAR_0)
      if ((VAR_3 = VAR_0->list[VAR_1].alt
         ? VAR_0->list[VAR_1].alt
         : VAR_0->list[VAR_1].path))
         VAR_2 = FUNC_0((int)*VAR_3);



   if (VAR_2 < 'a')
      return ('a' - 1);
   else if (VAR_2 > 'z')
      return ('z' + 1);
   return VAR_2;
}
