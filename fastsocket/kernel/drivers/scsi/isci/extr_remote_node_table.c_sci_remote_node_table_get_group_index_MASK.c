
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sci_remote_node_table {size_t** remote_node_groups; size_t group_array_size; } ;


 size_t VAR_0 ;

__attribute__((used)) static u32 FUNC_0(
 struct sci_remote_node_table *VAR_1,
 u32 VAR_2)
{
 u32 VAR_3;
 u32 *VAR_4;
 u32 VAR_5;

 VAR_4 = VAR_1->remote_node_groups[VAR_2];

 for (VAR_3 = 0; VAR_3 < VAR_1->group_array_size; VAR_3++) {
  if (VAR_4[VAR_3] != 0) {
   for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
    if ((VAR_4[VAR_3] & (1 << VAR_5)) != 0) {
     return (VAR_3 * 32) + VAR_5;
    }
   }
  }
 }

 return VAR_0;
}
