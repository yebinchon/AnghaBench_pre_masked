
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 char FUNC_2 (char) ;

__attribute__((used)) static int FUNC_3(char **VAR_0, unsigned int *VAR_1, int VAR_2,
      int VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;

 VAR_5 = 0;
 *VAR_1 = 0;

 while (FUNC_1(**VAR_0) && (VAR_5 <= VAR_3)) {

  if (FUNC_0(**VAR_0))
   VAR_6 = **VAR_0 - '0';
  else
   VAR_6 = FUNC_2(**VAR_0) - 'a' + 10;
  *VAR_1 = *VAR_1 * 16 + VAR_6;
  (*VAR_0)++;
  VAR_5++;
 }

 if ((VAR_5 < VAR_2) || (VAR_5 > VAR_3) || (*VAR_1 > VAR_4))
  return 1;

 return 0;
}
