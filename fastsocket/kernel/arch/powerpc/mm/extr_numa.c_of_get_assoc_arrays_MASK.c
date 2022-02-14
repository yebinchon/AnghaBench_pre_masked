
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_node {int dummy; } ;
struct assoc_arrays {int n_arrays; int array_sz; int const* arrays; } ;


 int* FUNC_0 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_1(struct device_node *VAR_0,
          struct assoc_arrays *VAR_1)
{
 const u32 *VAR_2;
 u32 VAR_3;

 VAR_2 = FUNC_0(VAR_0, "ibm,associativity-lookup-arrays", &VAR_3);
 if (!VAR_2 || VAR_3 < 2 * sizeof(unsigned int))
  return -1;

 VAR_1->n_arrays = *VAR_2++;
 VAR_1->array_sz = *VAR_2++;




 if (VAR_3 < (VAR_1->n_arrays * VAR_1->array_sz + 2) * sizeof(unsigned int))
  return -1;

 VAR_1->arrays = VAR_2;
 return 0;
}
