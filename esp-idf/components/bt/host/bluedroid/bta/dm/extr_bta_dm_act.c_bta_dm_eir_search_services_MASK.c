
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * remote_bd_addr; } ;
typedef TYPE_1__ tBTM_INQ_RESULTS ;
typedef scalar_t__ tBTM_EIR_SEARCH_RESULT ;
typedef int tBTA_SERVICE_MASK ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__* VAR_6 ;

__attribute__((used)) static void FUNC_4( tBTM_INQ_RESULTS *VAR_7,
                                        tBTA_SERVICE_MASK *VAR_8,
                                        tBTA_SERVICE_MASK *VAR_9)
{
    tBTA_SERVICE_MASK VAR_10 = 0;
    tBTM_EIR_SEARCH_RESULT VAR_11;

    FUNC_0("BTA searching services in EIR of BDA:0x%02X%02X%02X%02X%02X%02X",
                     VAR_7->remote_bd_addr[0], VAR_7->remote_bd_addr[1],
                     VAR_7->remote_bd_addr[2], VAR_7->remote_bd_addr[3],
                     VAR_7->remote_bd_addr[4], VAR_7->remote_bd_addr[5]);

    FUNC_0("    with services_to_search=0x%08X", *VAR_8);




    while (VAR_10 < (VAR_0 - 1))



    {
        if ( *VAR_8
                & (tBTA_SERVICE_MASK)(FUNC_2(VAR_10))) {
            VAR_11 = FUNC_3( VAR_7,
                                               VAR_6[VAR_10] );


            if ((VAR_11 != VAR_1) &&
                    (VAR_6[VAR_10] == VAR_3)) {
                VAR_11 = FUNC_3 (VAR_7, VAR_4);
            }

            if ( VAR_11 == VAR_1 ) {


                if ( VAR_6[VAR_10]
                        != VAR_5 ) {

                    *VAR_9 |=
                        (tBTA_SERVICE_MASK)(FUNC_2(VAR_10));

                    *VAR_8 &=
                        (tBTA_SERVICE_MASK)(~(FUNC_2(VAR_10)));
                }
            } else if ( VAR_11 == VAR_2 ) {

                *VAR_8 &=
                    (tBTA_SERVICE_MASK)(~(FUNC_2(VAR_10)));
            }
        }

        VAR_10++;
    }

    FUNC_1("BTA EIR search result, services_to_search=0x%08X, services_found=0x%08X",
                     *VAR_8, *VAR_9);
}
