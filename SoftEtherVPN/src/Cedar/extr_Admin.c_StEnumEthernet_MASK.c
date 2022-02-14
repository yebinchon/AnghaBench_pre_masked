
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tmp ;
typedef size_t UINT ;
struct TYPE_12__ {int NumItem; TYPE_2__* Items; } ;
struct TYPE_11__ {char* DeviceName; int NetworkConnectionName; } ;
struct TYPE_10__ {int NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ RPC_ENUM_ETH_ITEM ;
typedef TYPE_3__ RPC_ENUM_ETH ;
typedef int ADMIN ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (int ,int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (int ,int,char*) ;
 int FUNC_8 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_9 (int) ;

UINT FUNC_10(ADMIN *VAR_4, RPC_ENUM_ETH *VAR_5)
{
 TOKEN_LIST *VAR_6;
 UINT VAR_7;
 char VAR_8[VAR_2];
 bool VAR_9 = 0;

 VAR_3;





 VAR_6 = FUNC_4();
 if (VAR_6 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_2(VAR_5);
 FUNC_8(VAR_5, sizeof(RPC_ENUM_ETH));

 VAR_5->NumItem = VAR_6->NumTokens;
 VAR_5->Items = FUNC_9(sizeof(RPC_ENUM_ETH_ITEM) * VAR_5->NumItem);

 for (VAR_7 = 0;VAR_7 < VAR_5->NumItem;VAR_7++)
 {
  RPC_ENUM_ETH_ITEM *VAR_10 = &VAR_5->Items[VAR_7];

  FUNC_6(VAR_10->DeviceName, sizeof(VAR_10->DeviceName), VAR_6->Token[VAR_7]);

  FUNC_6(VAR_8, sizeof(VAR_8), VAR_10->DeviceName);




  if (VAR_9 == 0)
  {
   FUNC_6(VAR_8, sizeof(VAR_8), "");
  }
  else
  {
   if (FUNC_0(VAR_10->DeviceName, VAR_8, sizeof(VAR_8)) == 0)
   {
    FUNC_6(VAR_8, sizeof(VAR_8), VAR_10->DeviceName);
   }
  }

  FUNC_7(VAR_10->NetworkConnectionName, sizeof(VAR_10->NetworkConnectionName), VAR_8);

 }

 FUNC_3(VAR_6);

 return VAR_1;
}
