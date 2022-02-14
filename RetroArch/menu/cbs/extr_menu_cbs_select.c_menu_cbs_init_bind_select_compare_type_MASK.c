
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_1(
      menu_file_list_cbs_t *VAR_16, unsigned VAR_17)
{
   if (VAR_17 >= VAR_0
         && VAR_17 <= VAR_1)
   {
      FUNC_0(VAR_16, VAR_10);
   }
   else if (VAR_17 >= VAR_2
         && VAR_17 <= VAR_3)
   {
      FUNC_0(VAR_16, VAR_11);
   }
   else if (VAR_17 >= VAR_4
         && VAR_17 <= VAR_5)
   {
      FUNC_0(VAR_16, VAR_12);
   }
   else
   {

      switch (VAR_17)
      {
         case 128:
            FUNC_0(VAR_16, VAR_13);
            break;
         default:
            return -1;
      }
   }

   return 0;
}
