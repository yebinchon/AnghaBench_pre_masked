
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union scu_remote_node_context {int dummy; } scu_remote_node_context ;
typedef size_t u16 ;
struct isci_host {size_t remote_node_entries; union scu_remote_node_context* remote_node_context_table; scalar_t__* device_table; } ;



__attribute__((used)) static union scu_remote_node_context *FUNC_0(struct isci_host *VAR_0, u16 VAR_1)
{
 if (VAR_1 < VAR_0->remote_node_entries &&
     VAR_0->device_table[VAR_1])
  return &VAR_0->remote_node_context_table[VAR_1];

 return ((void*)0);
}
