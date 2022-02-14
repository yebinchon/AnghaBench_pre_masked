
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum compare_op { ____Placeholder_compare_op } compare_op ;
__attribute__((used)) static bool FUNC_0(int VAR_0, int VAR_1, int VAR_2, int VAR_3, enum compare_op VAR_4)
{
   switch (VAR_4)
   {
      case 133:
         if (VAR_0 == VAR_2 && VAR_1 == VAR_3)
            return 1;
         break;
      case 128:
         if (!(VAR_0 == VAR_2 && VAR_1 == VAR_3))
            return 1;
         break;
      case 130:
         if (VAR_0 < VAR_2 || (VAR_0 == VAR_2 && VAR_1 < VAR_3))
            return 1;
         break;
      case 129:
         if (VAR_0 < VAR_2 || (VAR_0 == VAR_2 && VAR_1 <= VAR_3))
            return 1;
         break;
      case 132:
         if (VAR_0 > VAR_2 || (VAR_0 == VAR_2 && VAR_1 > VAR_3))
            return 1;
         break;
      case 131:
         if (VAR_0 > VAR_2 || (VAR_0 == VAR_2 && VAR_1 >= VAR_3))
            return 1;
         break;
      default:
         break;
   }

   return 0;
}
