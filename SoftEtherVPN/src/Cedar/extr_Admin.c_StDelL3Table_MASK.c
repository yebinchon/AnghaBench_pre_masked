
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
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int * FUNC_4 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (TYPE_3__*,int) ;

UINT FUNC_7(ADMIN *VAR_6, RPC_L3TABLE *VAR_7)
{
 SERVER *VAR_8 = VAR_6->Server;
 CEDAR *VAR_9 = VAR_8->Cedar;
 UINT VAR_10 = VAR_2;
 L3SW *VAR_11;

 VAR_5;

 VAR_4;

 VAR_11 = FUNC_4(VAR_9, VAR_7->Name);

 if (VAR_11 == ((void*)0))
 {
  VAR_10 = VAR_0;
 }
 else
 {
  L3TABLE VAR_12;

  FUNC_6(&VAR_12, sizeof(VAR_12));
  VAR_12.NetworkAddress = VAR_7->NetworkAddress;
  VAR_12.SubnetMask = VAR_7->SubnetMask;
  VAR_12.GatewayAddress = VAR_7->GatewayAddress;
  VAR_12.Metric = VAR_7->Metric;

  if (FUNC_3(VAR_11, &VAR_12) == 0)
  {
   VAR_10 = VAR_1;
  }
  else
  {
   char VAR_13[VAR_3];
   FUNC_1(VAR_13, sizeof(VAR_13), VAR_12.NetworkAddress);
   FUNC_0(VAR_6, ((void*)0), "LA_DEL_L3_TABLE", VAR_13, VAR_7->Name);

   FUNC_2(VAR_8);
  }

  FUNC_5(VAR_11);
 }

 return VAR_10;
}
