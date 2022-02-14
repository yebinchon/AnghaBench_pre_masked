
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int SRes ;
typedef int CSzData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int*) ;

__attribute__((used)) static SRes FUNC_2(CSzData *VAR_1, uint64_t *VAR_2)
{
   uint8_t VAR_3;
   uint8_t VAR_4 = 0x80;
   int VAR_5;
   FUNC_0(FUNC_1(VAR_1, &VAR_3));
   *VAR_2 = 0;
   for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
   {
      uint8_t VAR_6;
      if ((VAR_3 & VAR_4) == 0)
      {
         uint64_t VAR_7 = VAR_3 & (VAR_4 - 1);
         *VAR_2 += (VAR_7 << (8 * VAR_5));
         return VAR_0;
      }
      FUNC_0(FUNC_1(VAR_1, &VAR_6));
      *VAR_2 |= ((uint64_t)VAR_6 << (8 * VAR_5));
      VAR_4 >>= 1;
   }
   return VAR_0;
}
