
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hProcess; } ;
struct TYPE_5__ {TYPE_1__ child_process; } ;
typedef TYPE_2__ proc_instance_t ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ VAR_0 ;

int FUNC_1(proc_instance_t *VAR_1)
{
    DWORD VAR_2;
    if (!FUNC_0(VAR_1->child_process.hProcess, &VAR_2)) {
        return -2;
    }
    if (VAR_2 == VAR_0) {
        return -1;
    }
    return (int) VAR_2;
}
