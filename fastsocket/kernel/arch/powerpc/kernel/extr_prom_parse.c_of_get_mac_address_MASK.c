
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int length; void const* value; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (void const*) ;
 struct property* FUNC_1 (struct device_node*,char*,int *) ;

const void *FUNC_2(struct device_node *VAR_0)
{
 struct property *VAR_1;

 VAR_1 = FUNC_1(VAR_0, "mac-address", ((void*)0));
 if (VAR_1 && (VAR_1->length == 6) && FUNC_0(VAR_1->value))
  return VAR_1->value;

 VAR_1 = FUNC_1(VAR_0, "local-mac-address", ((void*)0));
 if (VAR_1 && (VAR_1->length == 6) && FUNC_0(VAR_1->value))
  return VAR_1->value;

 VAR_1 = FUNC_1(VAR_0, "address", ((void*)0));
 if (VAR_1 && (VAR_1->length == 6) && FUNC_0(VAR_1->value))
  return VAR_1->value;

 return ((void*)0);
}
