
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int t ;
typedef int hubname ;
struct TYPE_9__ {int lock_online; TYPE_1__* SecureNAT; } ;
struct TYPE_8__ {int Cedar; } ;
struct TYPE_7__ {int Nat; } ;
typedef TYPE_2__ SERVER ;
typedef int RPC_NAT_STATUS ;
typedef int PACK ;
typedef TYPE_3__ HUB ;


 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int * FUNC_4 () ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,char*,char*,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int) ;

PACK *FUNC_12(SERVER *VAR_1, PACK *VAR_2)
{
 char VAR_3[VAR_0 + 1];
 RPC_NAT_STATUS VAR_4;
 PACK *VAR_5;
 HUB *VAR_6;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return FUNC_4();
 }
 if (FUNC_7(VAR_2, "HubName", VAR_3, sizeof(VAR_3)) == 0)
 {
  return FUNC_4();
 }
 FUNC_11(&VAR_4, sizeof(VAR_4));

 FUNC_3(VAR_1->Cedar);
 {
  VAR_6 = FUNC_1(VAR_1->Cedar, VAR_3);
 }
 FUNC_10(VAR_1->Cedar);

 if (VAR_6 != ((void*)0))
 {
  FUNC_2(VAR_6->lock_online);
  {
   if (VAR_6->SecureNAT != ((void*)0))
   {
    FUNC_5(VAR_6->SecureNAT->Nat, &VAR_4);
   }
  }
  FUNC_9(VAR_6->lock_online);
 }

 FUNC_8(VAR_6);

 VAR_5 = FUNC_4();
 FUNC_6(VAR_5, &VAR_4);
 FUNC_0(&VAR_4);

 return VAR_5;
}
