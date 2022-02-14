
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct ble_gatt_access_ctxt {int op; int om; TYPE_1__* chr; } ;
typedef int ble_uuid_t ;
struct TYPE_6__ {int u; } ;
struct TYPE_5__ {int u; } ;
struct TYPE_4__ {int * uuid; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (int ,int,int,int*,int *) ;
 int VAR_4 ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(uint16_t VAR_5, uint16_t VAR_6,
                             struct ble_gatt_access_ctxt *VAR_7,
                             void *VAR_8)
{
    const ble_uuid_t *VAR_9;
    int VAR_10;
    int VAR_11;

    VAR_9 = VAR_7->chr->uuid;





    if (FUNC_1(VAR_9, &VAR_2.u) == 0) {
        FUNC_0(VAR_7->op == 129);


        VAR_10 = FUNC_4();
        VAR_11 = FUNC_3(VAR_7->om, &VAR_10, sizeof VAR_10);
        return VAR_11 == 0 ? 0 : VAR_0;
    }

    if (FUNC_1(VAR_9, &VAR_3.u) == 0) {
        switch (VAR_7->op) {
        case 129:
            VAR_11 = FUNC_3(VAR_7->om, &VAR_4,
                                sizeof VAR_4);
            return VAR_11 == 0 ? 0 : VAR_0;

        case 128:
            VAR_11 = FUNC_2(VAR_7->om,
                                    sizeof VAR_4,
                                    sizeof VAR_4,
                                    &VAR_4, ((void*)0));
            return VAR_11;

        default:
            FUNC_0(0);
            return VAR_1;
        }
    }




    FUNC_0(0);
    return VAR_1;
}
