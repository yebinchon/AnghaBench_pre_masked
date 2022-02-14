
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int InternetFile; int hInternet; int hHttpFile; int io; } ;
typedef TYPE_1__ VI_FILE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(VI_FILE *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->InternetFile == 0)
 {
  FUNC_0(VAR_0->io);
 }
 else
 {
  FUNC_2(VAR_0->hHttpFile);
  FUNC_2(VAR_0->hInternet);
 }

 FUNC_1(VAR_0);
}
