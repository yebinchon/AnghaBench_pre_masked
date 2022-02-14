
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
struct TYPE_3__ {scalar_t__* p_name; char* p_comm; } ;



char *
FUNC_0(proc_t VAR_0)
{
    if (VAR_0->p_name[0] != 0)
        return (&VAR_0->p_name[0]);
    return (&VAR_0->p_comm[0]);
}
