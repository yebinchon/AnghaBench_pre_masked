
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int name ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {TYPE_1__* Cedar; } ;
struct TYPE_4__ {int LocalBridgeList; } ;
typedef TYPE_2__ SERVER ;
typedef int LOCALBRIDGE ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int,char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

void FUNC_11(FOLDER *VAR_2, SERVER *VAR_3)
{

 if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }
 FUNC_6(VAR_3->Cedar->LocalBridgeList);
 {
  UINT VAR_4;
  for (VAR_4 = 0;VAR_4 < FUNC_5(VAR_3->Cedar->LocalBridgeList);VAR_4++)
  {
   LOCALBRIDGE *VAR_5 = FUNC_4(VAR_3->Cedar->LocalBridgeList, VAR_4);
   char VAR_6[VAR_1];

   FUNC_2(VAR_6, sizeof(VAR_6), "LocalBridge%u", VAR_4);
   FUNC_7(FUNC_1(VAR_2, VAR_6), VAR_5);
  }
 }
 FUNC_8(VAR_3->Cedar->LocalBridgeList);
}
