
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ListenMode; scalar_t__ ServerMode; int ref; } ;
typedef TYPE_1__ SOCK ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(SOCK *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (FUNC_2(VAR_0->ref) == 0)
 {
  if (VAR_0->ListenMode == 0 && VAR_0->ServerMode)
  {
   FUNC_1("");
  }
  FUNC_0(VAR_0);
 }
}
