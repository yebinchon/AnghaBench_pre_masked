
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(u32 VAR_0, int VAR_1)
{
   int VAR_2=0;


   for(;;)
   {
       u16 VAR_3;
       VAR_3 = (FUNC_0(VAR_0) << 8) | FUNC_0(VAR_0 + 2);
       if (VAR_3 == 0)
         break;
       VAR_0 += 4;
       if (((VAR_0-1) & ((VAR_1 << 1) - 1)) == 0)
          VAR_0 += 8;
       VAR_2++;
   }

   return VAR_2;
}
