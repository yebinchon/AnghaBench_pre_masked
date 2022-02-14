
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sharedEntity_t ;
typedef int playerState_t ;
struct TYPE_2__ {int gentitySize; int num_entities; int gameClientSize; int * gameClients; int * gentities; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0( sharedEntity_t *VAR_1, int VAR_2, int VAR_3,
        playerState_t *VAR_4, int VAR_5 ) {
 VAR_0.gentities = VAR_1;
 VAR_0.gentitySize = VAR_3;
 VAR_0.num_entities = VAR_2;

 VAR_0.gameClients = VAR_4;
 VAR_0.gameClientSize = VAR_5;
}
