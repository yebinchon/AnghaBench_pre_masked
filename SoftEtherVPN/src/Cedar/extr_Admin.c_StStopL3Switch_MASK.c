
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_15__ {TYPE_1__* Server; } ;
struct TYPE_14__ {int Name; } ;
struct TYPE_13__ {int Name; } ;
struct TYPE_12__ {int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_L3SW ;
typedef TYPE_3__ L3SW ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (TYPE_4__*,int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_4 ;

UINT FUNC_6(ADMIN *VAR_5, RPC_L3SW *VAR_6)
{
 SERVER *VAR_7 = VAR_5->Server;
 CEDAR *VAR_8 = VAR_7->Cedar;
 UINT VAR_9 = VAR_2;
 L3SW *VAR_10;

 if (FUNC_2(VAR_6->Name))
 {
  return VAR_0;
 }

 VAR_3;

 VAR_4;

 VAR_10 = FUNC_3(VAR_8, VAR_6->Name);

 if (VAR_10 == ((void*)0))
 {
  VAR_9 = VAR_1;
 }
 else
 {
  FUNC_4(VAR_10);
  FUNC_0(VAR_5, ((void*)0), "LA_STOP_L3_SW", VAR_10->Name);
  FUNC_5(VAR_10);

  FUNC_1(VAR_7);
 }

 return VAR_9;
}
