
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
typedef int stereoFrame_t ;
struct TYPE_8__ {int vieworg; int * viewaxis; } ;
struct TYPE_10__ {TYPE_3__ refdef; TYPE_2__* snap; } ;
struct TYPE_9__ {int value; } ;
struct TYPE_6__ {scalar_t__* persistant; int pm_flags; } ;
struct TYPE_7__ {TYPE_1__ ps; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 size_t VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,float,int ,int ) ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_7 (TYPE_3__*) ;

void FUNC_8( stereoFrame_t VAR_5 ) {
 float VAR_6;
 vec3_t VAR_7;


 if ( !VAR_3.snap ) {
  FUNC_1();
  return;
 }


 if ( VAR_3.snap->ps.persistant[VAR_0] == VAR_2 &&
  ( VAR_3.snap->ps.pm_flags & VAR_1 ) ) {
  FUNC_2();
  return;
 }

 switch ( VAR_5 ) {
 case 130:
  VAR_6 = 0;
  break;
 case 129:
  VAR_6 = -VAR_4.value / 2;
  break;
 case 128:
  VAR_6 = VAR_4.value / 2;
  break;
 default:
  VAR_6 = 0;
  FUNC_3( "CG_DrawActive: Undefined stereoView" );
 }



 FUNC_4();


 FUNC_5( VAR_3.refdef.vieworg, VAR_7 );
 if ( VAR_6 != 0 ) {
  FUNC_6( VAR_3.refdef.vieworg, -VAR_6, VAR_3.refdef.viewaxis[1], VAR_3.refdef.vieworg );
 }


 FUNC_7( &VAR_3.refdef );


 if ( VAR_6 != 0 ) {
  FUNC_5( VAR_7, VAR_3.refdef.vieworg );
 }


  FUNC_0();
}
