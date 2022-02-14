
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef int phandle ;


 struct device_node* FUNC_0 (int const) ;
 int * FUNC_1 (struct device_node*,char const*,int*) ;

struct device_node *
FUNC_2(struct device_node *VAR_0, const char *VAR_1, int VAR_2)
{
 const phandle *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_4);
 if ((!VAR_3) || (VAR_4 < sizeof(*VAR_3) * (VAR_2 + 1)))
  return ((void*)0);

 return FUNC_0(VAR_3[VAR_2]);
}
