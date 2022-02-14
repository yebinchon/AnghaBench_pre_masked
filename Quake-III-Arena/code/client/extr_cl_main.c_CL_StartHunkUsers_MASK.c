
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* uiStarted; void* soundRegistered; void* soundStarted; void* rendererStarted; } ;
struct TYPE_3__ {int integer; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 void* VAR_2 ;

void FUNC_4( void ) {
 if (!VAR_1) {
  return;
 }

 if ( !VAR_1->integer ) {
  return;
 }

 if ( !VAR_0.rendererStarted ) {
  VAR_0.rendererStarted = VAR_2;
  FUNC_0();
 }

 if ( !VAR_0.soundStarted ) {
  VAR_0.soundStarted = VAR_2;
  FUNC_3();
 }

 if ( !VAR_0.soundRegistered ) {
  VAR_0.soundRegistered = VAR_2;
  FUNC_2();
 }

 if ( !VAR_0.uiStarted ) {
  VAR_0.uiStarted = VAR_2;
  FUNC_1();
 }
}
