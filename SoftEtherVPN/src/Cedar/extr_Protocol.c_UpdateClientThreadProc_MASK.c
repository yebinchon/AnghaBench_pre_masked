
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int DisableCheck; } ;
struct TYPE_6__ {int HaltEvent; TYPE_1__ Setting; scalar_t__ HaltFlag; int Param; scalar_t__ (* IsForegroundCb ) (TYPE_2__*,int ) ;} ;
typedef TYPE_2__ UPDATE_CLIENT ;
typedef int THREAD ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;

void FUNC_4(THREAD *VAR_2, void *VAR_3)
{
 UPDATE_CLIENT *VAR_4 = (UPDATE_CLIENT *)VAR_3;
 bool VAR_5 = 1;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 while (1)
 {

  if (VAR_4->HaltFlag)
  {
   break;
  }

  if (VAR_5 == 0)
  {

   if (VAR_4->IsForegroundCb != ((void*)0))
   {
    while (1)
    {
     if (VAR_4->HaltFlag)
     {
      break;
     }

     if (VAR_4->IsForegroundCb(VAR_4, VAR_4->Param))
     {
      break;
     }

     FUNC_2(VAR_4->HaltEvent, 1000);
    }
   }
  }

  VAR_5 = 0;

  if (VAR_4->HaltFlag)
  {
   break;
  }

  if (VAR_4->Setting.DisableCheck == 0)
  {
   FUNC_1(VAR_4);
  }


  FUNC_2(VAR_4->HaltEvent, FUNC_0(VAR_1, VAR_0));
 }
}
