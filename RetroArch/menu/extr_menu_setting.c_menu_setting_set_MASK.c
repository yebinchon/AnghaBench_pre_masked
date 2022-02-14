
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int setting; } ;
typedef TYPE_1__ menu_file_list_cbs_t ;
typedef int file_list_t ;


 scalar_t__ FUNC_0 (int *,size_t) ;
 int FUNC_1 (int ,unsigned int,unsigned int,int) ;
 int * FUNC_2 (int ) ;
 size_t FUNC_3 () ;

int FUNC_4(unsigned VAR_0, unsigned VAR_1, bool VAR_2)
{
   int VAR_3 = 0;
   file_list_t *VAR_4 = FUNC_2(0);
   size_t VAR_5 = FUNC_3();
   menu_file_list_cbs_t *VAR_6 = VAR_4 ?
      (menu_file_list_cbs_t*)FUNC_0(VAR_4, VAR_5) : ((void*)0);

   if (!VAR_6)
      return 0;

   VAR_3 = FUNC_1(VAR_6->setting,
         VAR_0, VAR_1, VAR_2);

   if (VAR_3 == -1)
      return 0;
   return VAR_3;
}
