
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int menu_file_list_cbs_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int *,char const*,int ,char const*) ;
 scalar_t__ FUNC_2 (int *,unsigned int,char const*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*,int ) ;

int FUNC_5(menu_file_list_cbs_t *VAR_14,
      const char *VAR_15, const char *VAR_16, unsigned VAR_17, size_t VAR_18,
      const char *VAR_19,
      uint32_t VAR_20)
{
   if (!VAR_14)
      return -1;

   FUNC_0(VAR_14, VAR_13);

   if (VAR_17 == VAR_11)
   {
      if ( FUNC_4(VAR_19, FUNC_3(VAR_2)) ||
            FUNC_4(VAR_19, FUNC_3(VAR_1)) ||
            FUNC_4(VAR_19, FUNC_3(VAR_8)) ||
            FUNC_4(VAR_19, FUNC_3(VAR_0)) ||
            FUNC_4(VAR_19, FUNC_3(VAR_7)) ||
            FUNC_4(VAR_19, FUNC_3(VAR_5)) ||
            FUNC_4(VAR_19, FUNC_3(VAR_6)) ||
            FUNC_4(VAR_19, FUNC_3(VAR_4)) ||
            FUNC_4(VAR_19, FUNC_3(VAR_10)) ||
            FUNC_4(VAR_19, FUNC_3(VAR_3)) ||
            FUNC_4(VAR_19, FUNC_3(VAR_9))
         )
      {
            FUNC_0(VAR_14, VAR_12);
            return 0;
      }
   }

   if (FUNC_1(VAR_14, VAR_16, VAR_20, VAR_19) == 0)
      return 0;

   if (FUNC_2(VAR_14, VAR_17, VAR_19) == 0)
      return 0;

   return -1;
}
