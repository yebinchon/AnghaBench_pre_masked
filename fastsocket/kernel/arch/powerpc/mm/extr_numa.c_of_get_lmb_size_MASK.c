
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int* FUNC_0 (struct device_node*,char*,int*) ;
 int FUNC_1 (int ,int const**) ;

__attribute__((used)) static u64 FUNC_2(struct device_node *VAR_1)
{
 const u32 *VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_0(VAR_1, "ibm,lmb-size", &VAR_3);
 if (!VAR_2 || VAR_3 < sizeof(unsigned int))
  return 0;

 return FUNC_1(VAR_0, &VAR_2);
}
