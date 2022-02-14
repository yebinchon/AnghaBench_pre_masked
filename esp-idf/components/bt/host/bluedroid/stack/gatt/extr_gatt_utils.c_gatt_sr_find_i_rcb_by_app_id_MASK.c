
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ service_instance; int app_uuid; int p_db; scalar_t__ in_use; } ;
typedef TYPE_1__ tGATT_SR_REG ;
typedef int tBT_UUID ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_4__ {TYPE_1__* sr_reg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ) ;

UINT8 FUNC_4(tBT_UUID *VAR_2, tBT_UUID *VAR_3, UINT16 VAR_4)
{
    UINT8 VAR_5 = 0;
    tGATT_SR_REG *VAR_6;
    tBT_UUID *VAR_7;

    for (VAR_5 = 0, VAR_6 = VAR_1.sr_reg; VAR_5 < VAR_0; VAR_5++, VAR_6++) {
        if ( VAR_6->in_use ) {
            VAR_7 = FUNC_3 (VAR_6->p_db);

            if (VAR_7 &&
                    FUNC_2 (*VAR_2, VAR_6->app_uuid ) &&
                    FUNC_2 (*VAR_3, *VAR_7) &&
                    (VAR_4 == VAR_6->service_instance)) {
                FUNC_0 ("Active Service Found ");
                FUNC_1(*VAR_3);

                break;
            }
        }
    }
    return VAR_5;
}
