
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int menu_file_list_cbs_t ;


 int FUNC_0 (int *,int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(menu_file_list_cbs_t *VAR_3,
      unsigned VAR_4)
{
   switch (VAR_4)
   {
      case 131:
         FUNC_0(VAR_3, VAR_2);
         break;
      case 130:
      case 129:
         FUNC_0(VAR_3, VAR_1);
         break;
      case 128:
         FUNC_0(VAR_3, VAR_0);
         break;
      default:
         return -1;
   }

   return 0;
}
