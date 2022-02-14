
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;


struct TYPE_29__ {int weapon; } ;
struct TYPE_30__ {TYPE_5__ s; TYPE_4__* client; } ;
typedef TYPE_6__ gentity_t ;
struct TYPE_27__ {int viewangles; scalar_t__* powerups; } ;
struct TYPE_28__ {int oldOrigin; TYPE_3__ ps; scalar_t__ accuracy_shots; TYPE_2__* persistantPowerup; } ;
struct TYPE_26__ {TYPE_1__* item; } ;
struct TYPE_25__ {scalar_t__ giTag; } ;
struct TYPE_24__ {int integer; } ;
struct TYPE_23__ {int value; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_6__*,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;
 int VAR_8 ;
 TYPE_12__ VAR_9 ;
 TYPE_11__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*) ;

void FUNC_14( gentity_t *VAR_15 ) {
 if (VAR_15->client->ps.powerups[VAR_7] ) {
  VAR_13 = VAR_10.value;
 } else {
  VAR_13 = 1;
 }







 if( VAR_15->s.weapon != 137 && VAR_15->s.weapon != 138 ) {







  VAR_15->client->accuracy_shots++;

 }


 FUNC_0 (VAR_15->client->ps.viewangles, VAR_8, VAR_12, VAR_14);

 FUNC_3 ( VAR_15, VAR_15->client->oldOrigin, VAR_8, VAR_12, VAR_14, VAR_11 );


 switch( VAR_15->s.weapon ) {
 case 138:
  FUNC_4( VAR_15 );
  break;
 case 135:
  FUNC_6( VAR_15 );
  break;
 case 128:
  FUNC_13( VAR_15 );
  break;
 case 134:
  if ( VAR_9.integer != VAR_1 ) {
   FUNC_2( VAR_15, VAR_3, VAR_2 );
  } else {
   FUNC_2( VAR_15, VAR_3, VAR_4 );
  }
  break;
 case 136:
  FUNC_10( VAR_15 );
  break;
 case 129:
  FUNC_9( VAR_15 );
  break;
 case 132:
  FUNC_8( VAR_15 );
  break;
 case 130:
  FUNC_12( VAR_15 );
  break;
 case 140:
  FUNC_1( VAR_15 );
  break;
 case 137:
  FUNC_5( VAR_15 );
  break;
 default:

  break;
 }
}
