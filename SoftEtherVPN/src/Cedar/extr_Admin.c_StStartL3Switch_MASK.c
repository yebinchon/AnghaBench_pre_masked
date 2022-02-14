
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
struct TYPE_14__ {int lock; int Name; int IfList; } ;
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
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (TYPE_3__*) ;
 int VAR_5 ;
 int FUNC_8 (int ) ;

UINT FUNC_9(ADMIN *VAR_6, RPC_L3SW *VAR_7)
{
 SERVER *VAR_8 = VAR_6->Server;
 CEDAR *VAR_9 = VAR_8->Cedar;
 UINT VAR_10 = VAR_3;
 L3SW *VAR_11;

 if (FUNC_2(VAR_7->Name))
 {
  return VAR_0;
 }

 VAR_4;

 VAR_5;

 VAR_11 = FUNC_3(VAR_9, VAR_7->Name);

 if (VAR_11 == ((void*)0))
 {
  VAR_10 = VAR_2;
 }
 else
 {
  FUNC_6(VAR_11->lock);
  {

   if (FUNC_5(VAR_11->IfList) >= 1)
   {
    FUNC_4(VAR_11);

    FUNC_0(VAR_6, ((void*)0), "LA_START_L3_SW", VAR_11->Name);

    FUNC_1(VAR_8);
   }
   else
   {
    VAR_10 = VAR_1;
   }
  }
  FUNC_8(VAR_11->lock);

  FUNC_7(VAR_11);
 }

 return VAR_10;
}
