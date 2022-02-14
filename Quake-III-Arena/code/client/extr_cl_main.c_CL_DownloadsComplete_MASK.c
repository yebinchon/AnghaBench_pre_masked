
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int checksumFeed; scalar_t__ downloadRestart; } ;
struct TYPE_3__ {scalar_t__ state; int cgameStarted; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void FUNC_8( void ) {


 if (VAR_1.downloadRestart) {
  VAR_1.downloadRestart = VAR_3;

  FUNC_7(VAR_1.checksumFeed);


  FUNC_0( "donedl" );



  return;
 }


 VAR_2.state = VAR_0;


 FUNC_5();



 if ( VAR_2.state != VAR_0 ) {
  return;
 }


 FUNC_6("r_uiFullScreen", "0");





 FUNC_1();


 VAR_2.cgameStarted = VAR_4;
 FUNC_2();


 FUNC_3();

 FUNC_4();
 FUNC_4();
 FUNC_4();
}
