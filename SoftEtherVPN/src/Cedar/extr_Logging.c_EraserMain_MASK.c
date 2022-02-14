
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int bs ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int LastFailed; int MinFreeSpace; } ;
struct TYPE_8__ {int FullPath; } ;
typedef int LIST ;
typedef TYPE_1__ ERASE_FILE ;
typedef TYPE_2__ ERASER ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_2__*) ;
 TYPE_1__* FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (char*,int,int ) ;

void FUNC_8(ERASER *VAR_0)
{
 LIST *VAR_1;
 UINT VAR_2;
 bool VAR_3 = 0;
 char VAR_4[64];

 if (VAR_0 == ((void*)0))
 {
  return;
 }


 if (FUNC_0(VAR_0))
 {

  return;
 }

 FUNC_7(VAR_4, sizeof(VAR_4), VAR_0->MinFreeSpace);


 VAR_1 = FUNC_4(VAR_0);


 for (VAR_2 = 0;VAR_2 < FUNC_6(VAR_1);VAR_2++)
 {
  ERASE_FILE *VAR_5 = FUNC_5(VAR_1, VAR_2);


  if (FUNC_2(VAR_5->FullPath))
  {
   FUNC_1(VAR_0, "LE_DELETE", VAR_4, VAR_5->FullPath);
  }


  if (FUNC_0(VAR_0))
  {

   VAR_3 = 1;
   break;
  }
 }


 FUNC_3(VAR_1);

 if (VAR_0->LastFailed == 0 && VAR_3 == 0)
 {

  FUNC_1(VAR_0, "LE_NOT_ENOUGH_FREE", VAR_4);
 }

 VAR_0->LastFailed = VAR_3 ? 0 : 1;
}
