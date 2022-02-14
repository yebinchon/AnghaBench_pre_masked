
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef scalar_t__ tBTM_SCO_ROUTE_TYPE ;
typedef int tBTM_SCO_PCM_PARAM ;
typedef int tBTM_SCO_DATA_CB ;
struct TYPE_3__ {int * p_data_cb; scalar_t__ sco_path; } ;
struct TYPE_4__ {TYPE_1__ sco_cb; } ;
typedef int * BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_2__ VAR_3 ;

tBTM_STATUS FUNC_1 (tBTM_SCO_ROUTE_TYPE VAR_4,
                               tBTM_SCO_DATA_CB *VAR_5,
                               tBTM_SCO_PCM_PARAM *VAR_6,
                               BOOLEAN VAR_7)
{
    FUNC_0(VAR_7);
    FUNC_0(VAR_6);
    VAR_3.sco_cb.sco_path = VAR_4;
    if (VAR_4 == VAR_1) {
        return VAR_2;
    } else if (VAR_4 == VAR_0) {
        if (VAR_5) {
            VAR_3.sco_cb.p_data_cb = VAR_5;
        }
    }

    return VAR_2;
}
