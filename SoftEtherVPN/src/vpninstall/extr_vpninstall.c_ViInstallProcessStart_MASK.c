
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int wchar_t ;
typedef int instdir ;
typedef int info ;
typedef int hamcore ;
typedef int filename ;
typedef int exe ;
typedef int arg ;
struct TYPE_10__ {int CurrentInstalledPathW; int VpnCMgrExeFileName; scalar_t__ CurrentInstalled; int Build; } ;
typedef TYPE_1__ VI_SETTING_ARCH ;
struct TYPE_11__ {int NoClose; int WindowsShutdowning; } ;
typedef TYPE_2__ VI_INSTALL_DLG ;
struct TYPE_13__ {int DownloadNotRequired; int DownloadedSettingPathW; scalar_t__ NormalMode; scalar_t__ WebMode; int * DownloadedInstallerPathW; } ;
struct TYPE_12__ {int cbSize; char* lpVerb; char* lpParameters; int * hProcess; int nShow; int fMask; int * lpFile; } ;
typedef TYPE_3__ SHELLEXECUTEINFOW ;
typedef int * HWND ;
typedef int * HANDLE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,char*,char*) ;
 int FUNC_3 (int *,int,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int *,int *,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *,int,char*,char*,...) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (char*,int,int ) ;
 TYPE_1__* FUNC_19 () ;
 int FUNC_20 (TYPE_1__*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_21 (int *,int) ;
 int FUNC_22 (TYPE_3__*,int) ;
 int FUNC_23 (scalar_t__) ;
 TYPE_4__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;

void FUNC_24(HWND VAR_14, VI_INSTALL_DLG *VAR_15)
{
 wchar_t *VAR_16;
 bool VAR_17;
 char VAR_18[VAR_3];
 char VAR_19[VAR_3];

 if (VAR_14 == ((void*)0) || VAR_15 == ((void*)0))
 {
  return;
 }

 FUNC_18(VAR_18, sizeof(VAR_18), FUNC_19()->Build);
 FUNC_2(VAR_19, sizeof(VAR_19), VAR_18, "hamcore.se2");

 VAR_16 = VAR_11.DownloadedInstallerPathW;
 VAR_15->NoClose = 1;

 FUNC_5(VAR_14, VAR_0);
 FUNC_10(VAR_14, VAR_5, 100);
 FUNC_5(VAR_14, VAR_5);
 FUNC_5(VAR_14, VAR_8);
 FUNC_11(VAR_14, VAR_9, FUNC_23(VAR_1+VAR_12));

 VAR_17 = 1;

 if (VAR_11.DownloadNotRequired == 0)
 {
  if (VAR_11.WebMode && FUNC_17(VAR_14, VAR_16) == 0)
  {

   VAR_17 = 0;
  }
  else
  {

   HANDLE VAR_20;
   SHELLEXECUTEINFOW VAR_21;


   FUNC_22(&VAR_21, sizeof(VAR_21));
   VAR_21.cbSize = sizeof(VAR_21);
   VAR_21.lpVerb = L"open";
   VAR_21.lpFile = VAR_16;
   VAR_21.fMask = VAR_6;
   VAR_21.lpParameters = L"/HIDESTARTCOMMAND:1 /DISABLEAUTOIMPORT:1 /ISWEBINSTALLER:1";
   VAR_21.nShow = VAR_7;
   if (FUNC_12(&VAR_21) == 0)
   {
    FUNC_9(VAR_14, VAR_4, FUNC_23(VAR_2+VAR_12));
    VAR_17 = 0;
   }
   else
   {
    VAR_20 = VAR_21.hProcess;


    while (1)
    {
     if (FUNC_21(VAR_20, 50) != VAR_10)
     {
      break;
     }

     FUNC_4(VAR_14);
    }
    FUNC_1(VAR_20);
   }
  }
 }

 if (VAR_17 && VAR_15->WindowsShutdowning == 0)
 {
  VI_SETTING_ARCH *VAR_22 = FUNC_19();
  wchar_t VAR_23[VAR_3];
  wchar_t VAR_24[VAR_3];
  char *VAR_25 = "/easy";

  FUNC_5(VAR_14, 0);

  if (VAR_11.NormalMode)
  {
   VAR_25 = "/normal";
  }


  if (FUNC_6("vpnclient") == 0)
  {
   FUNC_8("vpnclient");
  }


  FUNC_14(0);

  if (FUNC_16(VAR_11.DownloadedSettingPathW) == 0)
  {

   FUNC_15(VAR_23, sizeof(VAR_23), L"%S \"%s\"", VAR_25, VAR_11.DownloadedSettingPathW);
  }
  else
  {

   FUNC_15(VAR_23, sizeof(VAR_23), L"%S", VAR_25);
  }


  FUNC_20(VAR_22);

  if (VAR_22->CurrentInstalled)
  {
   HANDLE VAR_26;
   wchar_t VAR_27[VAR_3];

   FUNC_13(VAR_27, sizeof(VAR_27), VAR_22->VpnCMgrExeFileName);

   FUNC_3(VAR_24, sizeof(VAR_24), VAR_22->CurrentInstalledPathW, VAR_27);


   VAR_26 = FUNC_7(VAR_24, VAR_23, 0);
   if (VAR_26 != ((void*)0))
   {
    if (FUNC_16(VAR_11.DownloadedSettingPathW) == 0)
    {
     VAR_13 = 1;
    }

    FUNC_1(VAR_26);
   }
  }
 }

 VAR_15->NoClose = 0;
 FUNC_0(VAR_14);
}
