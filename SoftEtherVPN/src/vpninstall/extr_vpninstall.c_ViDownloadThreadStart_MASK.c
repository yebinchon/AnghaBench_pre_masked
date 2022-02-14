
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int DownloadStarted; int DownloadThread; } ;
typedef TYPE_1__ VI_INSTALL_DLG ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;

void FUNC_1(VI_INSTALL_DLG *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_1->DownloadStarted = 1;
 VAR_1->DownloadThread = FUNC_0(VAR_0, VAR_1);
}
