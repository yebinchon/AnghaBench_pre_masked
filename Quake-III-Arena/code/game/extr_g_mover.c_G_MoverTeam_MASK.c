
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef int vec3_t ;
struct TYPE_13__ {scalar_t__ trTime; scalar_t__ trType; scalar_t__ trDuration; } ;
struct TYPE_15__ {TYPE_12__ pos; TYPE_12__ apos; } ;
struct TYPE_14__ {int currentAngles; int currentOrigin; } ;
struct TYPE_16__ {int (* reached ) (TYPE_3__*) ;TYPE_2__ s; struct TYPE_16__* teamchain; int (* blocked ) (TYPE_3__*,TYPE_3__*) ;TYPE_1__ r; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_17__ {scalar_t__ time; scalar_t__ previousTime; } ;


 int FUNC_0 (TYPE_12__*,scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ,TYPE_3__**) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ,int ) ;
 TYPE_8__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

void FUNC_6( gentity_t *VAR_4 ) {
 vec3_t VAR_5, VAR_6;
 gentity_t *VAR_7, *VAR_8;
 vec3_t VAR_9, VAR_10;

 VAR_8 = ((void*)0);




 VAR_3 = VAR_2;
 for (VAR_7 = VAR_4 ; VAR_7 ; VAR_7=VAR_7->teamchain) {

  FUNC_0( &VAR_7->s.pos, VAR_1.time, VAR_9 );
  FUNC_0( &VAR_7->s.apos, VAR_1.time, VAR_10 );
  FUNC_2( VAR_9, VAR_7->r.currentOrigin, VAR_5 );
  FUNC_2( VAR_10, VAR_7->r.currentAngles, VAR_6 );
  if ( !FUNC_1( VAR_7, VAR_5, VAR_6, &VAR_8 ) ) {
   break;
  }
 }

 if (VAR_7) {

  for ( VAR_7 = VAR_4 ; VAR_7 ; VAR_7 = VAR_7->teamchain ) {
   VAR_7->s.pos.trTime += VAR_1.time - VAR_1.previousTime;
   VAR_7->s.apos.trTime += VAR_1.time - VAR_1.previousTime;
   FUNC_0( &VAR_7->s.pos, VAR_1.time, VAR_7->r.currentOrigin );
   FUNC_0( &VAR_7->s.apos, VAR_1.time, VAR_7->r.currentAngles );
   FUNC_5( VAR_7 );
  }


  if (VAR_4->blocked) {
   VAR_4->blocked( VAR_4, VAR_8 );
  }
  return;
 }


 for ( VAR_7 = VAR_4 ; VAR_7 ; VAR_7 = VAR_7->teamchain ) {

  if ( VAR_7->s.pos.trType == VAR_0 ) {
   if ( VAR_1.time >= VAR_7->s.pos.trTime + VAR_7->s.pos.trDuration ) {
    if ( VAR_7->reached ) {
     VAR_7->reached( VAR_7 );
    }
   }
  }
 }
}
