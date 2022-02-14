
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int* vec3_t ;
struct TYPE_15__ {int* currentOrigin; } ;
struct TYPE_14__ {int clientNum; } ;
struct TYPE_18__ {TYPE_3__* client; TYPE_1__ r; TYPE_12__ s; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_16__ {scalar_t__ sessionTeam; } ;
struct TYPE_13__ {int* origin; int pm_time; int eFlags; int pm_flags; int velocity; } ;
struct TYPE_17__ {TYPE_2__ sess; TYPE_11__ ps; } ;


 int FUNC_0 (int*,int ,int *,int *) ;
 int FUNC_1 (TYPE_11__*,TYPE_12__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int*,int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_4__*,int*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (int*,int*) ;
 int FUNC_6 (int ,int,int ) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;

void FUNC_9( gentity_t *VAR_6, vec3_t VAR_7, vec3_t VAR_8 ) {
 gentity_t *VAR_9;



 if ( VAR_6->client->sess.sessionTeam != VAR_4 ) {
  VAR_9 = FUNC_3( VAR_6->client->ps.origin, VAR_2 );
  VAR_9->s.clientNum = VAR_6->s.clientNum;

  VAR_9 = FUNC_3( VAR_7, VAR_1 );
  VAR_9->s.clientNum = VAR_6->s.clientNum;
 }


 FUNC_8 (VAR_6);

 FUNC_5 ( VAR_7, VAR_6->client->ps.origin );
 VAR_6->client->ps.origin[2] += 1;


 FUNC_0( VAR_8, VAR_6->client->ps.velocity, ((void*)0), ((void*)0) );
 FUNC_6( VAR_6->client->ps.velocity, 400, VAR_6->client->ps.velocity );
 VAR_6->client->ps.pm_time = 160;
 VAR_6->client->ps.pm_flags |= VAR_3;


 VAR_6->client->ps.eFlags ^= VAR_0;


 FUNC_4( VAR_6, VAR_8 );


 if ( VAR_6->client->sess.sessionTeam != VAR_4 ) {
  FUNC_2 (VAR_6);
 }


 FUNC_1( &VAR_6->client->ps, &VAR_6->s, VAR_5 );


 FUNC_5( VAR_6->client->ps.origin, VAR_6->r.currentOrigin );

 if ( VAR_6->client->sess.sessionTeam != VAR_4 ) {
  FUNC_7 (VAR_6);
 }
}
