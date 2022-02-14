
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv64x60_mc_pdata {unsigned int total_mem; } ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int *,char*) ;
 unsigned int* FUNC_1 (struct device_node*,char*,int *) ;

__attribute__((used)) static void FUNC_2(struct mv64x60_mc_pdata *VAR_0)
{
 struct device_node *VAR_1 = ((void*)0);
 const unsigned int *VAR_2;

 VAR_1 = FUNC_0(((void*)0), "memory");
 if (!VAR_1)
  return;

 VAR_2 = FUNC_1(VAR_1, "reg", ((void*)0));

 VAR_0->total_mem = VAR_2[1];
}
