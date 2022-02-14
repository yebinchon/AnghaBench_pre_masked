
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 char* FUNC_1 (struct device_node const*,char*,int*) ;
 int FUNC_2 (char const*) ;

int FUNC_3(const struct device_node *VAR_0,
  const char *VAR_1)
{
 const char* VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_1(VAR_0, "compatible", &VAR_3);
 if (VAR_2 == ((void*)0))
  return 0;
 while (VAR_3 > 0) {
  if (FUNC_0(VAR_2, VAR_1, FUNC_2(VAR_1)) == 0)
   return 1;
  VAR_4 = FUNC_2(VAR_2) + 1;
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
 }

 return 0;
}
