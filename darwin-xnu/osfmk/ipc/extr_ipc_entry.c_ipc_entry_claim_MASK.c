
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mach_port_name_t ;
typedef size_t mach_port_index_t ;
typedef int mach_port_gen_t ;
typedef int kern_return_t ;
typedef TYPE_1__* ipc_space_t ;
typedef TYPE_2__* ipc_entry_t ;
typedef int ipc_entry_bits_t ;
struct TYPE_7__ {size_t ie_next; int ie_request; int ie_bits; } ;
struct TYPE_6__ {scalar_t__ is_table_size; int is_table_free; TYPE_2__* is_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;

kern_return_t
FUNC_8(
 ipc_space_t VAR_2,
 mach_port_name_t *VAR_3,
 ipc_entry_t *VAR_4)
{
 ipc_entry_t VAR_5;
 ipc_entry_t VAR_6;
 mach_port_index_t VAR_7;
 mach_port_gen_t VAR_8;
 mach_port_name_t VAR_9;

 VAR_6 = &VAR_2->is_table[0];

 VAR_7 = VAR_6->ie_next;
 FUNC_3(VAR_7 != 0);

 VAR_5 = &VAR_6[VAR_7];
 VAR_6->ie_next = VAR_5->ie_next;
 VAR_2->is_table_free--;

 FUNC_3(VAR_6->ie_next < VAR_2->is_table_size);





 VAR_8 = FUNC_5(VAR_5->ie_bits);
 if (FUNC_2(FUNC_4(VAR_5->ie_bits, VAR_8))) {
  ipc_entry_bits_t VAR_10 = FUNC_7(VAR_2);
  VAR_8 = FUNC_6(VAR_10);
 }
 VAR_5->ie_bits = VAR_8;
 VAR_5->ie_request = VAR_0;







 VAR_9 = FUNC_0(VAR_7, VAR_8);
 FUNC_3(FUNC_1(VAR_9));
 *VAR_3 = VAR_9;
 *VAR_4 = VAR_5;

 return VAR_1;
}
