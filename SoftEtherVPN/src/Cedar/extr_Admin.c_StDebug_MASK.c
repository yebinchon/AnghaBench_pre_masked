
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int t2 ;
typedef scalar_t__ UINT ;
struct TYPE_13__ {TYPE_1__* Server; } ;
struct TYPE_12__ {int StrValue; int IntValue; } ;
struct TYPE_11__ {int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_TEST ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;

UINT FUNC_3(ADMIN *VAR_2, RPC_TEST *VAR_3)
{
 SERVER *VAR_4 = VAR_2->Server;
 CEDAR *VAR_5 = VAR_4->Cedar;
 UINT VAR_6 = VAR_0;
 RPC_TEST VAR_7;

 VAR_1;

 FUNC_2(&VAR_7, sizeof(VAR_7));

 VAR_6 = FUNC_1(VAR_4, &VAR_7, VAR_3->IntValue, VAR_3->StrValue);

 if (VAR_6 == VAR_0)
 {
  FUNC_0(VAR_3, &VAR_7, sizeof(RPC_TEST));
 }
 else
 {
  FUNC_2(VAR_3, sizeof(RPC_TEST));
 }

 return VAR_6;
}
