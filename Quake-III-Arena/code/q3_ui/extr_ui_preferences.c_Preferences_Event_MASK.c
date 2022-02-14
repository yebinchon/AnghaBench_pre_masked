
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_16__ {int id; } ;
typedef TYPE_12__ menucommon_s ;
struct TYPE_26__ {int curvalue; } ;
struct TYPE_25__ {int curvalue; } ;
struct TYPE_24__ {int curvalue; } ;
struct TYPE_23__ {int curvalue; } ;
struct TYPE_22__ {int curvalue; } ;
struct TYPE_21__ {int curvalue; } ;
struct TYPE_20__ {int curvalue; } ;
struct TYPE_19__ {int curvalue; } ;
struct TYPE_18__ {int curvalue; } ;
struct TYPE_15__ {int curvalue; } ;
struct TYPE_14__ {int curvalue; } ;
struct TYPE_17__ {TYPE_11__ allowdownload; TYPE_10__ drawteamoverlay; TYPE_9__ forcemodel; TYPE_8__ synceveryframe; TYPE_7__ identifytarget; TYPE_6__ dynamiclights; TYPE_5__ wallmarks; TYPE_4__ brass; TYPE_3__ highqualitysky; TYPE_2__ simpleitems; TYPE_1__ crosshair; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_13__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3( void* VAR_3, int VAR_4 ) {
 if( VAR_4 != VAR_1 ) {
  return;
 }

 switch( ((menucommon_s*)VAR_3)->id ) {
 case 137:
  VAR_2.crosshair.curvalue++;
  if( VAR_2.crosshair.curvalue == VAR_0 ) {
   VAR_2.crosshair.curvalue = 0;
  }
  FUNC_2( "cg_drawCrosshair", VAR_2.crosshair.curvalue );
  break;

 case 130:
  FUNC_2( "cg_simpleItems", VAR_2.simpleitems.curvalue );
  break;

 case 132:
  FUNC_2( "r_fastsky", !VAR_2.highqualitysky.curvalue );
  break;

 case 134:
  if ( VAR_2.brass.curvalue )
   FUNC_1( "cg_brassTime" );
  else
   FUNC_2( "cg_brassTime", 0 );
  break;

 case 128:
  FUNC_2( "cg_marks", VAR_2.wallmarks.curvalue );
  break;

 case 135:
  FUNC_2( "r_dynamiclight", VAR_2.dynamiclights.curvalue );
  break;

 case 131:
  FUNC_2( "cg_drawCrosshairNames", VAR_2.identifytarget.curvalue );
  break;

 case 129:
  FUNC_2( "r_finish", VAR_2.synceveryframe.curvalue );
  break;

 case 133:
  FUNC_2( "cg_forcemodel", VAR_2.forcemodel.curvalue );
  break;

 case 136:
  FUNC_2( "cg_drawTeamOverlay", VAR_2.drawteamoverlay.curvalue );
  break;

 case 139:
  FUNC_2( "cl_allowDownload", VAR_2.allowdownload.curvalue );
  FUNC_2( "sv_allowDownload", VAR_2.allowdownload.curvalue );
  break;

 case 138:
  FUNC_0();
  break;
 }
}
