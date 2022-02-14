
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hThread; scalar_t__ hProcess; } ;
struct TYPE_6__ {TYPE_1__ child_process; scalar_t__ pipe_client_handle; scalar_t__ pipe_server_handle; } ;
typedef TYPE_2__ proc_instance_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(proc_instance_t *VAR_0)
{
    if (VAR_0->pipe_server_handle) {
        FUNC_0(VAR_0->pipe_server_handle);
    }
    if (VAR_0->pipe_client_handle) {
        FUNC_0(VAR_0->pipe_client_handle);
    }
    if (VAR_0->child_process.hProcess) {
        FUNC_3(VAR_0->child_process.hProcess, 1);
        FUNC_0(VAR_0->child_process.hProcess);
        FUNC_0(VAR_0->child_process.hThread);
    }
    FUNC_2(FUNC_1(), 0, VAR_0);
}
