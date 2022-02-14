
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * remname_bda; scalar_t__ remname_active; } ;
struct TYPE_4__ {TYPE_1__ btm_inq_vars; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int *,int *,int ,int ) ;
 int FUNC_2 (int *,int *,int ) ;

void FUNC_3 (void)
{
    FUNC_0 ("btm_inq_rmt_name_failed()  remname_active=%d\n", VAR_1.btm_inq_vars.remname_active);

    if (VAR_1.btm_inq_vars.remname_active) {
        FUNC_1 (VAR_1.btm_inq_vars.remname_bda, ((void*)0), 0, VAR_0);
    } else {
        FUNC_1 (((void*)0), ((void*)0), 0, VAR_0);
    }

    FUNC_2 (((void*)0), ((void*)0), VAR_0);

}
