
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct sci_remote_node_table {size_t* available_remote_nodes; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static u8 FUNC_0(
 struct sci_remote_node_table *VAR_2,
 u32 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;

 VAR_4 = VAR_3 / VAR_0;
 VAR_5 = VAR_3 % VAR_0;

 VAR_6 = VAR_2->available_remote_nodes[VAR_4];
 VAR_6 &= (VAR_1 << (VAR_5 * 4));
 VAR_6 = VAR_6 >> (VAR_5 * 4);

 return (u8)VAR_6;
}
