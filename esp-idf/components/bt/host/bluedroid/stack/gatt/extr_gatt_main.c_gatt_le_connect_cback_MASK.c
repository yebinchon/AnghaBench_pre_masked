
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* payload_size; int att_lcid; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef int tGATTS_SRV_CHG ;
typedef scalar_t__ tBT_TRANSPORT ;
typedef int UINT16 ;
typedef scalar_t__ BOOLEAN ;
typedef int* BD_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 TYPE_1__* FUNC_4 (int*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int*,int ,scalar_t__) ;
 TYPE_1__* FUNC_7 (int*,scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int * FUNC_9 (int*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_12 (UINT16 VAR_8, BD_ADDR VAR_9, BOOLEAN VAR_10,
                                   UINT16 VAR_11, tBT_TRANSPORT VAR_12)
{

    tGATT_TCB *VAR_13 = FUNC_7(VAR_9, VAR_12);
    BOOLEAN VAR_14 = VAR_2;
    tGATTS_SRV_CHG *VAR_15 = ((void*)0);


    if (VAR_12 == VAR_0) {
        return;
    }

    FUNC_0 ("GATT   ATT protocol channel with BDA: %08x%04x is %s",
                      (VAR_9[0] << 24) + (VAR_9[1] << 16) + (VAR_9[2] << 8) + VAR_9[3],
                      (VAR_9[4] << 8) + VAR_9[5], (VAR_10) ? "connected" : "disconnected");

    if ((VAR_15 = FUNC_9(VAR_9)) != ((void*)0)) {
        VAR_14 = VAR_7;
    } else {
        if (FUNC_2(VAR_9)) {
            FUNC_3(VAR_9);
        }
    }

    if (VAR_10) {

        if (VAR_13) {

            if ( FUNC_8(VAR_13) == VAR_3) {

                FUNC_11(VAR_13, VAR_4);
                VAR_13->payload_size = VAR_5;

                FUNC_10(VAR_13);
            }
            if (VAR_14) {

                FUNC_5 (VAR_15);

            }
        }


        else {
            if ((VAR_13 = FUNC_4(VAR_9, VAR_1)) != ((void*)0)) {
                VAR_13->att_lcid = VAR_6;

                FUNC_11(VAR_13, VAR_4);

                VAR_13->payload_size = VAR_5;

                FUNC_10 (VAR_13);
                if (VAR_14) {

                    FUNC_5 (VAR_15);

                }
            } else {
                FUNC_1("CCB max out, no rsources");
            }
        }
    } else {
        FUNC_6(VAR_9, VAR_11, VAR_12);
        FUNC_0 ("ATT disconnected");
    }
}
