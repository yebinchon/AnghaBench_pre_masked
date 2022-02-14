
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_15__ {int wiTrailTime; int trailRadius; } ;
typedef TYPE_2__ weaponInfo_t ;
typedef scalar_t__* vec3_t ;
struct TYPE_16__ {int leType; } ;
typedef TYPE_3__ localEntity_t ;
struct TYPE_13__ {scalar_t__ trType; } ;
struct TYPE_17__ {TYPE_12__ pos; } ;
typedef TYPE_4__ entityState_t ;
struct TYPE_18__ {int trailTime; TYPE_4__ currentState; } ;
typedef TYPE_5__ centity_t ;
struct TYPE_21__ {int time; } ;
struct TYPE_20__ {scalar_t__ integer; } ;
struct TYPE_14__ {int smokePuffShader; } ;
struct TYPE_19__ {TYPE_1__ media; } ;


 int FUNC_0 (TYPE_12__*,int,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,int) ;
 TYPE_3__* FUNC_3 (scalar_t__*,scalar_t__*,int ,int,int,int,float,int ,int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_8__ VAR_5 ;
 TYPE_7__ VAR_6 ;
 TYPE_6__ VAR_7 ;

__attribute__((used)) static void FUNC_4( centity_t *VAR_8, const weaponInfo_t *VAR_9 ) {
 int VAR_10;
 vec3_t VAR_11, VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;
 entityState_t *VAR_17;
 vec3_t VAR_18;
 localEntity_t *VAR_19;

 if ( VAR_6.integer ) {
  return;
 }

 VAR_18[0] = 0;
 VAR_18[1] = 0;
 VAR_18[2] = 0;

 VAR_10 = 50;

 VAR_17 = &VAR_8->currentState;
 VAR_14 = VAR_8->trailTime;
 VAR_13 = VAR_10 * ( (VAR_14 + VAR_10) / VAR_10 );

 FUNC_0( &VAR_17->pos, VAR_5.time, VAR_11 );
 VAR_15 = FUNC_2( VAR_11, -1 );


 if ( VAR_17->pos.trType == VAR_4 ) {
  VAR_8->trailTime = VAR_5.time;
  return;
 }

 FUNC_0( &VAR_17->pos, VAR_8->trailTime, VAR_12 );
 VAR_16 = FUNC_2( VAR_12, -1 );

 VAR_8->trailTime = VAR_5.time;

 if ( VAR_15 & ( VAR_2 | VAR_1 | VAR_0 ) ) {
  if ( VAR_15 & VAR_16 & VAR_2 ) {
   FUNC_1( VAR_12, VAR_11, 8 );
  }
  return;
 }

 for ( ; VAR_13 <= VAR_8->trailTime ; VAR_13 += VAR_10 ) {
  FUNC_0( &VAR_17->pos, VAR_13, VAR_12 );

  VAR_19 = FUNC_3( VAR_12, VAR_18,
       VAR_9->trailRadius,
       1, 1, 1, 0.33f,
       VAR_9->wiTrailTime,
       VAR_13,
       0,
       0,
       VAR_7.media.smokePuffShader );

  VAR_19->leType = VAR_3;
 }

}
