
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tbl ;
typedef int name ;
typedef size_t UINT ;
struct TYPE_8__ {int Metric; void* GatewayAddress; void* SubnetMask; void* NetworkAddress; } ;
struct TYPE_7__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ L3TABLE ;
typedef int L3SW ;
typedef int FOLDER ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,char*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,char*,size_t,size_t) ;
 int FUNC_8 (int *,TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int VAR_0 ;
 int FUNC_10 (TYPE_2__*,int) ;

void FUNC_11(L3SW *VAR_1, FOLDER *VAR_2)
{
 UINT VAR_3;
 FOLDER *VAR_4, *VAR_5;
 TOKEN_LIST *VAR_6;
 bool VAR_7 = 0;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_7 = FUNC_1(VAR_2, "Active");


 VAR_4 = FUNC_2(VAR_2, "InterfaceList");
 if (VAR_4 != ((void*)0))
 {
  VAR_6 = FUNC_0(VAR_4);
  if (VAR_6 != ((void*)0))
  {
   for (VAR_3 = 0;VAR_3 < VAR_6->NumTokens;VAR_3++)
   {
    FOLDER *VAR_8 = FUNC_2(VAR_4, VAR_6->Token[VAR_3]);
    char VAR_9[VAR_0 + 1];
    UINT VAR_10, VAR_11;

    FUNC_5(VAR_8, "HubName", VAR_9, sizeof(VAR_9));
    VAR_10 = FUNC_4(VAR_8, "IpAddress");
    VAR_11 = FUNC_4(VAR_8, "SubnetMask");

    {
     FUNC_7(VAR_1, VAR_9, VAR_10, VAR_11);
    }
   }
   FUNC_6(VAR_6);
  }
 }


 VAR_5 = FUNC_2(VAR_2, "RoutingTable");
 if (VAR_5 != ((void*)0))
 {
  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6 != ((void*)0))
  {
   for (VAR_3 = 0;VAR_3 < VAR_6->NumTokens;VAR_3++)
   {
    FOLDER *VAR_12 = FUNC_2(VAR_5, VAR_6->Token[VAR_3]);
    L3TABLE VAR_13;

    FUNC_10(&VAR_13, sizeof(VAR_13));
    VAR_13.NetworkAddress = FUNC_4(VAR_12, "NetworkAddress");
    VAR_13.SubnetMask = FUNC_4(VAR_12, "SubnetMask");
    VAR_13.GatewayAddress = FUNC_4(VAR_12, "GatewayAddress");
    VAR_13.Metric = FUNC_3(VAR_12, "Metric");

    FUNC_8(VAR_1, &VAR_13);
   }
   FUNC_6(VAR_6);
  }
 }

 if (VAR_7)
 {
  FUNC_9(VAR_1);
 }
}
