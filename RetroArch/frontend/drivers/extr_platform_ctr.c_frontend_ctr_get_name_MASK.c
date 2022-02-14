
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int*) ;
 int FUNC_1 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_2(char* VAR_0, size_t VAR_1)
{
   u8 VAR_2 = 0xFF;


   FUNC_0(&VAR_2);

   switch (VAR_2)
   {
      case 0:
         FUNC_1(VAR_0, "Old 3DS", VAR_1);
         break;
      case 1:
         FUNC_1(VAR_0, "Old 3DS XL", VAR_1);
         break;
      case 2:
         FUNC_1(VAR_0, "New 3DS", VAR_1);
         break;
      case 3:
         FUNC_1(VAR_0, "Old 2DS", VAR_1);
         break;
      case 4:
         FUNC_1(VAR_0, "New 3DS XL", VAR_1);
         break;
      case 5:
         FUNC_1(VAR_0, "New 2DS XL", VAR_1);
         break;

      default:
         FUNC_1(VAR_0, "Unknown Device", VAR_1);
         break;
   }
}
