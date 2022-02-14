
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int const,int) ;

uint32_t FUNC_1(const uint8_t *VAR_0, size_t VAR_1)
{
      register uint32_t VAR_2;

      VAR_2 = 0xFFFFFFFF;

      for ( ; VAR_1; --VAR_1, ++VAR_0)
      {
            VAR_2 = FUNC_0(*VAR_0, VAR_2);
      }

      return ~VAR_2;
}
