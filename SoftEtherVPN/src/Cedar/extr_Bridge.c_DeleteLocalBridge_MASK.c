
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int HubList; int LocalBridgeList; } ;
struct TYPE_7__ {int * Bridge; int DeviceName; int HubName; } ;
typedef TYPE_1__ LOCALBRIDGE ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;

bool FUNC_8(CEDAR *VAR_0, char *VAR_1, char *VAR_2)
{
 bool VAR_3 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_5(VAR_0->HubList);
 {
  FUNC_5(VAR_0->LocalBridgeList);
  {
   UINT VAR_4;

   for (VAR_4 = 0;VAR_4 < FUNC_4(VAR_0->LocalBridgeList);VAR_4++)
   {
    LOCALBRIDGE *VAR_5 = FUNC_3(VAR_0->LocalBridgeList, VAR_4);

    if (FUNC_6(VAR_5->HubName, VAR_1) == 0)
    {
     if (FUNC_6(VAR_5->DeviceName, VAR_2) == 0)
     {
      if (VAR_5->Bridge != ((void*)0))
      {
       FUNC_0(VAR_5->Bridge);
       VAR_5->Bridge = ((void*)0);
      }

      FUNC_1(VAR_0->LocalBridgeList, VAR_5);
      FUNC_2(VAR_5);

      VAR_3 = 1;
      break;
     }
    }
   }
  }
  FUNC_7(VAR_0->LocalBridgeList);
 }
 FUNC_7(VAR_0->HubList);

 return VAR_3;
}
