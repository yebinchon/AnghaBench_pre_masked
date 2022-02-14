
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int checksumFeed; } ;
struct TYPE_5__ {scalar_t__ state; void* cgameStarted; void* soundRegistered; void* uiStarted; void* rendererStarted; } ;
struct TYPE_4__ {int integer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char*) ;
 int VAR_2 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int VAR_3 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 TYPE_3__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;

void FUNC_14( void ) {


 FUNC_13();

 FUNC_6();

 FUNC_4();

 FUNC_5();

 FUNC_2();

 FUNC_9( VAR_3 | VAR_2 );

 FUNC_10( VAR_4.checksumFeed );

 VAR_5.rendererStarted = VAR_7;
 VAR_5.uiStarted = VAR_7;
 VAR_5.cgameStarted = VAR_7;
 VAR_5.soundRegistered = VAR_7;


 FUNC_8( "cl_paused", "0" );


 if ( !VAR_6->integer ) {

  FUNC_11();
 }
 else {

  FUNC_12();
 }


 FUNC_1();


 FUNC_7();


 if ( VAR_5.state > VAR_1 && VAR_5.state != VAR_0 ) {
  VAR_5.cgameStarted = VAR_8;
  FUNC_0();

  FUNC_3();
 }
}
