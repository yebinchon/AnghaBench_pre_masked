
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ mach_port_type_t ;
typedef int mach_port_name_t ;
typedef size_t mach_port_index_t ;
typedef TYPE_1__* ipc_space_t ;
typedef TYPE_2__* ipc_entry_t ;
typedef size_t ipc_entry_num_t ;
struct TYPE_16__ {int ie_bits; } ;
struct TYPE_15__ {size_t is_table_size; scalar_t__ is_table_free; scalar_t__ is_table_next; TYPE_2__* is_table; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (size_t,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (scalar_t__,TYPE_2__*) ;

void
FUNC_13(
 ipc_space_t VAR_2)
{
 ipc_entry_t VAR_3;
 ipc_entry_num_t VAR_4;
 mach_port_index_t VAR_5;

 FUNC_3(VAR_2 != VAR_0);

 FUNC_9(VAR_2);
 if (!FUNC_5(VAR_2)) {
  FUNC_11(VAR_2);
  return;
 }
 FUNC_7(VAR_2);






 while (FUNC_6(VAR_2))
  FUNC_10(VAR_2);

 FUNC_11(VAR_2);






 VAR_3 = VAR_2->is_table;
 VAR_4 = VAR_2->is_table_size;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  ipc_entry_t VAR_6 = &VAR_3[VAR_5];
  mach_port_type_t VAR_7;

  VAR_7 = FUNC_1(VAR_6->ie_bits);
  if (VAR_7 != VAR_1) {
   mach_port_name_t VAR_8;

   VAR_8 = FUNC_2(VAR_5,
           FUNC_0(VAR_6->ie_bits));
   FUNC_4(VAR_2, VAR_8, VAR_6);
  }
 }

 FUNC_12(VAR_2->is_table_next-1, VAR_3);
 VAR_2->is_table_size = 0;
 VAR_2->is_table_free = 0;






 FUNC_8(VAR_2);
}
