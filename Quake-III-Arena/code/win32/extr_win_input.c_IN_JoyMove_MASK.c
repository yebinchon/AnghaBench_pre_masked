
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int sysMsgTime; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {int value; } ;
struct TYPE_11__ {int dwSize; int dwButtons; scalar_t__ dwPOV; int dwVpos; int dwUpos; int dwXpos; int dwRpos; int dwZpos; int dwYpos; int dwFlags; } ;
struct TYPE_9__ {int wNumButtons; int wNumAxes; int wCaps; } ;
struct TYPE_12__ {int oldbuttonstate; int oldpovstate; TYPE_3__ ji; TYPE_1__ jc; int id; int avail; } ;
struct TYPE_10__ {float value; } ;
typedef int DWORD ;


 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (char*,int,scalar_t__,float,float,float,float,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 float FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int ,int,int,int ,int *) ;
 TYPE_7__ VAR_11 ;
 TYPE_6__* VAR_12 ;
 TYPE_5__* VAR_13 ;
 TYPE_4__ VAR_14 ;
 int* VAR_15 ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*) ;
 TYPE_2__* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void FUNC_6( void ) {
 float VAR_19;
 int VAR_20;
 DWORD VAR_21, VAR_22;
 int VAR_23, VAR_24;


 if ( !VAR_14.avail ) {
  return;
 }


 FUNC_0 (&VAR_14.ji, 0, sizeof(VAR_14.ji));
 VAR_14.ji.dwSize = sizeof(VAR_14.ji);
 VAR_14.ji.dwFlags = VAR_7;

 if ( FUNC_5 (VAR_14.id, &VAR_14.ji) != VAR_1 ) {





  return;
 }

 if ( VAR_12->integer ) {
  FUNC_1( "%8x %5i %5.2f %5.2f %5.2f %5.2f %6i %6i\n",
   VAR_14.ji.dwButtons,
   VAR_14.ji.dwPOV,
   FUNC_2( VAR_14.ji.dwXpos ), FUNC_2( VAR_14.ji.dwYpos ),
   FUNC_2( VAR_14.ji.dwZpos ), FUNC_2( VAR_14.ji.dwRpos ),
   FUNC_3( VAR_14.ji.dwUpos ), FUNC_3( VAR_14.ji.dwVpos ) );
 }



 VAR_21 = VAR_14.ji.dwButtons;
 for ( VAR_20=0 ; VAR_20 < VAR_14.jc.wNumButtons ; VAR_20++ ) {
  if ( (VAR_21 & (1<<VAR_20)) && !(VAR_14.oldbuttonstate & (1<<VAR_20)) ) {
   FUNC_4( VAR_11.sysMsgTime, VAR_9, VAR_8 + VAR_20, VAR_18, 0, ((void*)0) );
  }
  if ( !(VAR_21 & (1<<VAR_20)) && (VAR_14.oldbuttonstate & (1<<VAR_20)) ) {
   FUNC_4( VAR_11.sysMsgTime, VAR_9, VAR_8 + VAR_20, VAR_17, 0, ((void*)0) );
  }
 }
 VAR_14.oldbuttonstate = VAR_21;

 VAR_22 = 0;


 for (VAR_20 = 0; VAR_20 < VAR_14.jc.wNumAxes && VAR_20 < 4 ; VAR_20++) {

  VAR_19 = FUNC_2( (&VAR_14.ji.dwXpos)[VAR_20] );

  if ( VAR_19 < -VAR_16->value ) {
   VAR_22 |= (1<<(VAR_20*2));
  } else if ( VAR_19 > VAR_16->value ) {
   VAR_22 |= (1<<(VAR_20*2+1));
  }
 }


 if ( VAR_14.jc.wCaps & VAR_0 ) {
  if ( VAR_14.ji.dwPOV != VAR_3 ) {
   if (VAR_14.ji.dwPOV == VAR_4)
    VAR_22 |= 1<<12;
   if (VAR_14.ji.dwPOV == VAR_2)
    VAR_22 |= 1<<13;
   if (VAR_14.ji.dwPOV == VAR_6)
    VAR_22 |= 1<<14;
   if (VAR_14.ji.dwPOV == VAR_5)
    VAR_22 |= 1<<15;
  }
 }


 for (VAR_20=0 ; VAR_20 < 16 ; VAR_20++) {
  if ( (VAR_22 & (1<<VAR_20)) && !(VAR_14.oldpovstate & (1<<VAR_20)) ) {
   FUNC_4( VAR_11.sysMsgTime, VAR_9, VAR_15[VAR_20], VAR_18, 0, ((void*)0) );
  }

  if ( !(VAR_22 & (1<<VAR_20)) && (VAR_14.oldpovstate & (1<<VAR_20)) ) {
   FUNC_4( VAR_11.sysMsgTime, VAR_9, VAR_15[VAR_20], VAR_17, 0, ((void*)0) );
  }
 }
 VAR_14.oldpovstate = VAR_22;


 if ( VAR_14.jc.wNumAxes >= 6 ) {
  VAR_23 = FUNC_3( VAR_14.ji.dwUpos ) * VAR_13->value;
  VAR_24 = FUNC_3( VAR_14.ji.dwVpos ) * VAR_13->value;
  if ( VAR_23 || VAR_24 ) {
   FUNC_4( VAR_11.sysMsgTime, VAR_10, VAR_23, VAR_24, 0, ((void*)0) );
  }
 }
}
