
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_8__ {int lock; int * ClientAuth; int * ClientOption; } ;
struct TYPE_7__ {int ClientAuth; int ClientOption; } ;
typedef TYPE_1__ RPC_CREATE_LINK ;
typedef TYPE_2__ NAT ;
typedef int CLIENT_OPTION ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int) ;

UINT FUNC_7(NAT *VAR_2, RPC_CREATE_LINK *VAR_3)
{
 UINT VAR_4 = VAR_1;

 FUNC_3(VAR_2->lock);
 {
  if (VAR_2->ClientOption == ((void*)0) || VAR_2->ClientAuth == ((void*)0))
  {
   VAR_4 = VAR_0;
  }
  else
  {
   FUNC_2(VAR_3);

   FUNC_5(VAR_3, sizeof(RPC_CREATE_LINK));
   VAR_3->ClientOption = FUNC_6(sizeof(CLIENT_OPTION));
   FUNC_0(VAR_3->ClientOption, VAR_2->ClientOption, sizeof(CLIENT_OPTION));
   VAR_3->ClientAuth = FUNC_1(VAR_2->ClientAuth);
  }
 }
 FUNC_4(VAR_2->lock);

 return VAR_4;
}
