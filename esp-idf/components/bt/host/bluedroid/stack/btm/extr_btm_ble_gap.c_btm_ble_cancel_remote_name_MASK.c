
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rmt_name_timer_ent; int remname_bda; int remname_active; } ;
typedef TYPE_1__ tBTM_INQUIRY_VAR_ST ;
struct TYPE_4__ {TYPE_1__ btm_inq_vars; } ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;

BOOLEAN FUNC_3(BD_ADDR VAR_4)
{
    tBTM_INQUIRY_VAR_ST *VAR_5 = &VAR_3.btm_inq_vars;
    BOOLEAN VAR_6 = VAR_2;





    VAR_5->remname_active = VAR_1;
    FUNC_2(VAR_5->remname_bda, 0, VAR_0);
    FUNC_1(&VAR_5->rmt_name_timer_ent);

    return VAR_6;
}
