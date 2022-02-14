
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_11__ {TYPE_1__* Server; } ;
struct TYPE_10__ {int IsEnabled; } ;
struct TYPE_9__ {int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_AZURE_STATUS ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

UINT FUNC_3(ADMIN *VAR_4, RPC_AZURE_STATUS *VAR_5)
{
 SERVER *VAR_6 = VAR_4->Server;
 CEDAR *VAR_7 = VAR_6->Cedar;
 UINT VAR_8 = VAR_1;

 VAR_3;
 VAR_2;

 if (FUNC_1(VAR_6) == 0)
 {
  return VAR_0;
 }

 FUNC_2(VAR_6, VAR_5->IsEnabled);

 FUNC_0(VAR_6);

 return VAR_1;
}
