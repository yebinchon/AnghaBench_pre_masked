
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {int (* Write ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ CONSOLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int *,scalar_t__,int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;

void FUNC_5(CONSOLE *VAR_2, UINT VAR_3)
{
 wchar_t VAR_4[VAR_1];

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_4, sizeof(VAR_4), FUNC_2("CMD_VPNCMD_ERROR"),
  VAR_3, FUNC_0(VAR_3));
 VAR_2->Write(VAR_2, VAR_4);

 if (VAR_3 == VAR_0)
 {
  VAR_2->Write(VAR_2, FUNC_2("CMD_DISCONNECTED_MSG"));
 }
}
