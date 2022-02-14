
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef size_t mach_port_index_t ;
typedef TYPE_1__* ipc_space_t ;
typedef TYPE_2__* ipc_entry_t ;
struct TYPE_8__ {int ie_bits; } ;
struct TYPE_7__ {size_t is_table_size; TYPE_2__* is_table; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;

ipc_entry_t
FUNC_6(
 ipc_space_t VAR_2,
 mach_port_name_t VAR_3)
{
 mach_port_index_t VAR_4;
 ipc_entry_t VAR_5;

 FUNC_4(FUNC_5(VAR_2));

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 < VAR_2->is_table_size) {
                VAR_5 = &VAR_2->is_table[VAR_4];
  if (FUNC_0(VAR_5->ie_bits) != FUNC_2(VAR_3) ||
      FUNC_1(VAR_5->ie_bits) == VAR_1) {
   VAR_5 = VAR_0;
  }
 }
 else {
  VAR_5 = VAR_0;
 }

 FUNC_4((VAR_5 == VAR_0) || FUNC_1(VAR_5->ie_bits));
 return VAR_5;
}
