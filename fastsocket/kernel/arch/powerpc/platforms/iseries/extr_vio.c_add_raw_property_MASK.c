
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct device_node {int dummy; } ;


 struct property* FUNC_0 (char const*,int,void const*) ;
 int FUNC_1 (struct device_node*,struct property*) ;

__attribute__((used)) static int FUNC_2(struct device_node *VAR_0, const char *VAR_1,
  int VAR_2, const void *VAR_3)
{
 struct property *VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 if (!VAR_4)
  return 0;
 FUNC_1(VAR_0, VAR_4);
 return 1;
}
