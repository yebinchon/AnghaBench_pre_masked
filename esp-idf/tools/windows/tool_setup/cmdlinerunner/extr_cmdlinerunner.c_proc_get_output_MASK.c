
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pipe_server_handle; } ;
typedef TYPE_1__ proc_instance_t ;
typedef scalar_t__* LPSTR ;
typedef size_t DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__*,size_t,size_t*,int *) ;

DWORD FUNC_3(proc_instance_t *VAR_1, LPSTR VAR_2, DWORD VAR_3)
{
    DWORD VAR_4;
    BOOL VAR_5 = FUNC_2(VAR_1->pipe_server_handle, VAR_2,
            VAR_3 - 1, &VAR_4, ((void*)0));
    if (!VAR_5) {
        if (FUNC_0() == VAR_0) {
            return 0;
        } else {
            FUNC_1();
            return 0;
        }
    }
    VAR_2[VAR_4] = 0;
    return VAR_4;
}
