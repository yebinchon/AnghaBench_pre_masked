
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Halt; int Print; int Param; } ;
typedef TYPE_1__ TTC ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;

void FUNC_2(TTC *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0->Param, VAR_0->Print, FUNC_1("TTC_STOPPING"));

 VAR_0->Halt = 1;
}
