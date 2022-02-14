
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
struct TYPE_18__ {scalar_t__ Type; int CurrentVersion; } ;
struct TYPE_17__ {int HubName; } ;
struct TYPE_16__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_HUB ;
typedef TYPE_3__ HUB ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,int) ;
 TYPE_3__* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *) ;

UINT FUNC_10(ADMIN *VAR_8, RPC_HUB *VAR_9)
{
 SERVER *VAR_10 = VAR_8->Server;
 CEDAR *VAR_11 = VAR_10->Cedar;
 HUB *VAR_12;

 VAR_0;


 FUNC_6(VAR_11);
 {
  VAR_12 = FUNC_2(VAR_11, VAR_9->HubName);
 }
 FUNC_9(VAR_11);

 if (VAR_12 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_12->Type == VAR_6 || FUNC_4(VAR_10, "b_support_securenat") == 0)
 {
  FUNC_7(VAR_12);
  return VAR_4;
 }
 if (VAR_10->ServerType == VAR_7)
 {
  FUNC_7(VAR_12);
  return VAR_3;
 }

 if (VAR_8->ServerAdmin == 0 && FUNC_3(VAR_12, "no_securenat") != 0)
 {
  FUNC_7(VAR_12);
  return VAR_2;
 }

 FUNC_0(VAR_8, VAR_12, "LA_ENABLE_SNAT");

 FUNC_1(VAR_12, 1);

 VAR_12->CurrentVersion++;
 FUNC_8(VAR_12);

 FUNC_5(VAR_10);

 FUNC_7(VAR_12);

 return VAR_5;
}
