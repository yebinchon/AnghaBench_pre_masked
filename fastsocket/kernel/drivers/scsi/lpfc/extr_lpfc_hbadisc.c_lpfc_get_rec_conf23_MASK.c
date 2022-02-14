
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;

__attribute__((used)) static uint8_t *
FUNC_0(uint8_t *VAR_1, uint32_t VAR_2, uint8_t VAR_3)
{
 uint32_t VAR_4 = 0, VAR_5;

 if ((VAR_1[0] == VAR_0) ||
  (VAR_2 < sizeof(uint32_t)))
  return ((void*)0);

 VAR_5 = VAR_1[VAR_4 + 1];





 while ((VAR_4 + VAR_5 * sizeof(uint32_t) + sizeof(uint32_t))
  <= VAR_2) {
  if (VAR_1[VAR_4] == VAR_3)
   return &VAR_1[VAR_4];

  if (VAR_1[VAR_4] == VAR_0)
   return ((void*)0);

  VAR_4 += VAR_5 * sizeof(uint32_t) + sizeof(uint32_t);
  VAR_5 = VAR_1[VAR_4 + 1];
 }
 return ((void*)0);
}
