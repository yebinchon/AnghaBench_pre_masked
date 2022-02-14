
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X ;
typedef int UINT ;
struct TYPE_10__ {TYPE_1__* Server; } ;
struct TYPE_9__ {int StrValue; } ;
struct TYPE_8__ {int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_TEST ;
typedef int K ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int FUNC_0 (TYPE_3__*,int *,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int **,int **,int ) ;

UINT FUNC_6(ADMIN *VAR_2, RPC_TEST *VAR_3)
{
 SERVER *VAR_4 = VAR_2->Server;
 CEDAR *VAR_5 = VAR_4->Cedar;
 UINT VAR_6 = VAR_0;
 X *VAR_7;
 K *VAR_8;

 VAR_1;

 FUNC_5(&VAR_7, &VAR_8, VAR_3->StrValue);

 FUNC_4(VAR_5, VAR_7, VAR_8);

 FUNC_0(VAR_2, ((void*)0), "LA_REGENERATE_SERVER_CERT", VAR_3->StrValue);

 FUNC_3(VAR_4);

 FUNC_2(VAR_7);
 FUNC_1(VAR_8);

 return VAR_0;
}
