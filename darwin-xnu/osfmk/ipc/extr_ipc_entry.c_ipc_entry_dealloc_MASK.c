
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef size_t mach_port_index_t ;
typedef TYPE_1__* ipc_space_t ;
typedef TYPE_2__* ipc_entry_t ;
typedef size_t ipc_entry_num_t ;
struct TYPE_9__ {scalar_t__ ie_object; scalar_t__ ie_request; int ie_bits; size_t ie_next; } ;
struct TYPE_8__ {size_t is_table_size; int is_table_free; TYPE_2__* is_table; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*) ;

void
FUNC_7(
 ipc_space_t VAR_4,
 mach_port_name_t VAR_5,
 ipc_entry_t VAR_6)
{
 ipc_entry_t VAR_7;
 ipc_entry_num_t VAR_8;
 mach_port_index_t VAR_9;

 FUNC_3(FUNC_5(VAR_4));
 FUNC_3(VAR_6->ie_object == VAR_3);
 FUNC_3(VAR_6->ie_request == VAR_2);


 if (VAR_6->ie_request != VAR_2)
  FUNC_6("ipc_entry_dealloc()\n");


 VAR_9 = FUNC_2(VAR_5);
 VAR_7 = VAR_4->is_table;
 VAR_8 = VAR_4->is_table_size;

 if ((VAR_9 < VAR_8) && (VAR_6 == &VAR_7[VAR_9])) {
  FUNC_3(FUNC_0(VAR_6->ie_bits) == FUNC_1(VAR_5));
  VAR_6->ie_bits &= (VAR_0 | VAR_1);
  VAR_6->ie_next = VAR_7->ie_next;
  VAR_7->ie_next = VAR_9;
  VAR_4->is_table_free++;
 } else {




                FUNC_3(VAR_9 < VAR_8);
  FUNC_3(VAR_6 == &VAR_7[VAR_9]);
  FUNC_3(FUNC_0(VAR_6->ie_bits) == FUNC_1(VAR_5));
 }
 FUNC_4(VAR_4, VAR_5, VAR_6);
}
