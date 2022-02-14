
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_22__ {scalar_t__ Id; } ;
struct TYPE_21__ {int ServerAdmin; TYPE_1__* Server; } ;
struct TYPE_20__ {int AccessList; } ;
struct TYPE_19__ {scalar_t__ Id; int HubName; } ;
struct TYPE_18__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_DELETE_ACCESS ;
typedef TYPE_3__ HUB ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;
typedef TYPE_5__ ACCESS ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_3__* FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_5__* FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;

UINT FUNC_14(ADMIN *VAR_9, RPC_DELETE_ACCESS *VAR_10)
{
 SERVER *VAR_11 = VAR_9->Server;
 CEDAR *VAR_12 = VAR_11->Cedar;
 HUB *VAR_13;
 UINT VAR_14;
 bool VAR_15;


 if (VAR_11->ServerType == VAR_8)
 {
  return VAR_3;
 }

 VAR_0;
 VAR_7;

 FUNC_9(VAR_12);
 {
  VAR_13 = FUNC_3(VAR_12, VAR_10->HubName);
 }
 FUNC_12(VAR_12);

 if (VAR_13 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_9->ServerAdmin == 0 && FUNC_4(VAR_13, "no_change_access_list") != 0)
 {
  FUNC_11(VAR_13);
  return VAR_2;
 }

 VAR_15 = 0;

 FUNC_10(VAR_13->AccessList);
 {
  for (VAR_14 = 0;VAR_14 < FUNC_8(VAR_13->AccessList);VAR_14++)
  {
   ACCESS *VAR_16 = FUNC_7(VAR_13->AccessList, VAR_14);

   if ((VAR_10->Id < VAR_6 && VAR_16->Id == VAR_10->Id) ||
    (VAR_10->Id >= VAR_6 && FUNC_5(VAR_16) == VAR_10->Id))
   {
    FUNC_2(VAR_16);
    FUNC_1(VAR_13->AccessList, VAR_16);
    VAR_15 = 1;

    break;
   }
  }
 }
 FUNC_13(VAR_13->AccessList);

 if (VAR_15 == 0)
 {
  FUNC_11(VAR_13);
  return VAR_5;
 }

 FUNC_0(VAR_9, VAR_13, "LA_DELETE_ACCESS");

 FUNC_6(VAR_11);

 FUNC_11(VAR_13);

 return VAR_4;
}
