
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static u16 *FUNC_3(u32 VAR_0, u32 *VAR_1, int VAR_2, int VAR_3, int *VAR_4, int *VAR_5)
{
   u16 *VAR_6;
   int VAR_7=0;

   VAR_1[0] = VAR_0 + (VAR_2 * VAR_3 * 2) + 0x45;
   VAR_5[0]=0;


   VAR_4[0] = FUNC_0(VAR_1[0], VAR_3);


   if ((VAR_6 = (u16 *)FUNC_2(sizeof(u16) * VAR_4[0])) == ((void*)0))
      return ((void*)0);


   for(VAR_7 = 0; VAR_7 < VAR_4[0]; VAR_7++)
   {
       u16 VAR_8;
       VAR_8 = (FUNC_1(VAR_1[0]) << 8) | FUNC_1(VAR_1[0] + 2);
       VAR_1[0] += 4;

       if (((VAR_1[0]-1) & ((VAR_3 << 1) - 1)) == 0)
       {
          VAR_1[0] = VAR_0 + (VAR_6[VAR_5[0]] * VAR_3 * 2) + 9;
          VAR_5[0]++;
       }
       VAR_6[VAR_7] = VAR_8;
   }

   VAR_1[0] += 4;

   return VAR_6;
}
