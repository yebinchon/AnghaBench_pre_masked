
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* ServerName; struct TYPE_4__* CmdLine; struct TYPE_4__* AdminHub; struct TYPE_4__* HubName; } ;
typedef TYPE_1__ PS ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(PS *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->HubName);
 FUNC_0(VAR_0->AdminHub);
 FUNC_0(VAR_0->CmdLine);
 FUNC_0(VAR_0->ServerName);

 FUNC_0(VAR_0);
}
