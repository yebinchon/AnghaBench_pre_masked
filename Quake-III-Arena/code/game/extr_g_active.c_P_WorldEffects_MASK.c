
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_11__ {int waterlevel; int health; int damage; scalar_t__ pain_debounce_time; int watertype; TYPE_2__* client; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_12__ {scalar_t__ time; } ;
struct TYPE_9__ {scalar_t__* powerups; } ;
struct TYPE_10__ {scalar_t__ airOutTime; TYPE_1__ ps; scalar_t__ noclip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int *,int *,int *,int *,int,int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 TYPE_4__ VAR_9 ;
 int FUNC_4 () ;

void FUNC_5( gentity_t *VAR_10 ) {
 qboolean VAR_11;
 int VAR_12;

 if ( VAR_10->client->noclip ) {
  VAR_10->client->airOutTime = VAR_9.time + 12000;
  return;
 }

 VAR_12 = VAR_10->waterlevel;

 VAR_11 = VAR_10->client->ps.powerups[VAR_8] > VAR_9.time;




 if ( VAR_12 == 3 ) {

  if ( VAR_11 ) {
   VAR_10->client->airOutTime = VAR_9.time + 10000;
  }


  if ( VAR_10->client->airOutTime < VAR_9.time) {

   VAR_10->client->airOutTime += 1000;
   if ( VAR_10->health > 0 ) {

    VAR_10->damage += 2;
    if (VAR_10->damage > 15)
     VAR_10->damage = 15;


    if (VAR_10->health <= VAR_10->damage) {
     FUNC_2(VAR_10, VAR_0, FUNC_3("*drown.wav"));
    } else if (FUNC_4()&1) {
     FUNC_2(VAR_10, VAR_0, FUNC_3("sound/player/gurp1.wav"));
    } else {
     FUNC_2(VAR_10, VAR_0, FUNC_3("sound/player/gurp2.wav"));
    }


    VAR_10->pain_debounce_time = VAR_9.time + 200;

    FUNC_1 (VAR_10, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
     VAR_10->damage, VAR_3, VAR_7);
   }
  }
 } else {
  VAR_10->client->airOutTime = VAR_9.time + 12000;
  VAR_10->damage = 2;
 }




 if (VAR_12 &&
  (VAR_10->watertype&(VAR_1|VAR_2)) ) {
  if (VAR_10->health > 0
   && VAR_10->pain_debounce_time <= VAR_9.time ) {

   if ( VAR_11 ) {
    FUNC_0( VAR_10, VAR_4, 0 );
   } else {
    if (VAR_10->watertype & VAR_1) {
     FUNC_1 (VAR_10, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
      30*VAR_12, 0, VAR_5);
    }

    if (VAR_10->watertype & VAR_2) {
     FUNC_1 (VAR_10, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
      10*VAR_12, 0, VAR_6);
    }
   }
  }
 }
}
