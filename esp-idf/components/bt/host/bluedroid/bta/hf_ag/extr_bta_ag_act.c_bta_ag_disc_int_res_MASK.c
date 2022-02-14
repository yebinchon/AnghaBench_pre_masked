
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int open_services; scalar_t__ hsp_version; int conn_service; } ;
typedef TYPE_2__ tBTA_AG_SCB ;
struct TYPE_12__ {scalar_t__ status; } ;
struct TYPE_14__ {TYPE_1__ disc_result; } ;
typedef TYPE_3__ tBTA_AG_DATA ;
typedef scalar_t__ UINT16 ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,TYPE_3__*) ;

void FUNC_6(tBTA_AG_SCB *VAR_9, tBTA_AG_DATA *VAR_10)
{
    UINT16 VAR_11 = VAR_0;
    FUNC_0 ("bta_ag_disc_int_res: Status: %d", VAR_10->disc_result.status);


    if (VAR_10->disc_result.status == VAR_8 ||
        VAR_10->disc_result.status == VAR_6) {

        if (FUNC_3(VAR_9, VAR_9->open_services)) {

            VAR_9->conn_service = FUNC_4(VAR_9->open_services);

            VAR_11 = VAR_1;
        }
    }

    FUNC_2(VAR_9, VAR_10);

    if ((VAR_11 == VAR_0) &&
        (VAR_10->disc_result.status == VAR_8 ||
         VAR_10->disc_result.status == VAR_6 ||
         VAR_10->disc_result.status == VAR_7)) {
        if ((VAR_9->open_services & VAR_2) &&
            (VAR_9->open_services & VAR_3)) {

            VAR_9->open_services &= ~VAR_2;
            FUNC_1(VAR_9, VAR_9->open_services);
        } else if ((VAR_9->open_services & VAR_3) &&
                 (VAR_9->hsp_version == VAR_5)) {

            VAR_9->hsp_version = VAR_4;
            FUNC_1(VAR_9, VAR_9->open_services);
        } else {

            FUNC_5(VAR_9, VAR_11, VAR_10);
        }
    } else {

        FUNC_5(VAR_9, VAR_11, VAR_10);
    }
}
