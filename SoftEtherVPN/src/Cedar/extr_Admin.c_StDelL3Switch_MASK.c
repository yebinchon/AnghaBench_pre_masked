
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {TYPE_1__* Server; } ;
struct TYPE_9__ {int Name; } ;
struct TYPE_8__ {int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_L3SW ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int FUNC_0 (TYPE_3__*,int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;

UINT FUNC_4(ADMIN *VAR_5, RPC_L3SW *VAR_6)
{
 SERVER *VAR_7 = VAR_5->Server;
 CEDAR *VAR_8 = VAR_7->Cedar;
 UINT VAR_9 = VAR_2;

 if (FUNC_2(VAR_6->Name))
 {
  return VAR_0;
 }

 VAR_3;

 VAR_4;

 if (FUNC_3(VAR_8, VAR_6->Name) == 0)
 {
  VAR_9 = VAR_1;
 }
 else
 {
  FUNC_0(VAR_5, ((void*)0), "LA_DEL_L3_SW", VAR_6->Name);

  FUNC_1(VAR_7);
 }

 return VAR_9;
}
