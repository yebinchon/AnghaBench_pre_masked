
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct setprivexec_args {scalar_t__ flag; } ;
typedef TYPE_1__* proc_t ;
typedef int int32_t ;
struct TYPE_3__ {int p_debugger; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;

int
FUNC_1(proc_t VAR_1, struct setprivexec_args *VAR_2, int32_t *VAR_3)
{
 FUNC_0(VAR_0, VAR_2->flag);
 *VAR_3 = VAR_1->p_debugger;
 VAR_1->p_debugger = (VAR_2->flag != 0);
 return(0);
}
