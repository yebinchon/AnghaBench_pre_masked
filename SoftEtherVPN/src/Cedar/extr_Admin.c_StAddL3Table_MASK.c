
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tmp ;
typedef int tbl ;
typedef int UINT ;
struct TYPE_14__ {TYPE_1__* Server; } ;
struct TYPE_13__ {int NetworkAddress; int Metric; int GatewayAddress; int SubnetMask; } ;
struct TYPE_12__ {int Name; int Metric; int GatewayAddress; int SubnetMask; int NetworkAddress; } ;
struct TYPE_11__ {int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_L3TABLE ;
typedef TYPE_3__ L3TABLE ;
typedef int L3SW ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (TYPE_4__*,int *,char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,TYPE_3__*) ;
 int * FUNC_6 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int VAR_6 ;
 int FUNC_8 (TYPE_3__*,int) ;

UINT FUNC_9(ADMIN *VAR_7, RPC_L3TABLE *VAR_8)
{
 SERVER *VAR_9 = VAR_7->Server;
 CEDAR *VAR_10 = VAR_9->Cedar;
 UINT VAR_11 = VAR_3;
 L3SW *VAR_12;

 if (FUNC_4(VAR_8->NetworkAddress, VAR_8->SubnetMask) == 0 ||
  FUNC_3(VAR_8->GatewayAddress) == 0)
 {
  return VAR_0;
 }

 VAR_6;

 VAR_5;

 VAR_12 = FUNC_6(VAR_10, VAR_8->Name);

 if (VAR_12 == ((void*)0))
 {
  VAR_11 = VAR_1;
 }
 else
 {
  L3TABLE VAR_13;

  FUNC_8(&VAR_13, sizeof(VAR_13));
  VAR_13.NetworkAddress = VAR_8->NetworkAddress;
  VAR_13.SubnetMask = VAR_8->SubnetMask;
  VAR_13.GatewayAddress = VAR_8->GatewayAddress;
  VAR_13.Metric = VAR_8->Metric;

  if (FUNC_5(VAR_12, &VAR_13) == 0)
  {
   VAR_11 = VAR_2;
  }
  else
  {
   char VAR_14[VAR_4];
   FUNC_1(VAR_14, sizeof(VAR_14), VAR_13.NetworkAddress);
   FUNC_0(VAR_7, ((void*)0), "LA_ADD_L3_TABLE", VAR_14, VAR_8->Name);

   FUNC_2(VAR_9);
  }

  FUNC_7(VAR_12);
 }

 return VAR_11;
}
