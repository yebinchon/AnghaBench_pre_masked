
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* instructionPointers; } ;
typedef TYPE_1__ vm_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static void FUNC_2(vm_t *VAR_15) {
 if (VAR_1 == VAR_0)
 {
  VAR_11 -= 2;
  VAR_15->instructionPointers[ VAR_12-1 ] = VAR_11;
  return;
 }
 if (VAR_14 == VAR_3 || VAR_14 == VAR_4 || VAR_14 == VAR_5 || VAR_14 == VAR_6 ||
  VAR_14 == VAR_9 || VAR_14 == VAR_8 || VAR_14 == VAR_7 )
 {
  return;
 }
 if (VAR_14 == VAR_2 && VAR_10[VAR_11-6] == 0xC7 && VAR_10[VAR_11-5] == 0x07 )
 {
  VAR_11 -= 6;
  VAR_15->instructionPointers[ VAR_12-1 ] = VAR_11;
  FUNC_1( "B8" );
  FUNC_0( VAR_13 );
  return;
 }
 FUNC_1( "8B 07" );
}
