
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int DownloadStarted; int Halt; int DownloadThread; } ;
typedef TYPE_1__ VI_INSTALL_DLG ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;

void FUNC_3(VI_INSTALL_DLG *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->DownloadStarted == 0)
 {
  return;
 }

 VAR_0->DownloadStarted = 0;
 VAR_0->Halt = 1;

 while (1)
 {
  if (FUNC_2(VAR_0->DownloadThread, 50))
  {
   break;
  }

  FUNC_0(((void*)0));
 }

 FUNC_1(VAR_0->DownloadThread);
}
