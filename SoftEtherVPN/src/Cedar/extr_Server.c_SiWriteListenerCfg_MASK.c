
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int DisableDos; int Port; int Enabled; } ;
typedef TYPE_1__ SERVER_LISTENER ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;

void FUNC_2(FOLDER *VAR_0, SERVER_LISTENER *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "Enabled", VAR_1->Enabled);
 FUNC_1(VAR_0, "Port", VAR_1->Port);
 FUNC_0(VAR_0, "DisableDos", VAR_1->DisableDos);
}
