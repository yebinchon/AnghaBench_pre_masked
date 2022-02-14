
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (scalar_t__*,unsigned int) ;

__attribute__((used)) static unsigned FUNC_1(uint8_t *VAR_0, const uint8_t *VAR_1,
      unsigned VAR_2, unsigned VAR_3)
{
   unsigned VAR_4;
   VAR_2 *= VAR_3;
   for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
      VAR_0[VAR_4] = VAR_1[VAR_4];
   for (VAR_4 = VAR_3; VAR_4 < VAR_2; VAR_4++)
      VAR_0[VAR_4] = VAR_1[VAR_4] - VAR_1[VAR_4 - VAR_3];

   return FUNC_0(VAR_0, VAR_2);
}
