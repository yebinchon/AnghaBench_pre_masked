
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ setting; } ;
typedef TYPE_1__ menu_file_list_cbs_t ;


 int FUNC_0 (TYPE_1__*,int *) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

int FUNC_3(menu_file_list_cbs_t *VAR_2,
      const char *VAR_3, const char *VAR_4, unsigned VAR_5, size_t VAR_6)
{
   if (!VAR_2)
      return -1;

   FUNC_0(VAR_2, ((void*)0));

   if (VAR_2->setting)
   {
      if (FUNC_2(VAR_2->setting) == VAR_0)
      {
         FUNC_0(VAR_2, VAR_1);
         return 0;
      }
   }

   FUNC_1(VAR_2, VAR_5);

   return -1;
}
