
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
struct TYPE_11__ {int UseDhcp; int HubName; } ;
typedef TYPE_1__ VH_OPTION ;
typedef scalar_t__ UINT ;
struct TYPE_13__ {int (* Write ) (TYPE_3__*,int ) ;} ;
struct TYPE_12__ {int Rpc; int * HubName; } ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef TYPE_3__ CONSOLE ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_3__*,char*,int *,int *,int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_3__*,int ) ;

UINT FUNC_9(CONSOLE *VAR_2, char *VAR_3, wchar_t *VAR_4, void *VAR_5)
{
 LIST *VAR_6;
 PS *VAR_7 = (PS *)VAR_5;
 UINT VAR_8 = 0;
 VH_OPTION VAR_9;


 if (VAR_7->HubName == ((void*)0))
 {
  VAR_2->Write(VAR_2, FUNC_7("CMD_Hub_Not_Selected"));
  return VAR_0;
 }

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4, ((void*)0), 0);
 if (VAR_6 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_6(&VAR_9, sizeof(VAR_9));
 FUNC_5(VAR_9.HubName, sizeof(VAR_9.HubName), VAR_7->HubName);


 VAR_8 = FUNC_3(VAR_7->Rpc, &VAR_9);

 if (VAR_8 != VAR_1)
 {

  FUNC_0(VAR_2, VAR_8);
  FUNC_1(VAR_6);
  return VAR_8;
 }
 else
 {
  VAR_9.UseDhcp = 1;

  FUNC_5(VAR_9.HubName, sizeof(VAR_9.HubName), VAR_7->HubName);
  VAR_8 = FUNC_4(VAR_7->Rpc, &VAR_9);

  if (VAR_8 != VAR_1)
  {

   FUNC_0(VAR_2, VAR_8);
   FUNC_1(VAR_6);
   return VAR_8;
  }
 }

 FUNC_1(VAR_6);

 return 0;
}
