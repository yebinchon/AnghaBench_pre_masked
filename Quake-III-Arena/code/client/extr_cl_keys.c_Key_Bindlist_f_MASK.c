
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* binding; } ;


 int FUNC_0 (char*,int ,scalar_t__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;

void FUNC_2( void ) {
 int VAR_1;

 for ( VAR_1 = 0 ; VAR_1 < 256 ; VAR_1++ ) {
  if ( VAR_0[VAR_1].binding && VAR_0[VAR_1].binding[0] ) {
   FUNC_0( "%s \"%s\"\n", FUNC_1(VAR_1), VAR_0[VAR_1].binding );
  }
 }
}
