
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int **,int *,int *,int const**,int const*) ;
 scalar_t__ FUNC_1 (int **,int *,int *,int const**,int const*) ;

size_t FUNC_2(uint8_t * __restrict VAR_1, size_t VAR_2,
                            const uint8_t * __restrict VAR_3, size_t VAR_4,
                            void * __restrict VAR_5 __attribute__((unused)))
{
  const uint8_t * VAR_6 = VAR_3;
  uint8_t * VAR_7 = VAR_1;
  if (FUNC_0(&VAR_7, VAR_1, VAR_1 + VAR_2, &VAR_6, VAR_3 + VAR_4))
    return 0;

  return (size_t)(VAR_7 - VAR_1);
}
