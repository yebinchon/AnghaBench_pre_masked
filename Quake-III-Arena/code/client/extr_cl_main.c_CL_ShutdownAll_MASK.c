
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* soundRegistered; void* rendererStarted; void* cgameStarted; void* uiStarted; } ;
struct TYPE_3__ {int (* Shutdown ) (void*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__ VAR_0 ;
 void* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (void*) ;

void FUNC_4(void) {


 FUNC_2();

 FUNC_0();

 FUNC_1();


 if ( VAR_2.Shutdown ) {
  VAR_2.Shutdown( VAR_1 );
 }

 VAR_0.uiStarted = VAR_1;
 VAR_0.cgameStarted = VAR_1;
 VAR_0.rendererStarted = VAR_1;
 VAR_0.soundRegistered = VAR_1;
}
