
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int * parent; } ;



__attribute__((used)) static inline int FUNC_0(const struct device_node *VAR_0)
{
 if (!VAR_0)
  return 0;

 return (VAR_0->parent == ((void*)0));
}
