
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {void* Priority; int SubnetMask; void* Masked; int IpAddress; void* Deny; void* Id; } ;
struct TYPE_8__ {int * o; int HubName; } ;
typedef TYPE_1__ RPC_AC_LIST ;
typedef int PACK ;
typedef int LIST ;
typedef TYPE_2__ AC ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 () ;
 void* FUNC_3 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *,char*,scalar_t__) ;
 int FUNC_6 (int *,char*,int *,scalar_t__) ;
 int FUNC_7 (int *,char*,int ,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_9 (int) ;

void FUNC_10(RPC_AC_LIST *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;
 LIST *VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_8(VAR_0, sizeof(RPC_AC_LIST));
 VAR_3 = FUNC_2();

 FUNC_7(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 VAR_4 = FUNC_4(VAR_1, "IpAddress");

 for (VAR_2 = 0;VAR_2 < VAR_4;VAR_2++)
 {
  AC *VAR_5 = FUNC_9(sizeof(AC));

  VAR_5->Id = FUNC_5(VAR_1, "Id", VAR_2);
  VAR_5->Deny = FUNC_3(VAR_1, "Deny", VAR_2);
  FUNC_6(VAR_1, "IpAddress", &VAR_5->IpAddress, VAR_2);
  VAR_5->Masked = FUNC_3(VAR_1, "Masked", VAR_2);

  if (VAR_5->Masked)
  {
   FUNC_6(VAR_1, "SubnetMask", &VAR_5->SubnetMask, VAR_2);
  }

  VAR_5->Priority = FUNC_5(VAR_1, "Priority", VAR_2);

  FUNC_0(VAR_3, VAR_5);

  FUNC_1(VAR_5);
 }

 VAR_0->o = VAR_3;
}
