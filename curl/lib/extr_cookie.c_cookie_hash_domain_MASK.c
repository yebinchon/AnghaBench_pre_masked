
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;

__attribute__((used)) static size_t FUNC_1(const char *VAR_1, const size_t VAR_2)
{
  const char *VAR_3 = VAR_1 + VAR_2;
  size_t VAR_4 = 5381;

  while(VAR_1 < VAR_3) {
    VAR_4 += VAR_4 << 5;
    VAR_4 ^= FUNC_0(*VAR_1++);
  }

  return (VAR_4 % VAR_0);
}
