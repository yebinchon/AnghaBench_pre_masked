
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int loopSound; scalar_t__ eType; int constantLight; int number; } ;
struct TYPE_7__ {int lerpOrigin; TYPE_1__ currentState; } ;
typedef TYPE_2__ centity_t ;
struct TYPE_8__ {int * gameSounds; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int ,int,int,int,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4( centity_t *VAR_3 ) {


 FUNC_0( VAR_3 );


 if ( VAR_3->currentState.loopSound ) {
  if (VAR_3->currentState.eType != VAR_0) {
   FUNC_2( VAR_3->currentState.number, VAR_3->lerpOrigin, VAR_2,
    VAR_1.gameSounds[ VAR_3->currentState.loopSound ] );
  } else {
   FUNC_3( VAR_3->currentState.number, VAR_3->lerpOrigin, VAR_2,
    VAR_1.gameSounds[ VAR_3->currentState.loopSound ] );
  }
 }



 if ( VAR_3->currentState.constantLight ) {
  int VAR_4;
  int VAR_5, VAR_6, VAR_7, VAR_8;

  VAR_4 = VAR_3->currentState.constantLight;
  VAR_6 = VAR_4 & 255;
  VAR_7 = ( VAR_4 >> 8 ) & 255;
  VAR_8 = ( VAR_4 >> 16 ) & 255;
  VAR_5 = ( ( VAR_4 >> 24 ) & 255 ) * 4;
  FUNC_1( VAR_3->lerpOrigin, VAR_5, VAR_6, VAR_7, VAR_8 );
 }

}
