
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netplay_connection {int mode; } ;
typedef int netplay_t ;


 int VAR_0 ;






 int FUNC_0 (int *,struct netplay_connection*,int*) ;
 int FUNC_1 (int *,struct netplay_connection*,int*) ;
 int FUNC_2 (int *,struct netplay_connection*,int*) ;
 int FUNC_3 (int *,struct netplay_connection*,int*) ;
 int FUNC_4 (int *,struct netplay_connection*,int*) ;
 int FUNC_5 (int *,struct netplay_connection*) ;

bool FUNC_6(netplay_t *VAR_1,
   struct netplay_connection *VAR_2, bool *VAR_3)
{
   bool VAR_4 = 0;

   switch (VAR_2->mode)
   {
      case 133:
         VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
         break;
      case 130:
         VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
         break;
      case 129:
         VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
         break;
      case 131:
         VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
         break;
      case 128:
         VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
         break;
      case 132:
      default:
         return 0;
   }

   if (VAR_2->mode >= VAR_0 &&
         !FUNC_5(VAR_1, VAR_2))
      return 0;

   return VAR_4;
}
