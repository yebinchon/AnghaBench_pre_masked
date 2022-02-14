
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int dummy; } ;
struct device_node {int dummy; } ;


 struct property* FUNC_0 (char const*,scalar_t__,char const*) ;
 int FUNC_1 (struct device_node*,struct property*) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_0, const char *VAR_1,
  const char *VAR_2)
{
 struct property *VAR_3 = FUNC_0(VAR_1, FUNC_2(VAR_2) + 1, VAR_2);

 if (!VAR_3)
  return 0;
 FUNC_1(VAR_0, VAR_3);
 return 1;
}
