
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 char* FUNC_0 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_0)
{
 const char *VAR_1 = FUNC_0(VAR_0, "model", ((void*)0));

 if (VAR_1 && FUNC_1(VAR_1, "Python"))
  return 1;

 return 0;
}
