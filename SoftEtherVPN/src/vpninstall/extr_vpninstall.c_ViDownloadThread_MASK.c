
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int files ;
typedef int filename_w ;
struct TYPE_8__ {int Path; } ;
typedef TYPE_1__ VI_SETTING_ARCH ;
struct TYPE_9__ {int Buf; int BufSize; scalar_t__ Halt; int hWnd; } ;
typedef TYPE_2__ VI_INSTALL_DLG ;
typedef int VI_FILE ;
struct TYPE_10__ {float FileName; float DestPathW; int SrcPath; } ;
typedef TYPE_3__ VI_DOWNLOAD_FILE ;
typedef size_t UINT ;
struct TYPE_11__ {int DownloadedSettingPathW; int DownloadedInstallerPathW; scalar_t__ DownloadNotRequired; int SettingPath; } ;
typedef int THREAD ;
typedef int IO ;
typedef int HWND ;


 int FUNC_0 (float,int,int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (float) ;
 int FUNC_3 (int *,int ,size_t) ;
 int FUNC_4 (float,int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (float,int,float) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ,int ,float) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int *,int,float) ;
 int FUNC_12 (int *,int,int ,float,...) ;
 int FUNC_13 (int ,int,float) ;
 int FUNC_14 (int *) ;
 size_t FUNC_15 (int *) ;
 TYPE_1__* FUNC_16 () ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,size_t) ;
 int FUNC_19 (TYPE_2__*,int ,scalar_t__,int *) ;
 int * FUNC_20 (int ) ;
 size_t FUNC_21 (int *,int ,int ) ;
 int VAR_12 ;
 int FUNC_22 (TYPE_3__*,int) ;
 int FUNC_23 (scalar_t__) ;
 TYPE_4__ VAR_13 ;
 scalar_t__ VAR_14 ;

void FUNC_24(THREAD *VAR_15, void *VAR_16)
{
 VI_INSTALL_DLG *VAR_17;
 VI_SETTING_ARCH *VAR_18;
 HWND VAR_19;
 UINT VAR_20 = 2;
 VI_DOWNLOAD_FILE VAR_21[2];
 VI_DOWNLOAD_FILE *VAR_22;
 UINT VAR_23;

 if (VAR_15 == ((void*)0) || VAR_16 == ((void*)0))
 {
  return;
 }

 VAR_17 = (VI_INSTALL_DLG *)VAR_16;
 VAR_19 = VAR_17->hWnd;

 FUNC_22(VAR_21, sizeof(VAR_21));

 VAR_18 = FUNC_16();


 VAR_22 = &VAR_21[0];
 FUNC_10(VAR_22->SrcPath, sizeof(VAR_22->SrcPath), VAR_18->Path);


 if (FUNC_5(VAR_13.SettingPath) == 0)
 {
  VAR_22 = &VAR_21[1];
  FUNC_10(VAR_22->SrcPath, sizeof(VAR_22->SrcPath), VAR_13.SettingPath);
 }
 else
 {

  VAR_20 = 1;
 }

 for (VAR_23 = 0;VAR_23 < VAR_20;VAR_23++)
 {
  bool VAR_24 = 1;

  if (VAR_23 == 0 && VAR_13.DownloadNotRequired)
  {
   VAR_24 = 0;
  }

  if (VAR_24)
  {
   wchar_t VAR_25[VAR_8];
   IO *VAR_26 = ((void*)0);
   VI_FILE *VAR_27;
   UINT VAR_28;
   UINT VAR_29;
   UINT VAR_30;
   wchar_t VAR_31[VAR_7];

   VAR_22 = &VAR_21[VAR_23];
   FUNC_4(VAR_22->FileName, sizeof(VAR_22->FileName), VAR_22->SrcPath);
   FUNC_6(VAR_22->FileName, sizeof(VAR_22->FileName), VAR_22->FileName);

   FUNC_11(VAR_31, sizeof(VAR_31), VAR_22->FileName);
   FUNC_0(VAR_22->DestPathW, sizeof(VAR_22->DestPathW), FUNC_7(), VAR_31);

   FUNC_18(VAR_19, 0);
   FUNC_12(VAR_25, sizeof(VAR_25), FUNC_23(VAR_3+VAR_14), VAR_22->FileName);
   FUNC_19(VAR_17, VAR_19, VAR_11, VAR_25);

   VAR_27 = FUNC_20(VAR_22->SrcPath);
   if (VAR_27 == ((void*)0))
   {
    FUNC_8(VAR_19, VAR_9, FUNC_23(VAR_4+VAR_14), VAR_22->FileName);

    FUNC_17(VAR_19);
    return;
   }

   VAR_26 = FUNC_2(VAR_22->DestPathW);
   if (VAR_26 == ((void*)0))
   {
    FUNC_8(VAR_19, VAR_9, FUNC_23(VAR_5+VAR_14), VAR_22->DestPathW);

    FUNC_14(VAR_27);
    FUNC_17(VAR_19);
    return;
   }

   VAR_29 = FUNC_15(VAR_27);
   VAR_30 = 0;

   FUNC_12(VAR_25, sizeof(VAR_25), FUNC_23(VAR_2+VAR_14), VAR_22->FileName);
   FUNC_19(VAR_17, VAR_19, VAR_11, VAR_25);

   while (1)
   {
    UINT VAR_32 = 0;

    if (VAR_17->Halt)
    {

     FUNC_1(VAR_26);
     FUNC_14(VAR_27);
     return;
    }

    FUNC_12(VAR_25, sizeof(VAR_25), FUNC_23(VAR_2+VAR_14), VAR_22->FileName);

    FUNC_19(VAR_17, VAR_19, VAR_2+VAR_14, VAR_25);
    VAR_28 = FUNC_21(VAR_27, VAR_17->Buf, VAR_17->BufSize);

    if (VAR_28 == VAR_6)
    {

     FUNC_8(VAR_19, VAR_9, FUNC_23(VAR_4+VAR_14), VAR_22->FileName);

     FUNC_1(VAR_26);
     FUNC_14(VAR_27);
     FUNC_17(VAR_19);

     return;
    }


    VAR_30 += VAR_28;

    if (VAR_29 != 0)
    {
     FUNC_12(VAR_25, sizeof(VAR_25), FUNC_23(VAR_0+VAR_14),
      ((float)VAR_29) / 1024.0f / 1024.0f,
      ((float)VAR_30) / 1024.0f / 1024.0f);

     VAR_32 = (UINT)(((float)VAR_30) * 100.0f / ((float)VAR_29));
    }
    else
    {
     FUNC_12(VAR_25, sizeof(VAR_25), FUNC_23(VAR_1+VAR_14),
      ((float)VAR_30) / 1024.0f / 1024.0f);
     VAR_32 = (UINT)(((float)VAR_30) * 100.0f / (1024.0f * 1024.0f * 10.0f));
    }

    FUNC_19(VAR_17, VAR_19, VAR_10, VAR_25);
    FUNC_18(VAR_19, VAR_32);

    if (VAR_28 == 0)
    {

     break;
    }
    else
    {
     FUNC_3(VAR_26, VAR_17->Buf, VAR_28);
    }
   }

   FUNC_14(VAR_27);
   FUNC_1(VAR_26);
  }
 }

 FUNC_13(VAR_13.DownloadedInstallerPathW, sizeof(VAR_13.DownloadedInstallerPathW),
  VAR_21[0].DestPathW);

 if (VAR_20 >= 2)
 {
  FUNC_13(VAR_13.DownloadedSettingPathW, sizeof(VAR_13.DownloadedSettingPathW),
   VAR_21[1].DestPathW);
 }

 FUNC_9(VAR_19, VAR_12, 0, 0);
}
