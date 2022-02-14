
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ Build; int Supported; int Path; int VpnCMgrExeFileName; } ;
struct TYPE_9__ {scalar_t__ VpnInstallBuild; TYPE_1__ x86; int SettingPath; int NormalMode; } ;
typedef TYPE_2__ VI_SETTING ;
struct TYPE_10__ {int NumTokens; char** Token; } ;
typedef TYPE_3__ TOKEN_LIST ;
typedef int BUF ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 TYPE_3__* FUNC_5 (char*,char*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (int ,int,char*) ;
 int FUNC_10 (char*) ;
 void* FUNC_11 (char*) ;
 int FUNC_12 (TYPE_2__*,int) ;

bool FUNC_13(VI_SETTING *VAR_0, BUF *VAR_1)
{
 bool VAR_2;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_12(VAR_0, sizeof(VI_SETTING));

 FUNC_6(VAR_1, 0, 0);
 while (1)
 {
  char *VAR_3 = FUNC_0(VAR_1);
  TOKEN_LIST *VAR_4;

  if (VAR_3 == ((void*)0))
  {
   break;
  }

  VAR_4 = FUNC_5(VAR_3, " \t");

  if (VAR_4 != ((void*)0))
  {
   if (VAR_4->NumTokens >= 2)
   {
    if (FUNC_7(VAR_4->Token[0], "#") == 0
     || FUNC_7(VAR_4->Token[0], "//") == 0)
    {
     char *VAR_5, *VAR_6;
     VAR_5 = VAR_4->Token[0];
     VAR_6 = VAR_4->Token[1];

     if (FUNC_8(VAR_5, "VpnInstallBuild") == 0)
     {
      VAR_0->VpnInstallBuild = FUNC_11(VAR_6);
     }
     else if (FUNC_8(VAR_5, "NormalMode") == 0)
     {
      VAR_0->NormalMode = FUNC_10(VAR_6);
     }
     else if (FUNC_8(VAR_5, "VpnSettingPath") == 0)
     {
      FUNC_9(VAR_0->SettingPath, sizeof(VAR_0->SettingPath), VAR_6);
     }
     else if (FUNC_8(VAR_5, "VpnClientBuild") == 0)
     {
      VAR_0->x86.Build = FUNC_11(VAR_6);
     }
     else if (FUNC_8(VAR_5, "VpnClientPath") == 0)
     {
      FUNC_9(VAR_0->x86.Path, sizeof(VAR_0->x86.Path), VAR_6);
     }
    }
   }
   FUNC_2(VAR_4);
  }

  FUNC_1(VAR_3);
 }

 VAR_2 = 0;

 FUNC_9(VAR_0->x86.VpnCMgrExeFileName, sizeof(VAR_0->x86.VpnCMgrExeFileName), (FUNC_4() ? "vpncmgr_x64.exe" : "vpncmgr.exe"));

 if (VAR_0->VpnInstallBuild != 0)
 {
  if (VAR_0->x86.Build != 0 && FUNC_3(VAR_0->x86.Path) == 0)
  {
   VAR_0->x86.Supported = 1;
   VAR_2 = 1;
  }
 }

 return VAR_2;
}
