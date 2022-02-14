
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ enum_idx; } ;
typedef TYPE_1__ menu_file_list_cbs_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,char const*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,unsigned int) ;

int FUNC_3(menu_file_list_cbs_t *VAR_2,
      const char *VAR_3, const char *VAR_4, unsigned VAR_5, size_t VAR_6,
      uint32_t VAR_7)
{
   if (!VAR_2)
      return -1;

   FUNC_0(VAR_2, VAR_1);

   if (VAR_2->enum_idx != VAR_0 &&
       FUNC_1(VAR_2, VAR_4, VAR_7) == 0)
      return 0;

   if (FUNC_2(
            VAR_2, VAR_5) == 0)
      return 0;

   return -1;
}
