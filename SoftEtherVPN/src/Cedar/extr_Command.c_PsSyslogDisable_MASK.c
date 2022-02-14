
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int Rpc; } ;
struct TYPE_6__ {int SaveType; } ;
typedef TYPE_1__ SYSLOG_SETTING ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*,int *,int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;

UINT FUNC_6(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 PS *VAR_8 = (PS *)VAR_6;
 UINT VAR_9 = 0;
 SYSLOG_SETTING VAR_10;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_5(&VAR_10, sizeof(VAR_10));


 VAR_9 = FUNC_3(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_1(VAR_7);
  return VAR_9;
 }

 VAR_10.SaveType = VAR_2;


 VAR_9 = FUNC_4(VAR_8->Rpc, &VAR_10);

 if (VAR_9 != VAR_1)
 {

  FUNC_0(VAR_3, VAR_9);
  FUNC_1(VAR_7);
  return VAR_9;
 }

 FUNC_1(VAR_7);

 return 0;
}
