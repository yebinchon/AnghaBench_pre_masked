
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vmInterpret_t ;
struct TYPE_2__ {scalar_t__ state; int uiStarted; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,...) ;
 int FUNC_3 (char*,int ,int ) ;
 scalar_t__ VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void FUNC_4( void ) {
 int VAR_14;
 vmInterpret_t VAR_15;


 if ( VAR_10 != 0 ) {

  VAR_15 = VAR_9;
 }
 else {
  VAR_15 = FUNC_1( "vm_ui" );
 }
 VAR_13 = FUNC_3( "ui", VAR_2, VAR_15 );
 if ( !VAR_13 ) {
  FUNC_0( VAR_4, "VM_Create on UI failed" );
 }


 VAR_14 = FUNC_2( VAR_13, VAR_6 );
 if (VAR_14 == VAR_8) {


  FUNC_2( VAR_13, VAR_7, (VAR_11.state >= VAR_1 && VAR_11.state < VAR_0));
 }
 else if (VAR_14 != VAR_5) {
  FUNC_0( VAR_3, "User Interface is version %d, expected %d", VAR_14, VAR_5 );
  VAR_11.uiStarted = VAR_12;
 }
 else {

  FUNC_2( VAR_13, VAR_7, (VAR_11.state >= VAR_1 && VAR_11.state < VAR_0) );
 }
}
