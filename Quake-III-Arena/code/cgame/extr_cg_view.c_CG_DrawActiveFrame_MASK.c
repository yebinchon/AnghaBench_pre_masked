
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef scalar_t__ stereoFrame_t ;
typedef int qboolean ;
struct TYPE_20__ {scalar_t__ integer; } ;
struct TYPE_19__ {scalar_t__ integer; } ;
struct TYPE_18__ {scalar_t__ value; } ;
struct TYPE_17__ {scalar_t__ value; } ;
struct TYPE_16__ {float value; } ;
struct TYPE_15__ {int time; int viewaxis; int vieworg; int areamask; } ;
struct TYPE_13__ {scalar_t__* stats; int clientNum; } ;
struct TYPE_14__ {int snapFlags; TYPE_2__ ps; int areamask; } ;
struct TYPE_12__ {scalar_t__ hModel; } ;
struct TYPE_11__ {int time; scalar_t__* infoScreenText; int renderingThirdPerson; scalar_t__ frametime; scalar_t__ oldTime; int clientFrame; TYPE_4__ refdef; TYPE_3__* snap; TYPE_1__ testModelEntity; int predictedPlayerState; int hyperspace; int zoomSensitivity; int weaponSelect; int demoPlayback; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_10__ VAR_3 ;
 TYPE_9__ VAR_4 ;
 TYPE_8__ VAR_5 ;
 TYPE_7__ VAR_6 ;
 TYPE_6__ VAR_7 ;
 TYPE_5__ VAR_8 ;
 int FUNC_18 (int ,int ,int) ;
 int VAR_9 ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 () ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,int ,int ,int) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (char*,scalar_t__) ;

void FUNC_25( int VAR_10, stereoFrame_t VAR_11, qboolean VAR_12 ) {
 int VAR_13;

 VAR_3.time = VAR_10;
 VAR_3.demoPlayback = VAR_12;


 FUNC_17();



 if ( VAR_3.infoScreenText[0] != 0 ) {
  FUNC_10();
  return;
 }



 FUNC_21(VAR_9);


 FUNC_20();


 FUNC_16();



 if ( !VAR_3.snap || ( VAR_3.snap->snapFlags & VAR_0 ) ) {
  FUNC_10();
  return;
 }


 FUNC_23( VAR_3.weaponSelect, VAR_3.zoomSensitivity );


 VAR_3.clientFrame++;


 FUNC_14();


 VAR_3.renderingThirdPerson = VAR_5.integer || (VAR_3.snap->ps.stats[VAR_1] <= 0);


 VAR_13 = FUNC_7();


 if ( !VAR_3.renderingThirdPerson ) {
  FUNC_8();
 }


 if ( !VAR_3.hyperspace ) {
  FUNC_3();
  FUNC_2();
  FUNC_4 ();
  FUNC_1();
 }
 FUNC_6( &VAR_3.predictedPlayerState );


 FUNC_11();


 FUNC_12();


 if ( VAR_3.testModelEntity.hModel ) {
  FUNC_5();
 }
 VAR_3.refdef.time = VAR_3.time;
 FUNC_18( VAR_3.refdef.areamask, VAR_3.snap->areamask, sizeof( VAR_3.refdef.areamask ) );


 FUNC_13();


 FUNC_22( VAR_3.snap->ps.clientNum, VAR_3.refdef.vieworg, VAR_3.refdef.viewaxis, VAR_13 );


 if ( VAR_11 != VAR_2 ) {
  VAR_3.frametime = VAR_3.time - VAR_3.oldTime;
  if ( VAR_3.frametime < 0 ) {
   VAR_3.frametime = 0;
  }
  VAR_3.oldTime = VAR_3.time;
  FUNC_0();
 }
 if (VAR_6.value != VAR_7.value) {
  if (VAR_6.value < VAR_7.value) {
   VAR_6.value += VAR_8.value * ((float)VAR_3.frametime) / 1000;
   if (VAR_6.value > VAR_7.value)
    VAR_6.value = VAR_7.value;
  }
  else {
   VAR_6.value -= VAR_8.value * ((float)VAR_3.frametime) / 1000;
   if (VAR_6.value < VAR_7.value)
    VAR_6.value = VAR_7.value;
  }
  if (VAR_8.value) {
   FUNC_19("timescale", FUNC_24("%f", VAR_6.value));
  }
 }


 FUNC_9( VAR_11 );

 if ( VAR_4.integer ) {
  FUNC_15( "cg.clientFrame:%i\n", VAR_3.clientFrame );
 }


}
