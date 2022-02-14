
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int hubname ;
typedef int UINT ;
struct TYPE_21__ {int ServerAdmin; TYPE_1__* Server; } ;
struct TYPE_20__ {scalar_t__ Bridge; } ;
struct TYPE_19__ {TYPE_3__* HubDb; } ;
struct TYPE_18__ {int AcList; } ;
struct TYPE_17__ {int o; int HubName; } ;
struct TYPE_16__ {scalar_t__ ServerType; TYPE_5__* Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_AC_LIST ;
typedef TYPE_3__ HUBDB ;
typedef TYPE_4__ HUB ;
typedef TYPE_5__ CEDAR ;
typedef TYPE_6__ ADMIN ;


 int FUNC_0 (TYPE_6__*,TYPE_4__*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (TYPE_5__*,char*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*,int,int ) ;
 int FUNC_10 (int ) ;

UINT FUNC_11(ADMIN *VAR_10, RPC_AC_LIST *VAR_11)
{
 SERVER *VAR_12 = VAR_10->Server;
 CEDAR *VAR_13 = VAR_12->Cedar;
 HUB *VAR_14;
 UINT VAR_15 = VAR_5;
 char VAR_16[VAR_7 + 1];


 if (VAR_13->Bridge)
 {
  return VAR_3;
 }

 if (FUNC_1(VAR_6) != 0 && FUNC_5(VAR_11->o) >= 1)
 {
  return VAR_4;
 }

 VAR_0;
 VAR_8;
 if (VAR_12->ServerType == VAR_9)
 {
  return VAR_3;
 }

 FUNC_9(VAR_16, sizeof(VAR_16), VAR_11->HubName);

 VAR_14 = FUNC_2(VAR_13, VAR_16);

 if (VAR_14 == ((void*)0))
 {
  VAR_15 = VAR_1;
 }
 else
 {
  if (VAR_10->ServerAdmin == 0 && FUNC_3(VAR_14, "no_change_access_control_list") != 0)
  {
   VAR_15 = VAR_2;
  }
  else
  {
   if (VAR_14->HubDb == ((void*)0))
   {
    VAR_15 = VAR_3;
   }
   else
   {
    HUBDB *VAR_17 = VAR_14->HubDb;

    FUNC_6(VAR_17->AcList);
    {
     FUNC_8(VAR_17->AcList, VAR_11->o);

     {
      FUNC_0(VAR_10, VAR_14, "LA_SET_AC_LIST", FUNC_5(VAR_11->o));

      FUNC_4(VAR_12);
     }
    }
    FUNC_10(VAR_17->AcList);
   }
  }
  FUNC_7(VAR_14);
 }

 return VAR_15;
}
