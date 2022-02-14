
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_7__ {TYPE_1__* Server; } ;
struct TYPE_6__ {int Logger; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int *,int *) ;
 int FUNC_4 (char*,int *) ;

void FUNC_5(CEDAR *VAR_1, wchar_t *VAR_2)
{
 SERVER *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = VAR_1->Server;
 if (VAR_3 == ((void*)0))
 {
  return;
 }

 if (FUNC_1())
 {
  FUNC_4(L"LOG: %s\n", VAR_2);
 }

 if (FUNC_2(VAR_3) != VAR_0)
 {
  FUNC_3(VAR_3, "SERVER_LOG", ((void*)0), VAR_2);
 }
 else
 {
  FUNC_0(VAR_3->Logger, VAR_2);
 }
}
