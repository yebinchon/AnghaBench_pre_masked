
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hubname ;
typedef int UINT ;
struct TYPE_10__ {TYPE_1__* Server; } ;
struct TYPE_9__ {int Msg; int HubName; } ;
struct TYPE_8__ {scalar_t__ ServerType; int * Cedar; } ;
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
 int FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (char*,int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int) ;

UINT FUNC_7(ADMIN *VAR_9, RPC_MSG *VAR_10)
{
 SERVER *VAR_11 = VAR_9->Server;
 CEDAR *VAR_12 = VAR_11->Cedar;
 HUB *VAR_13;
 UINT VAR_14 = VAR_4;
 char VAR_15[VAR_6 + 1];

 VAR_0;
 VAR_7;
 if (VAR_11->ServerType == VAR_8)
 {
  return VAR_3;
 }
 if (FUNC_5(VAR_10->Msg) > VAR_5)
 {
  return VAR_2;
 }

 FUNC_4(VAR_15, sizeof(VAR_15), VAR_10->HubName);

 VAR_13 = FUNC_1(VAR_12, VAR_15);

 if (VAR_13 == ((void*)0))
 {
  VAR_14 = VAR_1;
 }
 else
 {
  FUNC_0(VAR_10);
  FUNC_6(VAR_10, sizeof(RPC_MSG));

  VAR_10->Msg = FUNC_2(VAR_13);

  FUNC_3(VAR_13);
 }

 return VAR_14;
}
