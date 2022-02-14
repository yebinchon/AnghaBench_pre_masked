
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ max_bd_entries; scalar_t__ num_bd_entries; int * p_bd_db; } ;
typedef TYPE_1__ tBTM_INQUIRY_VAR_ST ;
struct TYPE_4__ {TYPE_1__ btm_inq_vars; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1 (void)
{
    tBTM_INQUIRY_VAR_ST *VAR_1 = &VAR_0.btm_inq_vars;

    if (VAR_1->p_bd_db) {
        FUNC_0(VAR_1->p_bd_db);
        VAR_1->p_bd_db = ((void*)0);
    }
    VAR_1->num_bd_entries = 0;
    VAR_1->max_bd_entries = 0;
}
