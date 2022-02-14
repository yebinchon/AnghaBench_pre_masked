
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (scalar_t__*,unsigned int) ;
 scalar_t__ const FUNC_1 (scalar_t__ const,scalar_t__ const,scalar_t__ const) ;

__attribute__((used)) static unsigned FUNC_2(uint8_t *VAR_0,
      const uint8_t *VAR_1, const uint8_t *VAR_2,
      unsigned VAR_3, unsigned VAR_4)
{
   unsigned VAR_5;
   VAR_3 *= VAR_4;
   for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
      VAR_0[VAR_5] = VAR_1[VAR_5] - FUNC_1(0, VAR_2[VAR_5], 0);
   for (VAR_5 = VAR_4; VAR_5 < VAR_3; VAR_5++)
      VAR_0[VAR_5] = VAR_1[VAR_5] - FUNC_1(VAR_1[VAR_5 - VAR_4], VAR_2[VAR_5], VAR_2[VAR_5 - VAR_4]);

   return FUNC_0(VAR_0, VAR_3);
}
