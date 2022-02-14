
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_2(u32 VAR_0, u16 VAR_1, int *VAR_2, char *VAR_3)
{
   switch ((VAR_1 >> 3) & 0x7)
   {
      case 0x0:

         return FUNC_1(VAR_3, "d%d", VAR_1 & 0x7);
      case 0x1:

         return FUNC_1(VAR_3, "a%d", VAR_1 & 0x7);
      case 0x2:

         return FUNC_1(VAR_3, "(a%d)", VAR_1 & 0x7);
      case 0x3:

         return FUNC_1(VAR_3, "(a%d)+", VAR_1 & 0x7);
      case 0x4:

         return FUNC_1(VAR_3, "-(a%d)", VAR_1 & 0x7);
      case 0x5:

         *VAR_2 += 2;
         return FUNC_1(VAR_3, "0x%X(a%d)", (unsigned int)FUNC_0(VAR_0), VAR_1 & 0x7);
      case 0x6:


         *VAR_2 += 2;
         return FUNC_1(VAR_3, "0x%X(a%d, Xn)", (unsigned int)(FUNC_0(VAR_0) & 0xFF), VAR_1 & 0x7);
      case 0x7:
         switch (VAR_1 & 0x7)
         {
            case 0x0:

               *VAR_2 += 2;
               return FUNC_1(VAR_3, "(0x%X).w", (unsigned int)FUNC_0(VAR_0));
            case 0x1:

               *VAR_2 += 4;
               return FUNC_1(VAR_3, "(0x%X).l", (unsigned int)((FUNC_0(VAR_0) << 16) | FUNC_0(VAR_0+2)));
            case 0x4:

               *VAR_2 += 2;
               return FUNC_1(VAR_3, "#0x%X", (unsigned int)FUNC_0(VAR_0));
            case 0x2:

               *VAR_2 += 2;
               return FUNC_1(VAR_3, "0x%X(PC)", (unsigned int)FUNC_0(VAR_0));
            case 0x3:


               return 0;
            default: break;
         }
      default: break;
   }

   return 0;
}
