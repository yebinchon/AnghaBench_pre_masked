
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Name; } ;
typedef TYPE_1__ USERGROUP ;
typedef scalar_t__ UINT ;
typedef int LIST ;
typedef int FOLDER ;


 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int *) ;

void FUNC_6(FOLDER *VAR_0, LIST *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_1);
 {
  UINT VAR_2;
  for (VAR_2 = 0;VAR_2 < FUNC_2(VAR_1);VAR_2++)
  {
   USERGROUP *VAR_3 = FUNC_1(VAR_1, VAR_2);
   FUNC_4(FUNC_0(VAR_0, VAR_3->Name), VAR_3);
  }
 }
 FUNC_5(VAR_1);
}
