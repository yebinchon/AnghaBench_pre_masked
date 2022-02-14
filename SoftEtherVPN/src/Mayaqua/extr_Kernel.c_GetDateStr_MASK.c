
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int wDay; int wMonth; int wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int FUNC_0 (char*,int ,char*,int ,int ,int ) ;

void FUNC_1(char *VAR_0, UINT VAR_1, SYSTEMTIME *VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, VAR_1, "%04u-%02u-%02u",
  VAR_2->wYear, VAR_2->wMonth, VAR_2->wDay);
}
