
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void
FUNC_1(uint8_t *VAR_0, uint8_t *VAR_1, uint32_t VAR_2)
{
 uint32_t *VAR_3 = (uint32_t *) VAR_0;
 uint32_t *VAR_4 = (uint32_t *) VAR_1;
 uint32_t VAR_5 = VAR_2 >> 2;

 for (; VAR_5 ; VAR_5--)
  *VAR_4++ = FUNC_0(*VAR_3++);
}
