
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static int32_t FUNC_1(int32_t VAR_0, int32_t VAR_1)
{
   int VAR_2;

   if (VAR_0 == 0 || VAR_1 == 0)
      return 1;

   VAR_0 = FUNC_0(VAR_0);
   VAR_1 = FUNC_0(VAR_1);
   for (VAR_2 = 0; !((VAR_0 | VAR_1) & 0x01); VAR_2++)
      VAR_0 >>= 1, VAR_1 >>= 1;

   while (VAR_0 > 0)
   {
      while (!(VAR_0 & 0x01))
         VAR_0 >>= 1;
      while (!(VAR_1 & 0x01))
         VAR_1 >>= 1;
      if (VAR_0 >= VAR_1)
         VAR_0 = (VAR_0 - VAR_1) >> 1;
      else
         VAR_1 = (VAR_1 - VAR_0) >> 1;
   }
   return VAR_1 << VAR_2;
}
