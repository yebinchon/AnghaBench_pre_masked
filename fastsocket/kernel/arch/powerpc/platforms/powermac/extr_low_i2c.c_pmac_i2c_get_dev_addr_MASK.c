
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int u32 ;
struct device_node {int dummy; } ;


 int* FUNC_0 (struct device_node*,char*,int *) ;

u8 FUNC_1(struct device_node *VAR_0)
{
 const u32 *VAR_1 = FUNC_0(VAR_0, "reg", ((void*)0));

 if (VAR_1 == ((void*)0))
  return 0;

 return (*VAR_1) & 0xff;
}
