
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;


 int FUNC_0 (int*,void const*,int) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1,
      uint64_t VAR_2, uint8_t VAR_3, uint64_t *VAR_4)
{
   int VAR_5 = (int)(VAR_2 / 2);
   int VAR_6 = VAR_3 + sizeof(uint64_t);
   uint64_t *VAR_7 = (uint64_t *)VAR_0 + (VAR_5 * VAR_6);
   int VAR_8 = FUNC_0(VAR_7, VAR_1, VAR_3);

   if (VAR_8 == 0)
   {
      *VAR_4 = *(uint64_t *)(VAR_7 + VAR_3);
      return 0;
   }

   if (VAR_2 == 0)
      return -1;

   if (VAR_8 > 0)
      return FUNC_1(VAR_0, VAR_1, VAR_5, VAR_3, VAR_4);

   return FUNC_1(VAR_7 + VAR_6, VAR_1,
         VAR_2 - VAR_5, VAR_3, VAR_4);
}
