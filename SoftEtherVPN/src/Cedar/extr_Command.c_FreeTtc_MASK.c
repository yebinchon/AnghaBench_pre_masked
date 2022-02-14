
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {scalar_t__ ErrorCode; int InitedEvent; int Result; int Print; int Param; int Thread; } ;
typedef int TT_RESULT ;
typedef TYPE_1__ TTC ;


 int FUNC_0 (int *,int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;

UINT FUNC_7(TTC *VAR_3, TT_RESULT *VAR_4)
{
 UINT VAR_5;

 if (VAR_3 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_5(VAR_3->Thread, VAR_2);
 FUNC_3(VAR_3->Thread);

 FUNC_4(VAR_3->Param, VAR_3->Print, FUNC_6("TTC_FREE"));

 VAR_5 = VAR_3->ErrorCode;

 if (VAR_5 == VAR_1)
 {
  if (VAR_4 != ((void*)0))
  {
   FUNC_0(VAR_4, &VAR_3->Result, sizeof(TT_RESULT));
  }
 }

 FUNC_2(VAR_3->InitedEvent);

 FUNC_1(VAR_3);

 return VAR_5;
}
