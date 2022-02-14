
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int Initialized; TYPE_1__* Api; } ;
struct TYPE_6__ {scalar_t__ (* C_Initialize ) (int *) ;} ;
typedef TYPE_2__ SECURE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *) ;

bool FUNC_3(SECURE *VAR_1)
{
 bool VAR_2 = 0;

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }






 if (VAR_1->Api->C_Initialize(((void*)0)) != VAR_0)
 {

  FUNC_0(VAR_1);
  return 0;
 }

 VAR_1->Initialized = 1;

 return VAR_2;
}
