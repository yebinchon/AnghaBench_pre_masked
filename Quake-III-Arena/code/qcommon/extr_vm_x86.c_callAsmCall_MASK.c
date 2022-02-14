
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int programStack; int (* systemCall ) (int*) ;scalar_t__ dataBase; } ;
typedef TYPE_1__ vm_t ;
typedef int byte ;


 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int*) ;

void FUNC_1(void)
{
 vm_t *VAR_4;
 int *VAR_5;

 VAR_4 = VAR_3;
 VAR_5 = VAR_0;


 VAR_3->programStack = VAR_1 - 4;
 *(int *)((byte *)VAR_3->dataBase + VAR_1 + 4) = VAR_2;

 *(VAR_5+1) = VAR_3->systemCall( (int *)((byte *)VAR_3->dataBase + VAR_1 + 4) );

  VAR_3 = VAR_4;
}
