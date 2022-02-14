
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ interpolate; int currentValid; int nextState; int currentState; } ;
typedef TYPE_1__ centity_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2( centity_t *VAR_2 ) {
 VAR_2->currentState = VAR_2->nextState;
 VAR_2->currentValid = VAR_1;


 if ( !VAR_2->interpolate ) {
  FUNC_1( VAR_2 );
 }


 VAR_2->interpolate = VAR_0;


 FUNC_0( VAR_2 );
}
