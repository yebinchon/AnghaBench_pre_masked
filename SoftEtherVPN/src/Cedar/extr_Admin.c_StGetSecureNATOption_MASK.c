
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int hubname ;
struct TYPE_12__ {char* HubName; int ApplyDhcpPushRoutes; } ;
typedef TYPE_1__ VH_OPTION ;
typedef int UINT ;
struct TYPE_15__ {TYPE_2__* Server; } ;
struct TYPE_14__ {scalar_t__ Type; char* Name; int SecureNATOption; } ;
struct TYPE_13__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ HUB ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (char*,int,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int) ;

UINT FUNC_8(ADMIN *VAR_8, VH_OPTION *VAR_9)
{
 SERVER *VAR_10 = VAR_8->Server;
 CEDAR *VAR_11 = VAR_10->Cedar;
 HUB *VAR_12;
 char VAR_13[VAR_6 + 1];

 FUNC_5(VAR_13, sizeof(VAR_13), VAR_9->HubName);

 VAR_0;

 FUNC_3(VAR_11);
 {
  VAR_12 = FUNC_1(VAR_11, VAR_9->HubName);
 }
 FUNC_6(VAR_11);

 if (VAR_12 == ((void*)0))
 {
  return VAR_1;
 }

 if (VAR_12->Type == VAR_5 || FUNC_2(VAR_10, "b_support_securenat") == 0)
 {
  FUNC_4(VAR_12);
  return VAR_3;
 }
 if (VAR_10->ServerType == VAR_7)
 {
  FUNC_4(VAR_12);
  return VAR_2;
 }

 FUNC_7(VAR_9, sizeof(VH_OPTION));
 FUNC_0(VAR_9, VAR_12->SecureNATOption, sizeof(VH_OPTION));
 FUNC_5(VAR_9->HubName, sizeof(VAR_9->HubName), VAR_12->Name);
 VAR_9->ApplyDhcpPushRoutes = 1;

 FUNC_4(VAR_12);

 return VAR_4;
}
