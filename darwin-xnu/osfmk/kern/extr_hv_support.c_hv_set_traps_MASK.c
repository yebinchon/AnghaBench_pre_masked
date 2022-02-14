
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int kern_return_t ;
typedef size_t hv_trap_type_t ;
struct TYPE_3__ {scalar_t__ trap_count; int const* traps; } ;
typedef TYPE_1__ hv_trap_table_t ;
typedef int hv_trap_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

kern_return_t
FUNC_3(hv_trap_type_t VAR_4, const hv_trap_t *VAR_5,
 unsigned VAR_6)
{
 hv_trap_table_t *VAR_7 = &VAR_3[VAR_4];
 kern_return_t VAR_8 = VAR_0;

 FUNC_1(VAR_2);
 if (VAR_7->trap_count == 0) {
  VAR_7->traps = VAR_5;
  FUNC_0();
  VAR_7->trap_count = VAR_6;
  VAR_8 = VAR_1;
 }
 FUNC_2(VAR_2);

 return VAR_8;
}
