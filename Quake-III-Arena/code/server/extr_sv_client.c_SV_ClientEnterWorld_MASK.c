
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int usercmd_t ;
struct TYPE_7__ {int number; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
typedef TYPE_2__ sharedEntity_t ;
struct TYPE_9__ {int deltaMessage; int lastUsercmd; int nextSnapshotTime; TYPE_2__* gentity; int state; int name; } ;
typedef TYPE_3__ client_t ;
struct TYPE_10__ {TYPE_3__* clients; int time; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;

void FUNC_3( client_t *VAR_4, usercmd_t *VAR_5 ) {
 int VAR_6;
 sharedEntity_t *VAR_7;

 FUNC_0( "Going from CS_PRIMED to CS_ACTIVE for %s\n", VAR_4->name );
 VAR_4->state = VAR_0;


 VAR_6 = VAR_4 - VAR_3.clients;
 VAR_7 = FUNC_1( VAR_6 );
 VAR_7->s.number = VAR_6;
 VAR_4->gentity = VAR_7;

 VAR_4->deltaMessage = -1;
 VAR_4->nextSnapshotTime = VAR_3.time;
 VAR_4->lastUsercmd = *VAR_5;


 FUNC_2( VAR_2, VAR_1, VAR_4 - VAR_3.clients );
}
