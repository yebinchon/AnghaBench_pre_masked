
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {TYPE_1__* Server; } ;
struct TYPE_8__ {int IntValue; } ;
struct TYPE_7__ {int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_TEST ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

UINT FUNC_1(ADMIN *VAR_2, RPC_TEST *VAR_3)
{
 SERVER *VAR_4 = VAR_2->Server;
 CEDAR *VAR_5 = VAR_4->Cedar;
 UINT VAR_6 = VAR_0;
 UINT VAR_7;

 VAR_1;

 VAR_7 = FUNC_0(VAR_4);

 VAR_3->IntValue = VAR_7;

 return VAR_0;
}
