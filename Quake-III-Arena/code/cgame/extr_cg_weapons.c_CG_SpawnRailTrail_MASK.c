
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
typedef int clientInfo_t ;
struct TYPE_7__ {int railgunImpact; scalar_t__ railgunFlash; } ;
struct TYPE_6__ {scalar_t__ weapon; size_t clientNum; } ;
struct TYPE_8__ {TYPE_2__ pe; TYPE_1__ currentState; } ;
typedef TYPE_3__ centity_t ;
struct TYPE_9__ {int * clientinfo; } ;


 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1( centity_t *VAR_3, vec3_t VAR_4 ) {
 clientInfo_t *VAR_5;

 if ( VAR_3->currentState.weapon != VAR_0 ) {
  return;
 }
 if ( !VAR_3->pe.railgunFlash ) {
  return;
 }
 VAR_3->pe.railgunFlash = VAR_2;
 VAR_5 = &VAR_1.clientinfo[ VAR_3->currentState.clientNum ];
 FUNC_0( VAR_5, VAR_4, VAR_3->pe.railgunImpact );
}
