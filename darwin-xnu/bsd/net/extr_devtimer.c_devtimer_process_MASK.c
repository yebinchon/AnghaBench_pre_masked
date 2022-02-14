
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* devtimer_timeout_func ) (int ,int ,int ) ;
typedef TYPE_1__* devtimer_ref ;
typedef int (* devtimer_process_func ) (TYPE_1__*,int ) ;
struct TYPE_6__ {int dt_generation; int dt_arg2; int dt_arg1; int dt_arg0; int (* dt_timeout_func ) (int ,int ,int ) ;int (* dt_process_func ) (TYPE_1__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4(void * VAR_2, void * VAR_3)
{
    int VAR_4 = *(int*)VAR_3;
    devtimer_process_func VAR_5;
    devtimer_timeout_func VAR_6;
    devtimer_ref VAR_7 = (devtimer_ref)VAR_2;

    VAR_5 = VAR_7->dt_process_func;
    if (VAR_5 != ((void*)0)) {
 (*VAR_5)(VAR_7, VAR_0);
    }
    VAR_6 = VAR_7->dt_timeout_func;
    if (VAR_6 != ((void*)0)) {
 VAR_7->dt_timeout_func = ((void*)0);
 if (VAR_7->dt_generation == VAR_4) {
     (*VAR_6)(VAR_7->dt_arg0, VAR_7->dt_arg1, VAR_7->dt_arg2);
 }
    }
    FUNC_0(VAR_7);
    if (VAR_5 != ((void*)0)) {
 (*VAR_5)(VAR_7, VAR_1);
    }
    return;
}
