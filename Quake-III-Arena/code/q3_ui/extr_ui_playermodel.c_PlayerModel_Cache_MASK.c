
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nummodels; scalar_t__* modelnames; } ;


 int FUNC_0 () ;
 scalar_t__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2( void )
{
 int VAR_2;

 for( VAR_2 = 0; VAR_0[VAR_2]; VAR_2++ ) {
  FUNC_1( VAR_0[VAR_2] );
 }

 FUNC_0();
 for( VAR_2 = 0; VAR_2 < VAR_1.nummodels; VAR_2++ ) {
  FUNC_1( VAR_1.modelnames[VAR_2] );
 }
}
