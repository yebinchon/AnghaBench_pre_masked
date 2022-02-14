
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char const*) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_2, const char *VAR_3)
{
  size_t VAR_4 = FUNC_1(VAR_2);
  size_t VAR_5 = FUNC_1(VAR_3);

  if(VAR_5 < VAR_4)
    return VAR_0;

  if(!FUNC_0(VAR_2, VAR_3 + VAR_5-VAR_4))
    return VAR_0;
  if(VAR_5 == VAR_4)
    return VAR_1;
  if('.' == *(VAR_3 + VAR_5 - VAR_4 - 1))
    return VAR_1;
  return VAR_0;
}
