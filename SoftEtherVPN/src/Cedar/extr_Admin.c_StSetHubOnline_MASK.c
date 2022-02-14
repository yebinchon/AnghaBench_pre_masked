
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_19__ {int ServerAdmin; TYPE_1__* Server; } ;
struct TYPE_18__ {int CurrentVersion; } ;
struct TYPE_17__ {int Online; int HubName; } ;
struct TYPE_16__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_SET_HUB_ONLINE ;
typedef TYPE_3__ HUB ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *) ;

UINT FUNC_10(ADMIN *VAR_7, RPC_SET_HUB_ONLINE *VAR_8)
{
 SERVER *VAR_9 = VAR_7->Server;
 CEDAR *VAR_10 = VAR_9->Cedar;
 HUB *VAR_11;

 if (VAR_9->ServerType == VAR_6)
 {
  return VAR_3;
 }


 VAR_5;

 VAR_0;

 FUNC_4(VAR_10);
 {
  VAR_11 = FUNC_1(VAR_10, VAR_8->HubName);
 }
 FUNC_9(VAR_10);

 if (VAR_11 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_7->ServerAdmin == 0 && VAR_8->Online && FUNC_2(VAR_11, "no_online") != 0)
 {
  FUNC_5(VAR_11);
  return VAR_2;
 }

 if (VAR_7->ServerAdmin == 0 && VAR_8->Online == 0 && FUNC_2(VAR_11, "no_offline") != 0)
 {
  FUNC_5(VAR_11);
  return VAR_2;
 }

 if (VAR_8->Online)
 {
  FUNC_0(VAR_7, VAR_11, "LA_SET_HUB_ONLINE");
  FUNC_7(VAR_11);
 }
 else
 {
  FUNC_0(VAR_7, VAR_11, "LA_SET_HUB_OFFLINE");
  FUNC_6(VAR_11);
 }

 VAR_11->CurrentVersion++;
 FUNC_8(VAR_11);

 FUNC_3(VAR_9);

 FUNC_5(VAR_11);

 return VAR_4;
}
