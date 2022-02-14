
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Initialized; TYPE_1__* Api; } ;
struct TYPE_5__ {int (* C_Finalize ) (int *) ;} ;
typedef TYPE_2__ SECURE ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(SECURE *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->Initialized)
 {

  VAR_0->Api->C_Finalize(((void*)0));
  VAR_0->Initialized = 0;
 }





}
