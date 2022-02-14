
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_6__ {int Priority; int SubnetMask; int Masked; int IpAddress; int Deny; int Id; } ;
struct TYPE_5__ {int HubName; int * o; } ;
typedef TYPE_1__ RPC_AC_LIST ;
typedef int PACK ;
typedef int LIST ;
typedef TYPE_2__ AC ;


 TYPE_2__* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (int *,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_5 (int *,char*,int *,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*) ;

void FUNC_8(PACK *VAR_0, RPC_AC_LIST *VAR_1)
{
 UINT VAR_2, VAR_3;
 LIST *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_4 = VAR_1->o;
 VAR_3 = FUNC_1(VAR_4);

 FUNC_3(VAR_0, "NumItem", VAR_3);

 FUNC_6(VAR_0, "HubName", VAR_1->HubName);

 FUNC_7(VAR_0, "ACList");
 for (VAR_2 = 0;VAR_2 < VAR_3;VAR_2++)
 {
  AC *VAR_5 = FUNC_0(VAR_4, VAR_2);

  FUNC_4(VAR_0, "Id", VAR_5->Id, VAR_2, VAR_3);
  FUNC_2(VAR_0, "Deny", VAR_5->Deny, VAR_2, VAR_3);
  FUNC_5(VAR_0, "IpAddress", &VAR_5->IpAddress, VAR_2, VAR_3);
  FUNC_2(VAR_0, "Masked", VAR_5->Masked, VAR_2, VAR_3);

  FUNC_5(VAR_0, "SubnetMask", &VAR_5->SubnetMask, VAR_2, VAR_3);

  FUNC_4(VAR_0, "Priority", VAR_5->Priority, VAR_2, VAR_3);
 }
 FUNC_7(VAR_0, ((void*)0));
}
