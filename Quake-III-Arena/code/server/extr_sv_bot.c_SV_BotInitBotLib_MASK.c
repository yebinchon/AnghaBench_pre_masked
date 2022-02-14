
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int DebugPolygonDelete; int DebugPolygonCreate; int DebugLineShow; int DebugLineDelete; int DebugLineCreate; int FS_Seek; int FS_FCloseFile; int FS_Write; int FS_Read; int FS_FOpenFile; int HunkAlloc; int AvailableMemory; int FreeMemory; int GetMemory; int BotClientCommand; int BSPModelMinsMaxsOrigin; int BSPEntityData; int inPVS; int PointContents; int EntityTrace; int Trace; int Print; } ;
typedef TYPE_1__ botlib_import_t ;
typedef int botlib_export_t ;
typedef int bot_debugpoly_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 () ;
 int VAR_23 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int VAR_24 ;
 int * VAR_25 ;
 scalar_t__ VAR_26 ;

void FUNC_8(void) {
 botlib_import_t VAR_27;

 if ( !FUNC_2("fs_restrict") && !FUNC_4() ) {
  FUNC_0( VAR_17, "Game CD not in drive" );
 }

 if (VAR_26) FUNC_5(VAR_26);
 VAR_24 = FUNC_1("bot_maxdebugpolys");
 VAR_26 = FUNC_6(sizeof(bot_debugpoly_t) * VAR_24);

 VAR_27.Print = VAR_14;
 VAR_27.Trace = VAR_15;
 VAR_27.EntityTrace = VAR_9;
 VAR_27.PointContents = VAR_13;
 VAR_27.inPVS = VAR_16;
 VAR_27.BSPEntityData = VAR_2;
 VAR_27.BSPModelMinsMaxsOrigin = VAR_3;
 VAR_27.BotClientCommand = VAR_1;


 VAR_27.GetMemory = VAR_11;
 VAR_27.FreeMemory = VAR_10;
 VAR_27.AvailableMemory = VAR_23;
 VAR_27.HunkAlloc = VAR_12;


 VAR_27.FS_FOpenFile = VAR_19;
 VAR_27.FS_Read = VAR_20;
 VAR_27.FS_Write = VAR_22;
 VAR_27.FS_FCloseFile = VAR_18;
 VAR_27.FS_Seek = VAR_21;


 VAR_27.DebugLineCreate = VAR_4;
 VAR_27.DebugLineDelete = VAR_5;
 VAR_27.DebugLineShow = VAR_6;


 VAR_27.DebugPolygonCreate = VAR_7;
 VAR_27.DebugPolygonDelete = VAR_8;

 VAR_25 = (botlib_export_t *)FUNC_3( VAR_0, &VAR_27 );
 FUNC_7(VAR_25);
}
