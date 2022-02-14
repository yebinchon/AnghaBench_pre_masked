
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {TYPE_1__* Cedar; int * Account; } ;
struct TYPE_4__ {int * Client; } ;
typedef TYPE_2__ SESSION ;


 int FUNC_0 (int *) ;

void FUNC_1(SESSION *VAR_0, UINT VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_0->Account == ((void*)0) || VAR_0->Cedar->Client == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->Cedar->Client);
}
