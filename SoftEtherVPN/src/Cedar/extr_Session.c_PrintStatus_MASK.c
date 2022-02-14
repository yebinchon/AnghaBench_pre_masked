
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_8__ {TYPE_2__* Account; TYPE_1__* Cedar; } ;
struct TYPE_7__ {int (* StatusPrinter ) (TYPE_3__*,int *) ;} ;
struct TYPE_6__ {int * Client; } ;
typedef TYPE_3__ SESSION ;


 int FUNC_0 (TYPE_3__*,int *) ;

void FUNC_1(SESSION *VAR_0, wchar_t *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_0->Account == ((void*)0) || VAR_0->Cedar->Client == ((void*)0)
  || VAR_0->Account->StatusPrinter == ((void*)0))
 {
  return;
 }


 VAR_0->Account->StatusPrinter(VAR_0, VAR_1);
}
