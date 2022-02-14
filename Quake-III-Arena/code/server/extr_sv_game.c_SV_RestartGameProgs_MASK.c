
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void FUNC_4( void ) {
 if ( !VAR_2 ) {
  return;
 }
 FUNC_2( VAR_2, VAR_1, VAR_3 );


 VAR_2 = FUNC_3( VAR_2 );
 if ( !VAR_2 ) {
  FUNC_0( VAR_0, "VM_Restart on game failed" );
 }

 FUNC_1( VAR_3 );
}
