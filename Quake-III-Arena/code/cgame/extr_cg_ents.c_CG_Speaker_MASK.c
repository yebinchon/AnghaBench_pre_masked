
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int clientNum; size_t eventParm; int frame; int number; } ;
struct TYPE_7__ {scalar_t__ miscTime; TYPE_1__ currentState; } ;
typedef TYPE_2__ centity_t ;
struct TYPE_9__ {scalar_t__ time; } ;
struct TYPE_8__ {int * gameSounds; } ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2( centity_t *VAR_3 ) {
 if ( ! VAR_3->currentState.clientNum ) {
  return;
 }

 if ( VAR_1.time < VAR_3->miscTime ) {
  return;
 }

 FUNC_1 (((void*)0), VAR_3->currentState.number, VAR_0, VAR_2.gameSounds[VAR_3->currentState.eventParm] );



 VAR_3->miscTime = VAR_1.time + VAR_3->currentState.frame * 100 + VAR_3->currentState.clientNum * 100 * FUNC_0();
}
