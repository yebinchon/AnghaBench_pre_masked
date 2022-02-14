
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int hubname ;
typedef int UINT ;
struct TYPE_9__ {int ServerAdmin; TYPE_1__* Server; } ;
struct TYPE_8__ {int Msg; int HubName; } ;
struct TYPE_7__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_MSG ;
typedef int HUB ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (char*,int,int ) ;
 scalar_t__ FUNC_6 (int ) ;

UINT FUNC_7(ADMIN *VAR_10, RPC_MSG *VAR_11)
{
 SERVER *VAR_12 = VAR_10->Server;
 CEDAR *VAR_13 = VAR_12->Cedar;
 HUB *VAR_14;
 UINT VAR_15 = VAR_5;
 char VAR_16[VAR_7 + 1];

 VAR_0;
 VAR_8;
 if (VAR_12->ServerType == VAR_9)
 {
  return VAR_4;
 }
 if (FUNC_6(VAR_11->Msg) > VAR_6)
 {
  return VAR_2;
 }

 FUNC_5(VAR_16, sizeof(VAR_16), VAR_11->HubName);

 VAR_14 = FUNC_0(VAR_13, VAR_16);

 if (VAR_14 == ((void*)0))
 {
  VAR_15 = VAR_1;
 }
 else
 {
  if (VAR_10->ServerAdmin == 0 && FUNC_1(VAR_14, "no_change_msg") != 0)
  {
   VAR_15 = VAR_3;
  }
  else
  {
   FUNC_4(VAR_14, VAR_11->Msg);
  }

  FUNC_3(VAR_14);
 }

 FUNC_2(VAR_12);

 return VAR_15;
}
