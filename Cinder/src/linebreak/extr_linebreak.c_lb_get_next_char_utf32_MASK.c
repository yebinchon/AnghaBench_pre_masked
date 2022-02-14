
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const utf32_t ;


 int const VAR_0 ;
 int FUNC_0 (int) ;

utf32_t FUNC_1(
  const utf32_t *VAR_1,
  size_t VAR_2,
  size_t *VAR_3)
{
 FUNC_0(*VAR_3 <= VAR_2);
 if (*VAR_3 == VAR_2)
  return VAR_0;
 return VAR_1[(*VAR_3)++];
}
