
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_22__ {int ServerAdmin; TYPE_1__* Server; } ;
struct TYPE_21__ {int Value; int Name; } ;
struct TYPE_20__ {int CurrentVersion; int Name; int AdminOptionList; } ;
struct TYPE_19__ {scalar_t__ NumItem; TYPE_4__* Items; int HubName; } ;
struct TYPE_18__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_ADMIN_OPTION ;
typedef TYPE_3__ HUB ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN_OPTION ;
typedef TYPE_5__ ADMIN ;


 int FUNC_0 (TYPE_5__*,int *,char*,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,int) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 TYPE_3__* FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ,int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 TYPE_4__* FUNC_14 (int) ;

UINT FUNC_15(ADMIN *VAR_9, RPC_ADMIN_OPTION *VAR_10)
{
 UINT VAR_11;
 SERVER *VAR_12 = VAR_9->Server;
 CEDAR *VAR_13 = VAR_12->Cedar;
 HUB *VAR_14;

 bool VAR_15 = 0;


 if (VAR_10->NumItem > VAR_6)
 {
  return VAR_5;
 }

 VAR_7;
 if (VAR_12->ServerType == VAR_8)
 {
  return VAR_3;
 }

 VAR_0;

 if (VAR_9->ServerAdmin == 0)
 {
  VAR_15 = 1;
 }

 FUNC_7(VAR_13);
 {
  VAR_14 = FUNC_3(VAR_13, VAR_10->HubName);
 }
 FUNC_12(VAR_13);

 if (VAR_14 == ((void*)0))
 {
  return VAR_1;
 }

 if (FUNC_4(VAR_14, "allow_hub_admin_change_option") == 0
  && VAR_15)
 {

  FUNC_9(VAR_14);

  return VAR_2;
 }

 FUNC_8(VAR_14->AdminOptionList);
 {
  FUNC_2(VAR_14, 0);

  for (VAR_11 = 0;VAR_11 < VAR_10->NumItem;VAR_11++)
  {
   ADMIN_OPTION *VAR_16 = &VAR_10->Items[VAR_11];
   ADMIN_OPTION *VAR_17 = FUNC_14(sizeof(ADMIN_OPTION));

   FUNC_11(VAR_17->Name, sizeof(VAR_17->Name), VAR_16->Name);
   VAR_17->Value = VAR_16->Value;

   FUNC_6(VAR_14->AdminOptionList, VAR_17);
  }

  FUNC_1(VAR_14, 0);
 }
 FUNC_13(VAR_14->AdminOptionList);

 FUNC_0(VAR_9, ((void*)0), "LA_SET_HUB_ADMIN_OPTION", VAR_14->Name);

 VAR_14->CurrentVersion++;
 FUNC_10(VAR_14);

 FUNC_9(VAR_14);

 FUNC_5(VAR_12);

 return VAR_4;
}
