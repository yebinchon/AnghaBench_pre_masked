
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct sci_remote_node_table {size_t available_nodes_array_size; size_t* available_remote_nodes; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_1(
 struct sci_remote_node_table *VAR_3,
 u32 VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 FUNC_0(
  (VAR_3->available_nodes_array_size * VAR_0)
  <= (VAR_4 / VAR_2)
  );

 VAR_5 = VAR_4 / VAR_0;
 VAR_6 = VAR_4 % VAR_0;

 VAR_7 = VAR_3->available_remote_nodes[VAR_5];
 VAR_7 |= (VAR_1 << (VAR_6 * 4));
 VAR_3->available_remote_nodes[VAR_5] = VAR_7;
}
