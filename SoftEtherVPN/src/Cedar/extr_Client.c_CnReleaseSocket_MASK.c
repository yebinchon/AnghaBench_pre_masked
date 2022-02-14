
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int Halt; } ;
typedef int SOCK ;
typedef int PACK ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_6(SOCK *VAR_3, PACK *VAR_4)
{
 UINT VAR_5 = 0;
 UINT VAR_6 = 0;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return;
 }

 VAR_5 = FUNC_2(VAR_4, "pid");





 if (VAR_6 == VAR_5)
 {
  return;
 }

 FUNC_0(VAR_1);
 {
  if (VAR_0 != ((void*)0))
  {
   if (VAR_0->Halt == 0)
   {
    FUNC_3(VAR_0);

    VAR_2 = FUNC_4() + (6 * 1000);
   }
  }
 }
 FUNC_5(VAR_1);
}
