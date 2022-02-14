
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * dataMask; int * instructionPointersLength; int * codeLength; scalar_t__ compiled; scalar_t__ dllHandle; int * name; } ;
typedef TYPE_1__ vm_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_1( void ) {
 vm_t *VAR_2;
 int VAR_3;

 FUNC_0( "Registered virtual machines:\n" );
 for ( VAR_3 = 0 ; VAR_3 < VAR_0 ; VAR_3++ ) {
  VAR_2 = &VAR_1[VAR_3];
  if ( !VAR_2->name[0] ) {
   break;
  }
  FUNC_0( "%s : ", VAR_2->name );
  if ( VAR_2->dllHandle ) {
   FUNC_0( "native\n" );
   continue;
  }
  if ( VAR_2->compiled ) {
   FUNC_0( "compiled on load\n" );
  } else {
   FUNC_0( "interpreted\n" );
  }
  FUNC_0( "    code length : %7i\n", VAR_2->codeLength );
  FUNC_0( "    table length: %7i\n", VAR_2->instructionPointersLength );
  FUNC_0( "    data length : %7i\n", VAR_2->dataMask + 1 );
 }
}
