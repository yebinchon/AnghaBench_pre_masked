
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_5__ {int DontBackup; int lock; int FileNameW; int * Io; } ;
typedef int FOLDER ;
typedef TYPE_1__ CFG_RW ;


 int FUNC_0 (TYPE_1__*,int *,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

UINT FUNC_6(CFG_RW *VAR_0, FOLDER *VAR_1, UINT VAR_2)
{
 UINT VAR_3 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_4(VAR_0->lock);
 {
  if (VAR_0->Io != ((void*)0))
  {
   FUNC_2(VAR_0->Io);
   VAR_0->Io = ((void*)0);
  }

  if (FUNC_1(VAR_0, VAR_1, VAR_0->FileNameW, &VAR_3))
  {
   if (VAR_0->DontBackup == 0)
   {
    FUNC_0(VAR_0, VAR_1, VAR_0->FileNameW, VAR_2);
   }
  }
  else
  {
   VAR_3 = 0;
  }

  VAR_0->Io = FUNC_3(VAR_0->FileNameW, 0);
 }
 FUNC_5(VAR_0->lock);

 return VAR_3;
}
