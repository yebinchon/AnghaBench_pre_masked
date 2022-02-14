
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_3__ {int remname_bda; scalar_t__ remname_active; } ;
typedef TYPE_1__ tBTM_INQUIRY_VAR_ST ;
struct TYPE_4__ {TYPE_1__ btm_inq_vars; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_2__ VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;

tBTM_STATUS FUNC_4 (void)
{
    tBTM_INQUIRY_VAR_ST *VAR_5 = &VAR_4.btm_inq_vars;

    FUNC_0 ("BTM_CancelRemoteDeviceName()\n");


    if (VAR_5->remname_active) {

        if (FUNC_1(VAR_5->remname_bda)) {
            if (FUNC_2(VAR_5->remname_bda)) {
                return (VAR_0);
            } else {
                return (VAR_2);
            }
        } else

        {
            if (FUNC_3 (VAR_5->remname_bda)) {
                return (VAR_0);
            } else {
                return (VAR_1);
            }
        }
    } else {
        return (VAR_3);
    }
}
