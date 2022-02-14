
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_8__ {int HubList; } ;
struct TYPE_7__ {int SessionList; } ;
struct TYPE_6__ {int lock; int ref; int SessionKey; } ;
typedef TYPE_1__ SESSION ;
typedef TYPE_2__ HUB ;
typedef TYPE_3__ CEDAR ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *,int ) ;
 void* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

SESSION *FUNC_8(CEDAR *VAR_1, UCHAR *VAR_2)
{
 HUB *VAR_3;
 UINT VAR_4, VAR_5;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_5(VAR_1->HubList);
 {
  for (VAR_4 = 0;VAR_4 < FUNC_3(VAR_1->HubList);VAR_4++)
  {
   VAR_3 = FUNC_2(VAR_1->HubList, VAR_4);
   FUNC_5(VAR_3->SessionList);
   {
    for (VAR_5 = 0;VAR_5 < FUNC_3(VAR_3->SessionList);VAR_5++)
    {
     SESSION *VAR_6 = FUNC_2(VAR_3->SessionList, VAR_5);
     FUNC_4(VAR_6->lock);
     {
      if (FUNC_1(VAR_6->SessionKey, VAR_2, VAR_0) == 0)
      {

       FUNC_0(VAR_6->ref);


       FUNC_6(VAR_6->lock);
       FUNC_7(VAR_3->SessionList);
       FUNC_7(VAR_1->HubList);
       return VAR_6;
      }
     }
     FUNC_6(VAR_6->lock);
    }
   }
   FUNC_7(VAR_3->SessionList);
  }
 }
 FUNC_7(VAR_1->HubList);

 return ((void*)0);
}
