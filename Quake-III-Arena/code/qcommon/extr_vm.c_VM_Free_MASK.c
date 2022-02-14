
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ instructionPointers; scalar_t__ dataBase; scalar_t__ codeBase; scalar_t__ dllHandle; } ;
typedef TYPE_1__ vm_t ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int * VAR_0 ;
 int * VAR_1 ;

void FUNC_3( vm_t *VAR_2 ) {

 if ( VAR_2->dllHandle ) {
  FUNC_1( VAR_2->dllHandle );
  FUNC_0( VAR_2, 0, sizeof( *VAR_2 ) );
 }
 FUNC_0( VAR_2, 0, sizeof( *VAR_2 ) );

 VAR_0 = ((void*)0);
 VAR_1 = ((void*)0);
}
