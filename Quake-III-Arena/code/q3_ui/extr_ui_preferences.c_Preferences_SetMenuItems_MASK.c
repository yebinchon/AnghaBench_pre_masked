
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_24__ {int curvalue; } ;
struct TYPE_23__ {int curvalue; } ;
struct TYPE_22__ {int curvalue; } ;
struct TYPE_21__ {int curvalue; } ;
struct TYPE_20__ {int curvalue; } ;
struct TYPE_19__ {int curvalue; } ;
struct TYPE_18__ {int curvalue; } ;
struct TYPE_17__ {int curvalue; } ;
struct TYPE_16__ {int curvalue; } ;
struct TYPE_14__ {int curvalue; } ;
struct TYPE_13__ {int curvalue; } ;
struct TYPE_15__ {TYPE_11__ allowdownload; TYPE_10__ drawteamoverlay; TYPE_9__ forcemodel; TYPE_8__ synceveryframe; TYPE_7__ highqualitysky; TYPE_6__ dynamiclights; TYPE_5__ identifytarget; TYPE_4__ wallmarks; TYPE_3__ brass; TYPE_2__ simpleitems; TYPE_1__ crosshair; } ;


 int FUNC_0 (int ,int,scalar_t__) ;
 int VAR_0 ;
 TYPE_12__ VAR_1 ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2( void ) {
 VAR_1.crosshair.curvalue = (int)FUNC_1( "cg_drawCrosshair" ) % VAR_0;
 VAR_1.simpleitems.curvalue = FUNC_1( "cg_simpleItems" ) != 0;
 VAR_1.brass.curvalue = FUNC_1( "cg_brassTime" ) != 0;
 VAR_1.wallmarks.curvalue = FUNC_1( "cg_marks" ) != 0;
 VAR_1.identifytarget.curvalue = FUNC_1( "cg_drawCrosshairNames" ) != 0;
 VAR_1.dynamiclights.curvalue = FUNC_1( "r_dynamiclight" ) != 0;
 VAR_1.highqualitysky.curvalue = FUNC_1 ( "r_fastsky" ) == 0;
 VAR_1.synceveryframe.curvalue = FUNC_1( "r_finish" ) != 0;
 VAR_1.forcemodel.curvalue = FUNC_1( "cg_forcemodel" ) != 0;
 VAR_1.drawteamoverlay.curvalue = FUNC_0( 0, 3, FUNC_1( "cg_drawTeamOverlay" ) );
 VAR_1.allowdownload.curvalue = FUNC_1( "cl_allowDownload" ) != 0;
}
