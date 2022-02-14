
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long long FUNC_0 (char const*,char**,unsigned int) ;
 size_t FUNC_1 (char const*) ;

int FUNC_2(const char *VAR_1, unsigned int VAR_2, unsigned long long *VAR_3)
{
 char *VAR_4;
 unsigned long long VAR_5;
 size_t VAR_6;

 *VAR_3 = 0;
 VAR_6 = FUNC_1(VAR_1);
 if (VAR_6 == 0)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_1, &VAR_4, VAR_2);
 if (VAR_4 == VAR_1)
  return -VAR_0;
 if ((*VAR_4 == '\0') ||
  ((VAR_6 == (size_t)(VAR_4 - VAR_1) + 1) && (*VAR_4 == '\n'))) {
  *VAR_3 = VAR_5;
  return 0;
 }

 return -VAR_0;
}
