
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ evType; int evTime; } ;
typedef TYPE_1__ sysEvent_t ;


 TYPE_1__ FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

int FUNC_2 (void) {
 sysEvent_t VAR_1;


 do {

  VAR_1 = FUNC_0();
  if ( VAR_1.evType != VAR_0 ) {
   FUNC_1( &VAR_1 );
  }
 } while ( VAR_1.evType != VAR_0 );

 return VAR_1.evTime;
}
