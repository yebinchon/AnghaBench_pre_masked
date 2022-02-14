
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ enum_idx; } ;
typedef TYPE_1__ menu_file_list_cbs_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,unsigned int) ;

int FUNC_3(menu_file_list_cbs_t *VAR_6,
      const char *VAR_7, const char *VAR_8, unsigned VAR_9, size_t VAR_10)
{
   if (!VAR_6)
      return -1;

   FUNC_0(VAR_6, VAR_4);
   if ((VAR_9 >= VAR_2) &&
       (VAR_9 < VAR_1))
   {
      FUNC_0(VAR_6, VAR_3);
      return 0;
   }

   if (FUNC_1(VAR_6, VAR_8) == 0)
      return 0;

   if (FUNC_2(VAR_6, VAR_9) == 0)
      return 0;

   return -1;
}
