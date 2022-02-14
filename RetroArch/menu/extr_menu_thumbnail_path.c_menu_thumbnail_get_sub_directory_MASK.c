
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
bool FUNC_0(unsigned VAR_0, const char **VAR_1)
{
   if (!VAR_1)
      return 0;

   switch (VAR_0)
   {
      case 1:
         *VAR_1 = "Named_Snaps";
         return 1;
      case 2:
         *VAR_1 = "Named_Titles";
         return 1;
      case 3:
         *VAR_1 = "Named_Boxarts";
         return 1;
      case 0:
      default:
         break;
   }

   return 0;
}
