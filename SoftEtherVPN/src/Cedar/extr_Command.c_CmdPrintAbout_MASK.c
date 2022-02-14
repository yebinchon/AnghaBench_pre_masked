
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int exe ;
struct TYPE_8__ {int BuildInfo; int VerString; } ;
struct TYPE_7__ {int (* Write ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ CONSOLE ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int,int ,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int *) ;

void FUNC_6(CONSOLE *VAR_2)
{
 CEDAR *VAR_3;
 wchar_t VAR_4[VAR_1];
 char VAR_5[VAR_0];

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_1(((void*)0), ((void*)0));

 FUNC_0(VAR_5, sizeof(VAR_5));

 FUNC_3(VAR_4, sizeof(VAR_4), FUNC_4("CMD_VPNCMD_ABOUT"),
  VAR_3->VerString, VAR_3->BuildInfo);

 VAR_2->Write(VAR_2, VAR_4);

 FUNC_2(VAR_3);
}
