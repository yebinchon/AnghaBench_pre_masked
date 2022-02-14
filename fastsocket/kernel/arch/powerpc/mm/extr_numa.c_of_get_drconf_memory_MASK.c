
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int* FUNC_0 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_1(struct device_node *VAR_1, const u32 **VAR_2)
{
 const u32 *VAR_3;
 u32 VAR_4, VAR_5;

 VAR_3 = FUNC_0(VAR_1, "ibm,dynamic-memory", &VAR_4);
 if (!VAR_3 || VAR_4 < sizeof(unsigned int))
  return 0;

 VAR_5 = *VAR_3++;




 if (VAR_4 < (VAR_5 * (VAR_0 + 4) + 1) * sizeof(unsigned int))
  return 0;

 *VAR_2 = VAR_3;
 return VAR_5;
}
