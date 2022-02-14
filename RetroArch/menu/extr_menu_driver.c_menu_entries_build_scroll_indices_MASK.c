
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t size; TYPE_1__* list; } ;
typedef TYPE_2__ file_list_t ;
struct TYPE_5__ {unsigned int type; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_2__*,unsigned int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(file_list_t *VAR_2)
{
   int VAR_3;
   bool VAR_4 = 0;
   unsigned VAR_5 = 0;
   size_t VAR_6 = 0;

   VAR_1 = 0;

   FUNC_1(0);

   VAR_3 = FUNC_0(VAR_2, 0);
   VAR_5 = VAR_2->list[0].type;

   if (VAR_5 == VAR_0)
      VAR_4 = 1;

   for (VAR_6 = 1; VAR_6 < VAR_2->size; VAR_6++)
   {
      int VAR_7 = FUNC_0(VAR_2, (unsigned)VAR_6);
      bool VAR_8 = 0;
      unsigned VAR_9 = (unsigned)VAR_6;

      VAR_5 = VAR_2->list[VAR_9].type;

      if (VAR_5 == VAR_0)
         VAR_8 = 1;

      if ((VAR_4 && !VAR_8) || (VAR_7 > VAR_3))
         FUNC_1(VAR_6);

      VAR_3 = VAR_7;
      VAR_4 = VAR_8;
   }

   FUNC_1(VAR_2->size - 1);
}
