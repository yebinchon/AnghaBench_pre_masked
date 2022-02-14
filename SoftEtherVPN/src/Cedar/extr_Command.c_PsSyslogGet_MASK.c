
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int t ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int Rpc; } ;
struct TYPE_5__ {scalar_t__ SaveType; int Port; int Hostname; } ;
typedef TYPE_1__ SYSLOG_SETTING ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (scalar_t__) ;
 int VAR_2 ;
 int * FUNC_6 (int *,char*,int *,int *,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (char*) ;

UINT FUNC_12(CONSOLE *VAR_4, char *VAR_5, wchar_t *VAR_6, void *VAR_7)
{
 LIST *VAR_8;
 PS *VAR_9 = (PS *)VAR_7;
 UINT VAR_10 = 0;
 SYSLOG_SETTING VAR_11;

 VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_6, ((void*)0), 0);
 if (VAR_8 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_10(&VAR_11, sizeof(VAR_11));


 VAR_10 = FUNC_7(VAR_9->Rpc, &VAR_11);

 if (VAR_10 != VAR_1)
 {

  FUNC_0(VAR_4, VAR_10);
  FUNC_4(VAR_8);
  return VAR_10;
 }
 else
 {
  wchar_t VAR_12[VAR_2];
  CT *VAR_13 = FUNC_3();

  FUNC_2(VAR_13, FUNC_11("CMD_SyslogGet_COLUMN_1"), FUNC_5(VAR_11.SaveType));

  if (VAR_11.SaveType != VAR_3)
  {
   FUNC_8(VAR_12, sizeof(VAR_12), VAR_11.Hostname);
   FUNC_2(VAR_13, FUNC_11("CMD_SyslogGet_COLUMN_2"), VAR_12);

   FUNC_9(VAR_12, VAR_11.Port);
   FUNC_2(VAR_13, FUNC_11("CMD_SyslogGet_COLUMN_3"), VAR_12);
  }

  FUNC_1(VAR_13, VAR_4);
 }

 FUNC_4(VAR_8);

 return 0;
}
