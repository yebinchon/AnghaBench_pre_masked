
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,unsigned int,unsigned long*) ;

int FUNC_1(const char *VAR_0, unsigned int VAR_1, long *VAR_2)
{
 int VAR_3;
 if (*VAR_0 == '-') {
  VAR_3 = FUNC_0(VAR_0 + 1, VAR_1, (unsigned long *)VAR_2);
  if (!VAR_3)
   *VAR_2 = -(*VAR_2);
 } else {
  VAR_3 = FUNC_0(VAR_0, VAR_1, (unsigned long *)VAR_2);
 }

 return VAR_3;
}
