
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int Enabled; int * Listener; } ;
typedef TYPE_1__ SERVER_LISTENER ;
typedef int SERVER ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;

bool FUNC_3(SERVER *VAR_0, UINT VAR_1)
{
 SERVER_LISTENER *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return 0;
 }


 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (VAR_2->Enabled == 0 || VAR_2->Listener == ((void*)0))
 {

  return 1;
 }


 FUNC_2(VAR_2->Listener);


 FUNC_0(VAR_2->Listener);
 VAR_2->Listener = ((void*)0);

 VAR_2->Enabled = 0;

 return 1;
}
