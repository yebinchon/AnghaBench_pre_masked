
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int hubname ;
typedef int UINT ;
struct TYPE_16__ {TYPE_1__* Server; } ;
struct TYPE_15__ {TYPE_3__* HubDb; } ;
struct TYPE_14__ {int AcList; } ;
struct TYPE_13__ {char* HubName; int o; } ;
struct TYPE_12__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_AC_LIST ;
typedef TYPE_3__ HUBDB ;
typedef TYPE_4__ HUB ;
typedef int CEDAR ;
typedef TYPE_5__ ADMIN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_4__* FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int) ;

UINT FUNC_9(ADMIN *VAR_7, RPC_AC_LIST *VAR_8)
{
 SERVER *VAR_9 = VAR_7->Server;
 CEDAR *VAR_10 = VAR_9->Cedar;
 HUB *VAR_11;
 UINT VAR_12 = VAR_3;
 char VAR_13[VAR_4 + 1];

 VAR_0;
 VAR_5;
 if (VAR_9->ServerType == VAR_6)
 {
  return VAR_2;
 }


 FUNC_6(VAR_13, sizeof(VAR_13), VAR_8->HubName);

 FUNC_0(VAR_8);
 FUNC_8(VAR_8, sizeof(RPC_AC_LIST));
 FUNC_6(VAR_8->HubName, sizeof(VAR_8->HubName), VAR_13);

 VAR_11 = FUNC_1(VAR_10, VAR_13);

 if (VAR_11 == ((void*)0))
 {
  VAR_12 = VAR_1;
 }
 else
 {
  if (VAR_11->HubDb == ((void*)0))
  {
   VAR_12 = VAR_2;
  }
  else
  {
   HUBDB *VAR_14 = VAR_11->HubDb;

   FUNC_2(VAR_14->AcList);
   {
    VAR_8->o = FUNC_3();

    FUNC_5(VAR_8->o, VAR_14->AcList);
   }
   FUNC_7(VAR_14->AcList);
  }
  FUNC_4(VAR_11);
 }

 return VAR_12;
}
