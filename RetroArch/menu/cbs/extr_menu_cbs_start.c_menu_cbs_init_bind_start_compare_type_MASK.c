
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int menu_file_list_cbs_t ;


 int FUNC_0 (int *,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_1(menu_file_list_cbs_t *VAR_19,
      unsigned VAR_20)
{
   if (VAR_20 >= VAR_5 &&
         VAR_20 <= VAR_6)
   {
      FUNC_0(VAR_19, VAR_15);
   }
   else if (VAR_20 >= VAR_3
         && VAR_20 <= VAR_4)
   {
      FUNC_0(VAR_19, VAR_14);
   }
   else if (VAR_20 >= VAR_7 &&
         VAR_20 <= VAR_8)
   {
      FUNC_0(VAR_19, VAR_16);
   }
   else if ((VAR_20 >= VAR_2) &&
            (VAR_20 < VAR_1))
   {
      FUNC_0(VAR_19, VAR_13);
   }
   else if (VAR_20 == VAR_0)
   {
      FUNC_0(VAR_19, VAR_18);
   }
   else
      return -1;

   return 0;
}
