
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sci_remote_node_table {int group_array_size; int** remote_node_groups; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(
 struct sci_remote_node_table *VAR_1,
 u32 VAR_2,
 u32 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u32 *VAR_6;

 FUNC_0(VAR_2 >= VAR_0);
 FUNC_0(VAR_3 >= (u32)(VAR_1->group_array_size * 32));

 VAR_4 = VAR_3 / 32;
 VAR_5 = VAR_3 % 32;
 VAR_6 = VAR_1->remote_node_groups[VAR_2];

 VAR_6[VAR_4] = VAR_6[VAR_4] | (1 << VAR_5);
}
