
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int lock; void* Note; void* RealName; } ;
typedef TYPE_1__ USERGROUP ;
typedef int UINT ;
struct TYPE_15__ {int ServerAdmin; TYPE_2__* Server; } ;
struct TYPE_14__ {int Name; int Policy; int Note; int Realname; int HubName; } ;
struct TYPE_13__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_SET_GROUP ;
typedef int HUB ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (TYPE_4__*,int *,char*,int ) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (void*) ;
 int * FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int VAR_7 ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_14 (TYPE_1__*,int ) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;

UINT FUNC_18(ADMIN *VAR_9, RPC_SET_GROUP *VAR_10)
{
 SERVER *VAR_11 = VAR_9->Server;
 CEDAR *VAR_12 = VAR_11->Cedar;
 HUB *VAR_13 = ((void*)0);
 UINT VAR_14 = VAR_5;

 if (FUNC_8(VAR_10->Name) || FUNC_9(VAR_10->Name) == 0)
 {
  return VAR_2;
 }

 VAR_0;
 VAR_7;
 if (VAR_11->ServerType == VAR_8)
 {
  return VAR_4;
 }

 FUNC_11(VAR_12);
 {
  VAR_13 = FUNC_5(VAR_12, VAR_10->HubName);
 }
 FUNC_17(VAR_12);

 if (VAR_13 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_9->ServerAdmin == 0 && FUNC_6(VAR_13, "no_change_groups") != 0)
 {
  FUNC_13(VAR_13);
  return VAR_3;
 }

 FUNC_2(VAR_13);
 {
  USERGROUP *VAR_15 = FUNC_1(VAR_13, VAR_10->Name);
  if (VAR_15 == ((void*)0))
  {
   VAR_14 = VAR_6;
  }
  else
  {
   FUNC_10(VAR_15->lock);
   {
    FUNC_4(VAR_15->RealName);
    FUNC_4(VAR_15->Note);
    VAR_15->RealName = FUNC_15(VAR_10->Realname);
    VAR_15->Note = FUNC_15(VAR_10->Note);
   }
   FUNC_16(VAR_15->lock);

   FUNC_14(VAR_15, VAR_10->Policy);

   FUNC_12(VAR_15);

   FUNC_0(VAR_9, VAR_13, "LA_SET_GROUP", VAR_10->Name);
  }
 }
 FUNC_3(VAR_13);

 FUNC_13(VAR_13);

 FUNC_7(VAR_11);

 return VAR_14;
}
