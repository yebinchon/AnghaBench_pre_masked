
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; } ;
typedef TYPE_1__ file_list_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int) ;
 size_t VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 size_t FUNC_3 () ;

__attribute__((used)) static bool FUNC_4(file_list_t *VAR_2)
{
   size_t VAR_3;
   size_t VAR_4 = VAR_1;

   if (VAR_2->size)
      FUNC_2(VAR_2);

   VAR_3 = FUNC_3();

   if ((VAR_4 >= VAR_3) && VAR_3)
   {
      size_t VAR_5 = VAR_3 - 1;
      VAR_1 = VAR_5;
      FUNC_1(1);
   }
   else if (!VAR_3)
   {
      bool VAR_6 = 1;
      FUNC_0(VAR_0, &VAR_6);
   }

   return 1;
}
