
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int trace_t ;
struct TYPE_7__ {scalar_t__ moverState; int client; } ;
typedef TYPE_1__ gentity_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

void FUNC_1(gentity_t *VAR_1, gentity_t *VAR_2, trace_t *VAR_3 ) {
 if ( !VAR_2->client ) {
  return;
 }

 if ( VAR_1->moverState == VAR_0 ) {
  FUNC_0( VAR_1, VAR_2, VAR_2 );
 }
}
