
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int menu_file_list_cbs_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,char const*,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ,unsigned int) ;

int FUNC_3(menu_file_list_cbs_t *VAR_1,
      const char *VAR_2, const char *VAR_3, unsigned VAR_4, size_t VAR_5,
      uint32_t VAR_6, uint32_t VAR_7)
{
   if (!VAR_1)
      return -1;

   FUNC_0(VAR_1, VAR_0);

   if (FUNC_1(VAR_1, VAR_3, VAR_6) == 0)
      return 0;

   if (FUNC_2(VAR_1, VAR_6, VAR_7, VAR_4) == 0)
      return 0;

   return -1;
}
