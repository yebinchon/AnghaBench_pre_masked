
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_10__ {TYPE_1__* Server; } ;
struct TYPE_9__ {int StrValue; } ;
struct TYPE_8__ {int * DDnsClient; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_TEST ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int FUNC_0 (TYPE_3__*,int *,char*,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;

UINT FUNC_3(ADMIN *VAR_4, RPC_TEST *VAR_5)
{
 SERVER *VAR_6 = VAR_4->Server;
 CEDAR *VAR_7 = VAR_6->Cedar;
 UINT VAR_8 = VAR_1;

 VAR_3;
 VAR_2;

 if (VAR_6->DDnsClient == ((void*)0))
 {
  return VAR_0;
 }

 VAR_8 = FUNC_1(VAR_6->DDnsClient, VAR_5->StrValue);

 if (VAR_8 == VAR_1)
 {
  FUNC_0(VAR_4, ((void*)0), "LA_DDNS_HOSTNAME_CHANGED", VAR_5->StrValue);
 }

 FUNC_2(VAR_6);

 return VAR_8;
}
