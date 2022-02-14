
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;


 int FUNC_0 (char const*,char*,int) ;

void
FUNC_1(
 const char *VAR_0,
 char *VAR_1,
 vm_size_t VAR_2)
{

 if (VAR_0 + VAR_2 <= VAR_1 || VAR_1 + VAR_2 <= VAR_0 || VAR_1 == VAR_0)
  FUNC_0(VAR_0, VAR_1, VAR_2);
 else if (VAR_0 > VAR_1)
  FUNC_0(VAR_0, VAR_1, VAR_2);
 else {

  VAR_0 += VAR_2 - 1;
  VAR_1 += VAR_2 - 1;
  while (VAR_2-- > 0)
   *VAR_1-- = *VAR_0--;
 }
}
