
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CIN_RunCinematic; int CIN_PlayCinematic; int CIN_UploadCinematic; int (* Cvar_Set ) (char*,char*) ;int Cvar_Get; int FS_FileExists; int FS_FileIsInPAK; int FS_ListFiles; int FS_FreeFileList; int FS_WriteFile; int FS_FreeFile; int FS_ReadFile; int CM_DrawDebugSurface; int Hunk_FreeTempMemory; int Hunk_AllocateTempMemory; int Hunk_Alloc; int Hunk_AllocDebug; int Free; int Malloc; int Milliseconds; int (* Error ) (int ,char*) ;int Printf; int Cmd_ExecuteText; int Cmd_Argv; int Cmd_Argc; int Cmd_RemoveCommand; int Cmd_AddCommand; } ;
typedef TYPE_1__ refimport_t ;
typedef int refexport_t ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int VAR_12 ;
 int FUNC_2 (char*,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int * FUNC_3 (int ,TYPE_1__*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_4 (int *) ;
 int VAR_27 ;

void FUNC_5( void ) {
 refimport_t VAR_28;
 refexport_t *VAR_29;

 FUNC_1( "----- Initializing Renderer ----\n" );

 VAR_28.Cmd_AddCommand = VAR_8;
 VAR_28.Cmd_RemoveCommand = VAR_11;
 VAR_28.Cmd_Argc = VAR_9;
 VAR_28.Cmd_Argv = VAR_10;
 VAR_28.Cmd_ExecuteText = VAR_7;
 VAR_28.Printf = VAR_4;
 VAR_28.Error = FUNC_0;
 VAR_28.Milliseconds = VAR_5;
 VAR_28.Malloc = VAR_3;
 VAR_28.Free = VAR_26;



 VAR_28.Hunk_Alloc = VAR_21;

 VAR_28.Hunk_AllocateTempMemory = VAR_23;
 VAR_28.Hunk_FreeTempMemory = VAR_24;
 VAR_28.CM_DrawDebugSurface = VAR_6;
 VAR_28.FS_ReadFile = VAR_19;
 VAR_28.FS_FreeFile = VAR_16;
 VAR_28.FS_WriteFile = VAR_20;
 VAR_28.FS_FreeFileList = VAR_17;
 VAR_28.FS_ListFiles = VAR_18;
 VAR_28.FS_FileIsInPAK = VAR_15;
 VAR_28.FS_FileExists = VAR_14;
 VAR_28.Cvar_Get = VAR_12;
 VAR_28.Cvar_Set = FUNC_2;



 VAR_28.CIN_UploadCinematic = VAR_2;
 VAR_28.CIN_PlayCinematic = VAR_0;
 VAR_28.CIN_RunCinematic = VAR_1;

 VAR_29 = FUNC_3( VAR_25, &VAR_28 );





 FUNC_1( "-------------------------------\n");

 if ( !VAR_29 ) {
  FUNC_0 (VAR_13, "Couldn't initialize refresh" );
 }

 VAR_27 = *VAR_29;


 FUNC_2( "cl_paused", "0" );
}
