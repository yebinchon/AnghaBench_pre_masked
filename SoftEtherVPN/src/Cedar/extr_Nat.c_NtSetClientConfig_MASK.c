
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {scalar_t__ Online; int lock; int * ClientAuth; int * ClientOption; } ;
struct TYPE_8__ {int ClientAuth; int ClientOption; } ;
typedef TYPE_1__ RPC_CREATE_LINK ;
typedef TYPE_2__ NAT ;
typedef int CLIENT_OPTION ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int) ;

UINT FUNC_10(NAT *VAR_1, RPC_CREATE_LINK *VAR_2)
{
 FUNC_4(VAR_1->lock);
 {
  if (VAR_1->ClientOption != ((void*)0) || VAR_1->ClientAuth != ((void*)0))
  {
   FUNC_3(VAR_1->ClientOption);
   FUNC_0(VAR_1->ClientAuth);
  }

  VAR_1->ClientOption = FUNC_9(sizeof(CLIENT_OPTION));
  FUNC_1(VAR_1->ClientOption, VAR_2->ClientOption, sizeof(CLIENT_OPTION));
  VAR_1->ClientAuth = FUNC_2(VAR_2->ClientAuth);
 }
 FUNC_8(VAR_1->lock);

 FUNC_5(VAR_1);

 if (VAR_1->Online)
 {
  FUNC_6(VAR_1, ((void*)0));
  FUNC_7(VAR_1, ((void*)0));
 }

 return VAR_0;
}
