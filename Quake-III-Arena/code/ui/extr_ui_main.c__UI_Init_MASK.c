
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_17__ {double vidHeight; double vidWidth; } ;
struct TYPE_18__ {double yscale; double xscale; double bias; void* (* registerShaderNoMip ) (char*) ;scalar_t__ (* getCVarValue ) (char*) ;void* whiteShader; void* cursor; int * runCinematicFrame; int * drawCinematic; int * stopCinematic; int * playCinematic; int * stopBackgroundTrack; int * startBackgroundTrack; int * registerSound; int * ownerDrawWidth; int * Pause; int * Print; int * Error; int * executeText; int * keynumToStringBuf; int * getBindingBuf; int * setBinding; int * feederSelection; int * feederItemText; int * feederItemImage; int * feederCount; int * ownerDrawHandleKey; int * startLocalSound; int * getOverstrikeMode; int * setOverstrikeMode; int * drawTextWithCursor; int getCVarString; int (* setCVar ) (char*,char*) ;int * getTeamColor; int * runScript; int * ownerDrawVisible; int * getValue; int * ownerDrawItem; int * registerFont; int * renderScene; int * addRefEntityToScene; int * drawSides; int * clearScene; int * drawTopBottom; int * drawRect; int * fillRect; int * modelBounds; int * registerModel; int * textHeight; int * textWidth; int * drawText; int * drawStretchPic; int * drawHandlePic; int * setColor; TYPE_8__ glconfig; } ;
struct TYPE_12__ {int currentServerCinematic; } ;
struct TYPE_16__ {int currentCrosshair; int previewMovie; TYPE_3__ serverStatus; int effectsColor; TYPE_2__* gameTypes; TYPE_1__* mapList; scalar_t__ inGameLoad; scalar_t__ aliasCount; scalar_t__ characterCount; scalar_t__ teamCount; TYPE_9__ uiDC; } ;
struct TYPE_15__ {size_t integer; } ;
struct TYPE_14__ {size_t integer; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_11__ {int gtEnum; } ;
struct TYPE_10__ {int mapLoadName; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_9__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 char* FUNC_5 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char const*,int ) ;
 int FUNC_10 () ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_13 () ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int * VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_14 (int *,char*,char*,int ) ;
 int FUNC_15 (char*,char*) ;
 int VAR_32 ;
 scalar_t__ FUNC_16 (char*) ;
 int FUNC_17 (TYPE_8__*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 void* FUNC_20 (char*) ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 TYPE_7__ VAR_49 ;
 TYPE_6__ VAR_50 ;
 TYPE_5__ VAR_51 ;
 TYPE_4__ VAR_52 ;
 char* FUNC_21 (char*,int ) ;

void FUNC_22( qboolean VAR_53 ) {
 const char *VAR_54;
 int VAR_55;



 FUNC_13();
 FUNC_6();


 FUNC_17( &VAR_49.uiDC.glconfig );


 VAR_49.uiDC.yscale = VAR_49.uiDC.glconfig.vidHeight * (1.0/480.0);
 VAR_49.uiDC.xscale = VAR_49.uiDC.glconfig.vidWidth * (1.0/640.0);
 if ( VAR_49.uiDC.glconfig.vidWidth * 480 > VAR_49.uiDC.glconfig.vidHeight * 640 ) {

  VAR_49.uiDC.bias = 0.5 * ( VAR_49.uiDC.glconfig.vidWidth - ( VAR_49.uiDC.glconfig.vidHeight * (640.0/480.0) ) );
 }
 else {

  VAR_49.uiDC.bias = 0;
 }



 VAR_49.uiDC.registerShaderNoMip = &FUNC_20;
 VAR_49.uiDC.setColor = &VAR_23;
 VAR_49.uiDC.drawHandlePic = &VAR_7;
 VAR_49.uiDC.drawStretchPic = &VAR_40;
 VAR_49.uiDC.drawText = &VAR_3;
 VAR_49.uiDC.textWidth = &VAR_5;
 VAR_49.uiDC.textHeight = &VAR_2;
 VAR_49.uiDC.registerModel = &VAR_43;
 VAR_49.uiDC.modelBounds = &VAR_41;
 VAR_49.uiDC.fillRect = &VAR_12;
 VAR_49.uiDC.drawRect = &VAR_25;
 VAR_49.uiDC.drawSides = &VAR_26;
 VAR_49.uiDC.drawTopBottom = &VAR_27;
 VAR_49.uiDC.clearScene = &VAR_39;
 VAR_49.uiDC.drawSides = &VAR_26;
 VAR_49.uiDC.addRefEntityToScene = &VAR_38;
 VAR_49.uiDC.renderScene = &VAR_44;
 VAR_49.uiDC.registerFont = &VAR_42;
 VAR_49.uiDC.ownerDrawItem = &VAR_15;
 VAR_49.uiDC.getValue = &VAR_14;
 VAR_49.uiDC.ownerDrawVisible = &VAR_17;
 VAR_49.uiDC.runScript = &VAR_22;
 VAR_49.uiDC.getTeamColor = &VAR_13;
 VAR_49.uiDC.setCVar = FUNC_15;
 VAR_49.uiDC.getCVarString = VAR_32;
 VAR_49.uiDC.getCVarValue = FUNC_16;
 VAR_49.uiDC.drawTextWithCursor = &VAR_4;
 VAR_49.uiDC.setOverstrikeMode = &VAR_37;
 VAR_49.uiDC.getOverstrikeMode = &VAR_34;
 VAR_49.uiDC.startLocalSound = &VAR_47;
 VAR_49.uiDC.ownerDrawHandleKey = &VAR_16;
 VAR_49.uiDC.feederCount = &VAR_8;
 VAR_49.uiDC.feederItemImage = &VAR_9;
 VAR_49.uiDC.feederItemText = &VAR_10;
 VAR_49.uiDC.feederSelection = &VAR_11;
 VAR_49.uiDC.setBinding = &VAR_36;
 VAR_49.uiDC.getBindingBuf = &VAR_33;
 VAR_49.uiDC.keynumToStringBuf = &VAR_35;
 VAR_49.uiDC.executeText = &VAR_31;
 VAR_49.uiDC.Error = &VAR_0;
 VAR_49.uiDC.Print = &VAR_1;
 VAR_49.uiDC.Pause = &VAR_19;
 VAR_49.uiDC.ownerDrawWidth = &VAR_18;
 VAR_49.uiDC.registerSound = &VAR_45;
 VAR_49.uiDC.startBackgroundTrack = &VAR_46;
 VAR_49.uiDC.stopBackgroundTrack = &VAR_48;
 VAR_49.uiDC.playCinematic = &VAR_20;
 VAR_49.uiDC.stopCinematic = &VAR_24;
 VAR_49.uiDC.drawCinematic = &VAR_6;
 VAR_49.uiDC.runCinematicFrame = &VAR_21;

 FUNC_1(&VAR_49.uiDC);

 FUNC_3();

 VAR_49.uiDC.cursor = FUNC_20( "menu/art/3_cursor2" );
 VAR_49.uiDC.whiteShader = FUNC_20( "white" );

 FUNC_0();

 VAR_55 = FUNC_19();

  VAR_49.teamCount = 0;
  VAR_49.characterCount = 0;
  VAR_49.aliasCount = 0;





 FUNC_12("teaminfo.txt");
 FUNC_10();
 FUNC_11("gameinfo.txt");


 VAR_54 = FUNC_5("ui_menuFiles");
 if (VAR_54 == ((void*)0) || VAR_54[0] == '\0') {
  VAR_54 = "ui/menus.txt";
 }







 FUNC_9(VAR_54, VAR_30);
 FUNC_9("ui/ingame.txt", VAR_29);


 FUNC_2();

 FUNC_18();
 FUNC_7(VAR_49.mapList[VAR_50.integer].mapLoadName, VAR_49.gameTypes[VAR_51.integer].gtEnum);

 FUNC_4();
 FUNC_8();


 VAR_49.effectsColor = VAR_28[(int)FUNC_16("color1")-1];
 VAR_49.currentCrosshair = (int)FUNC_16("cg_drawCrosshair");
 FUNC_15("ui_mousePitch", (FUNC_16("m_pitch") >= 0) ? "0" : "1");

 VAR_49.serverStatus.currentServerCinematic = -1;
 VAR_49.previewMovie = -1;

 if (FUNC_16("ui_TeamArenaFirstRun") == 0) {
  FUNC_15("s_volume", "0.8");
  FUNC_15("s_musicvolume", "0.5");
  FUNC_15("ui_TeamArenaFirstRun", "1");
 }

 FUNC_14(((void*)0), "debug_protocol", "", 0 );

 FUNC_15("ui_actualNetGameType", FUNC_21("%d", VAR_52.integer));
}
