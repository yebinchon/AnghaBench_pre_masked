
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_4__ {int adv_mode; } ;
struct TYPE_5__ {TYPE_1__ inq_var; } ;
struct TYPE_6__ {TYPE_2__ ble_ctr_cb; } ;
typedef void* BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,scalar_t__,int ,scalar_t__,scalar_t__) ;
 void* VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (scalar_t__,scalar_t__*) ;
 int VAR_11 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,scalar_t__,scalar_t__,void*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,scalar_t__*) ;
 int VAR_12 ;
 int FUNC_12 (int ) ;
 void* FUNC_13 (scalar_t__,int ,scalar_t__) ;
 TYPE_3__ VAR_13 ;
 void* FUNC_14 (int ,scalar_t__*,int ) ;
 int FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (int ,scalar_t__) ;
 int FUNC_17 (int ,scalar_t__,int ,scalar_t__,int ,int ,int ) ;
 void* VAR_14 ;

void FUNC_18(UINT8 *VAR_15, UINT16 VAR_16, BOOLEAN VAR_17)
{

    UINT8 *VAR_18 = VAR_15, VAR_19;

    UINT8 VAR_20, VAR_21, VAR_22;
    UINT16 VAR_23;
    BD_ADDR VAR_24;
    BD_ADDR VAR_25, VAR_26;
    UINT16 VAR_27, VAR_28, VAR_29;
    BOOLEAN VAR_30 = VAR_6;
    FUNC_6(VAR_16);
    FUNC_5 (VAR_21, VAR_15);
    FUNC_4 (VAR_23, VAR_15);
    FUNC_5 (VAR_20, VAR_15);
    FUNC_5 (VAR_22, VAR_15);
    FUNC_3 (VAR_24, VAR_15);
    FUNC_1("status = %d, handle = %d, role = %d, bda_type = %d",VAR_21,VAR_23,VAR_20,VAR_22);
    if (VAR_21 == 0) {
        if (VAR_17) {
            FUNC_3 (VAR_25, VAR_15);
            FUNC_3 (VAR_26, VAR_15);
        }

        VAR_19 = VAR_22;
        VAR_30 = FUNC_14 (VAR_24, &VAR_22, VAR_11);
        if (!VAR_30 && FUNC_0(VAR_24)) {

            VAR_14 = VAR_17;
            FUNC_11(VAR_24, VAR_12, VAR_18);

            VAR_14 = VAR_6;
        } else

        {
            FUNC_4 (VAR_27, VAR_15);
            FUNC_4 (VAR_28, VAR_15);
            FUNC_4 (VAR_29, VAR_15);
            VAR_23 = FUNC_2 (VAR_23);

            FUNC_7(VAR_24, VAR_23, VAR_7, VAR_20, VAR_22, VAR_30);
            FUNC_17 (VAR_23, VAR_20, VAR_24, VAR_22, VAR_27,
                              VAR_28, VAR_29);


            if (VAR_17) {
                FUNC_9(VAR_24, VAR_25);

                if (VAR_19 & VAR_1) {
                    FUNC_10(VAR_24, VAR_26, VAR_0);
                }
            }

        }
    } else {
        VAR_20 = VAR_9;
        if (VAR_21 != VAR_8) {
            FUNC_12(VAR_2);



        } else {




        }

    }

    BOOLEAN VAR_31 = FUNC_13(VAR_20, VAR_24, VAR_21);
    if (VAR_21 != VAR_10 && !VAR_31) {

        FUNC_16 (VAR_23, VAR_21);


        FUNC_15 (VAR_23, VAR_21);

    }
}
