
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t hv_trap_type_t ;
struct TYPE_3__ {int * traps; scalar_t__ trap_count; } ;
typedef TYPE_1__ hv_trap_table_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(hv_trap_type_t VAR_2) {
 hv_trap_table_t *VAR_3 = &VAR_1[VAR_2];

 FUNC_1(VAR_0);
 VAR_3->trap_count = 0;
 FUNC_0();
 VAR_3->traps = ((void*)0);
 FUNC_2(VAR_0);
}
