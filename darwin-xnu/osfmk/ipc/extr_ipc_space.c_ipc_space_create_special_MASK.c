
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int kern_return_t ;
typedef TYPE_1__* ipc_space_t ;
struct TYPE_6__ {int is_bits; int is_node_id; scalar_t__ is_high_mod; scalar_t__ is_low_mod; scalar_t__ is_table_next; int is_task; int is_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;

kern_return_t
FUNC_2(
 ipc_space_t *VAR_7)
{
 ipc_space_t VAR_8;

 VAR_8 = FUNC_0();
 if (VAR_8 == VAR_3)
  return VAR_4;

 FUNC_1(VAR_8);

 VAR_8->is_bits = VAR_2 | 1;
 VAR_8->is_table = VAR_1;
 VAR_8->is_task = VAR_6;
 VAR_8->is_table_next = 0;
 VAR_8->is_low_mod = 0;
 VAR_8->is_high_mod = 0;
 VAR_8->is_node_id = VAR_0;

 *VAR_7 = VAR_8;
 return VAR_5;
}
