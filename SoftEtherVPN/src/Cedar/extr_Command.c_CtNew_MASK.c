
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* Rows; void* Columns; } ;
typedef TYPE_1__ CT ;


 void* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;

CT *FUNC_2()
{
 CT *VAR_0;

 VAR_0 = FUNC_1(sizeof(CT));
 VAR_0->Columns = FUNC_0(((void*)0));
 VAR_0->Rows = FUNC_0(((void*)0));

 return VAR_0;
}
