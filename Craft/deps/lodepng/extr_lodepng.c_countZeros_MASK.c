
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static unsigned FUNC_0(const unsigned char* VAR_1, size_t VAR_2, size_t VAR_3)
{
  const unsigned char* VAR_4 = VAR_1 + VAR_3;
  const unsigned char* VAR_5 = VAR_4 + VAR_0;
  if(VAR_5 > VAR_1 + VAR_2) VAR_5 = VAR_1 + VAR_2;
  VAR_1 = VAR_4;
  while (VAR_1 != VAR_5 && *VAR_1 == 0) VAR_1++;

  return (unsigned)(VAR_1 - VAR_4);
}
