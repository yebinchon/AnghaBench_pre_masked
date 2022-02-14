
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (void*,int,int) ;

void FUNC_1(void *VAR_0, u32 VAR_1)
{
   int VAR_2, VAR_3;
   u32 VAR_4;
   u8 VAR_5[32] = {
      0xFF, 'B', 0xFF, 'a', 0xFF, 'c', 0xFF, 'k',
      0xFF, 'U', 0xFF, 'p', 0xFF, 'R', 0xFF, 'a',
      0xFF, 'm', 0xFF, ' ', 0xFF, 'F', 0xFF, 'o',
      0xFF, 'r', 0xFF, 'm', 0xFF, 'a', 0xFF, 't'
   };


   for(VAR_3 = 0; VAR_3 < 4; VAR_3++)
      for(VAR_2 = 0; VAR_2 < 32; VAR_2++)
         FUNC_0(VAR_0, (VAR_3 * 32) + VAR_2, VAR_5[VAR_2]);


   for(VAR_4 = 0x80; VAR_4 < VAR_1; VAR_4+=2)
   {
      FUNC_0(VAR_0, VAR_4, 0xFF);
      FUNC_0(VAR_0, VAR_4+1, 0x00);
   }
}
