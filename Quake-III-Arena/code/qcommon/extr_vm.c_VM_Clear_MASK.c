
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_t ;
struct TYPE_3__ {scalar_t__ dllHandle; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int * VAR_1 ;
 int * VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_2(void) {
 int VAR_4;
 for (VAR_4=0;VAR_4<VAR_0; VAR_4++) {
  if ( VAR_3[VAR_4].dllHandle ) {
   FUNC_1( VAR_3[VAR_4].dllHandle );
  }
  FUNC_0( &VAR_3[VAR_4], 0, sizeof( vm_t ) );
 }
 VAR_1 = ((void*)0);
 VAR_2 = ((void*)0);
}
