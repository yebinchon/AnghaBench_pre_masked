
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct ipc_entry {int dummy; } ;
typedef int kern_return_t ;
typedef TYPE_1__* ipc_table_size_t ;
typedef TYPE_2__* ipc_space_t ;
typedef scalar_t__ ipc_entry_t ;
typedef int ipc_entry_num_t ;
struct TYPE_12__ {int is_bits; int is_table_size; int is_table_free; int is_low_mod; int is_node_id; scalar_t__ is_high_mod; int * is_task; TYPE_1__* is_table_next; scalar_t__ is_table; int bool_gen; scalar_t__ is_entropy; } ;
struct TYPE_11__ {int its_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int ,int) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (void*,int ,int) ;
 int FUNC_6 (int *) ;

kern_return_t
FUNC_7(
 ipc_table_size_t VAR_5,
 ipc_space_t *VAR_6)
{
 ipc_space_t VAR_7;
 ipc_entry_t VAR_8;
 ipc_entry_num_t VAR_9;

 VAR_7 = FUNC_1();
 if (VAR_7 == VAR_2)
  return VAR_3;

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8 == VAR_1) {
  FUNC_2(VAR_7);
  return VAR_3;
 }

 VAR_9 = VAR_5->its_size;
 FUNC_5((void *) VAR_8, 0, VAR_9 * sizeof(struct ipc_entry));


 FUNC_5((void *) VAR_7->is_entropy, 0, sizeof(VAR_7->is_entropy));

 FUNC_6(&VAR_7->bool_gen);
 FUNC_0(VAR_7, VAR_8, 0, VAR_9);

 FUNC_3(VAR_7);
 VAR_7->is_bits = 2;
 VAR_7->is_table_size = VAR_9;
 VAR_7->is_table_free = VAR_9 - 1;
 VAR_7->is_table = VAR_8;
 VAR_7->is_table_next = VAR_5+1;
 VAR_7->is_task = ((void*)0);
 VAR_7->is_low_mod = VAR_9;
 VAR_7->is_high_mod = 0;
 VAR_7->is_node_id = VAR_0;

 *VAR_6 = VAR_7;
 return VAR_4;
}
