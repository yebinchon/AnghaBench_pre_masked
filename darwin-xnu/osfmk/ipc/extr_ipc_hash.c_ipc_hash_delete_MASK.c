
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef int mach_port_index_t ;
typedef TYPE_1__* ipc_space_t ;
typedef int ipc_object_t ;
typedef int ipc_entry_t ;
struct TYPE_3__ {int is_table_size; int is_table; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

void
FUNC_2(
 ipc_space_t VAR_0,
 ipc_object_t VAR_1,
 mach_port_name_t VAR_2,
 ipc_entry_t VAR_3)
{
 mach_port_index_t VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 FUNC_1(VAR_0->is_table, VAR_0->is_table_size, VAR_1, VAR_4, VAR_3);
}
