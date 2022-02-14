
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* instructionPointers; } ;
typedef TYPE_1__ vm_t ;
typedef int qboolean ;


 int FUNC_0 (int) ;
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
 int VAR_15 ;
 int VAR_16 ;

qboolean FUNC_2(vm_t *VAR_17, int VAR_18) {
 if (VAR_1 == VAR_0)
 {
  VAR_11 -= 2;
  VAR_17->instructionPointers[ VAR_12-1 ] = VAR_11;
  FUNC_1( "8B D8");
  return VAR_15;
 }
 if (VAR_14 == VAR_3 || VAR_14 == VAR_4 || VAR_14 == VAR_5 || VAR_14 == VAR_6 ||
  VAR_14 == VAR_9 || VAR_14 == VAR_8 || VAR_14 == VAR_7 )
 {
  FUNC_1( "8B D8");
  return VAR_15;
 }
 if (VAR_14 == VAR_2 && VAR_10[VAR_11-6] == 0xC7 && VAR_10[VAR_11-5] == 0x07 )
 {
  VAR_11 -= 6;
  VAR_17->instructionPointers[ VAR_12-1 ] = VAR_11;
  FUNC_1( "BB" );
  if (VAR_18) {
   FUNC_0( VAR_13 & VAR_18 );
  } else {
   FUNC_0( VAR_13 );
  }
  return VAR_16;
 }

 FUNC_1( "8B 1F" );
 return VAR_15;
}
