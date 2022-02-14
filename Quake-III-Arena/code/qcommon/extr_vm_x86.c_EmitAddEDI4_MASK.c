
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* instructionPointers; } ;
typedef TYPE_1__ vm_t ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static void FUNC_1(vm_t *VAR_6) {
 if (VAR_2 == VAR_0 && VAR_5[VAR_4-1] == 0)
 {
  VAR_3 -= 3;
  VAR_6->instructionPointers[ VAR_4-1 ] = VAR_3;
  return;
 }
 if (VAR_2 == VAR_1 && VAR_5[VAR_4-1] == 0)
 {
  VAR_3 -= 3;
  VAR_6->instructionPointers[ VAR_4-1 ] = VAR_3;
  FUNC_0( "83 EF 04" );
  return;
 }
 FUNC_0( "83 C7 04" );
}
