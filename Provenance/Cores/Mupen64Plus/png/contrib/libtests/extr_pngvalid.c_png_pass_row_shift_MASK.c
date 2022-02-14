
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int** VAR_0 ;

__attribute__((used)) static int
FUNC_0(int VAR_1)
{
   int VAR_2, VAR_3, VAR_4=(-1), VAR_5=8;
   ++VAR_1;
   for (VAR_3=0; VAR_3<8; ++VAR_3) for (VAR_2=0; VAR_2<8; ++VAR_2) if (VAR_0[VAR_3][VAR_2] == VAR_1)
   {
      if (VAR_4 == (-1))
         VAR_4 = VAR_3;
      else if (VAR_4 == VAR_3)
         {}
      else if (VAR_5 == VAR_3-VAR_4)
         VAR_4=VAR_3;
      else if (VAR_5 == 8)
         VAR_5 = VAR_3-VAR_4, VAR_4=VAR_3;
      else if (VAR_5 != VAR_3-VAR_4)
         return 0xff;
   }

   if (VAR_4 == (-1)) return 0xfe;


   switch (VAR_5)
   {
case 2: return 1;
case 4: return 2;
case 8: return 3;
default: break;
   }


   return (VAR_5 << 8) + 0xfd;
}
