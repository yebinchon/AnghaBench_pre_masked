
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* processors_in; int* processors_out; int arg5; int arg4; int arg3; int arg2; int arg1; int (* func ) (int ,int ,int ,int ,int ) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

void FUNC_2(void)
{
 int VAR_1 = FUNC_0();

 VAR_0.processors_in[VAR_1] = 1;
 VAR_0.func(VAR_0.arg1, VAR_0.arg2, VAR_0.arg3,
   VAR_0.arg4, VAR_0.arg5);
 VAR_0.processors_out[VAR_1] = 1;
}
