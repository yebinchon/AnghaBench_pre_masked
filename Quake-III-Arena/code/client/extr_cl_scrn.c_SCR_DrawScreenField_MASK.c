
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int stereoFrame_t ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {scalar_t__ integer; } ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_7__ {int vidWidth; int vidHeight; } ;
struct TYPE_9__ {int state; int keyCatchers; int realtime; int whiteShader; TYPE_1__ glconfig; } ;
struct TYPE_8__ {int (* SetColor ) (int *) ;int (* DrawStretchPic ) (int ,int ,int,int,int ,int ,int ,int ,int ) ;int (* BeginFrame ) (int ) ;} ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (scalar_t__,int ,...) ;
 TYPE_6__* VAR_7 ;
 TYPE_5__* VAR_8 ;
 TYPE_4__* VAR_9 ;
 TYPE_3__ VAR_10 ;
 int ** VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__ VAR_14 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int,int,int ,int ,int ,int ,int ) ;
 int FUNC_12 (int *) ;
 scalar_t__ VAR_15 ;

void FUNC_13( stereoFrame_t VAR_16 ) {
 VAR_14.BeginFrame( VAR_16 );



 if ( VAR_10.state != 135 ) {
  if ( VAR_10.glconfig.vidWidth * 480 > VAR_10.glconfig.vidHeight * 640 ) {
   VAR_14.SetColor( VAR_11[0] );
   VAR_14.DrawStretchPic( 0, 0, VAR_10.glconfig.vidWidth, VAR_10.glconfig.vidHeight, 0, 0, 0, 0, VAR_10.whiteShader );
   VAR_14.SetColor( ((void*)0) );
  }
 }

 if ( !VAR_15 ) {
  FUNC_1("draw screen without UI loaded\n");
  return;
 }



 if ( !FUNC_8( VAR_15, VAR_4 )) {
  switch( VAR_10.state ) {
  default:
   FUNC_2( VAR_0, "SCR_DrawScreenField: bad cls.state" );
   break;
  case 133:
   FUNC_4();
   break;
  case 130:

   FUNC_7();
   FUNC_8( VAR_15, VAR_6, VAR_2 );
   break;
  case 131:
  case 134:
  case 132:


   FUNC_8( VAR_15, VAR_5, VAR_10.realtime );
   FUNC_8( VAR_15, VAR_3, VAR_12 );
   break;
  case 129:
  case 128:

   FUNC_0( VAR_16 );




   FUNC_8( VAR_15, VAR_5, VAR_10.realtime );
   FUNC_8( VAR_15, VAR_3, VAR_13 );
   break;
  case 135:
   FUNC_0( VAR_16 );
   FUNC_6();
   break;
  }
 }


 if ( VAR_10.keyCatchers & VAR_1 && VAR_15 ) {
  FUNC_8( VAR_15, VAR_5, VAR_10.realtime );
 }


 FUNC_3 ();


 if ( VAR_8->integer || VAR_9->integer || VAR_7->integer ) {
  FUNC_5 ();
 }
}
