
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
struct TYPE_3__ {int Supported; int CurrentInstalled; int CurrentInstalledPathW; scalar_t__ CurrentInstalledBuild; } ;
typedef TYPE_1__ VI_SETTING_ARCH ;
typedef scalar_t__ UINT ;


 int FUNC_0 (char*,int,char*,int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,char*,char*,int,int) ;
 int * FUNC_3 (int ,char*,char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int,int *) ;

void FUNC_6(VI_SETTING_ARCH *VAR_3)
{
 char VAR_4[VAR_0];
 UINT VAR_5;
 wchar_t *VAR_6;

 if (VAR_3 == ((void*)0))
 {
  return;
 }
 if (VAR_3->Supported == 0)
 {

  return;
 }


 FUNC_0(VAR_4, sizeof(VAR_4), "%s\\%s", VAR_2, "vpnclient");

 VAR_5 = FUNC_2(VAR_1, VAR_4, "InstalledBuild", 0, 1);

 VAR_6 = FUNC_3(VAR_1, VAR_4, "InstalledDir", 0, 1);

 if (VAR_5 == 0 || FUNC_4(VAR_6))
 {

  VAR_3->CurrentInstalled = 0;
 }
 else
 {

  VAR_3->CurrentInstalled = 1;
  VAR_3->CurrentInstalledBuild = VAR_5;

  FUNC_5(VAR_3->CurrentInstalledPathW, sizeof(VAR_3->CurrentInstalledPathW), VAR_6);
 }

 FUNC_1(VAR_6);
}
