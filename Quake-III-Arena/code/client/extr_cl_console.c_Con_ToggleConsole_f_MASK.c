
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; int keyCatchers; } ;
struct TYPE_4__ {int widthInChars; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

void FUNC_3 (void) {

 if ( VAR_2.state == VAR_0 && VAR_2.keyCatchers == VAR_1 ) {
  FUNC_0();
  return;
 }

 FUNC_2( &VAR_3 );
 VAR_3.widthInChars = VAR_4;

 FUNC_1 ();
 VAR_2.keyCatchers ^= VAR_1;
}
