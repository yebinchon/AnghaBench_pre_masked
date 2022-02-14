
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {scalar_t__ value; } ;
struct device_node {int dummy; } ;


 struct property* FUNC_0 (struct device_node*,char const*,int*) ;

int FUNC_1(struct device_node *VAR_0, const char *VAR_1, int VAR_2)
{
 struct property *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 if (!VAR_3 || VAR_4 != 4)
  return VAR_2;

 return *(int *) VAR_3->value;
}
