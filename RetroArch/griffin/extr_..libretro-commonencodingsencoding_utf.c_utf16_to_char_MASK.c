
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef char uint16_t ;


 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int *,size_t*,char const*,unsigned int) ;

__attribute__((used)) static bool FUNC_2(uint8_t **VAR_0,
      size_t *VAR_1, const uint16_t *VAR_2)
{
   unsigned VAR_3 = 0;

   while (VAR_2[VAR_3] != '\0')
      VAR_3++;

   FUNC_1(((void*)0), VAR_1, VAR_2, VAR_3);
   *VAR_1 += 1;
   *VAR_0 = (uint8_t*)FUNC_0(*VAR_1);
   if (*VAR_0 == 0)
      return 0;

   return FUNC_1(*VAR_0, VAR_1, VAR_2, VAR_3);
}
