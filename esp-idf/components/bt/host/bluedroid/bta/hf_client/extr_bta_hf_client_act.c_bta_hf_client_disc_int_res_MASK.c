
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ status; } ;
struct TYPE_7__ {TYPE_1__ disc_result; } ;
typedef TYPE_2__ tBTA_HF_CLIENT_DATA ;
typedef int UINT16 ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,TYPE_2__*) ;

void FUNC_4(tBTA_HF_CLIENT_DATA *VAR_4)
{
    UINT16 VAR_5 = VAR_0;

    FUNC_0 ("bta_hf_client_disc_int_res: Status: %d", VAR_4->disc_result.status);


    if (VAR_4->disc_result.status == VAR_3 ||
            VAR_4->disc_result.status == VAR_2) {

        if (FUNC_2()) {
            VAR_5 = VAR_1;
        }
    }


    FUNC_1(VAR_4);


    FUNC_3(VAR_5, VAR_4);
}
