
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef size_t mach_port_index_t ;
typedef int kern_return_t ;
typedef TYPE_1__* ipc_space_t ;
typedef TYPE_2__* ipc_entry_t ;
struct TYPE_6__ {size_t ie_next; scalar_t__ ie_object; } ;
struct TYPE_5__ {size_t is_table_size; TYPE_2__* is_table; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

kern_return_t
FUNC_2(
 ipc_space_t VAR_3,
 uint32_t VAR_4)
{

 ipc_entry_t VAR_5;
 mach_port_index_t VAR_6 = 0;
 uint32_t VAR_7;

 FUNC_0(FUNC_1(VAR_3));

 VAR_5 = &VAR_3->is_table[0];

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = VAR_5[VAR_6].ie_next;
  if (VAR_6 == 0) {
   return VAR_1;
  }
  FUNC_0(VAR_6 < VAR_3->is_table_size);
  FUNC_0(VAR_5[VAR_6].ie_object == VAR_0);
 }
 return VAR_2;
}
