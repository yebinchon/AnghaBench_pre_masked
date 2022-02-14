
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {int sm_bonding; int sm_mitm; int sm_sc; int sm_our_key_dist; int sm_their_key_dist; int sm_io_cap; int store_status_cb; int gatts_register_cb; int sync_cb; int reset_cb; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_10 ;

void
FUNC_12(void)
{
    int VAR_11;


    esp_err_t VAR_12 = FUNC_10();
    if (VAR_12 == VAR_2 || VAR_12 == VAR_1) {
        FUNC_0(FUNC_9());
        VAR_12 = FUNC_10();
    }
    FUNC_0(VAR_12);

    FUNC_0(FUNC_5());

    FUNC_8();

    VAR_4.reset_cb = VAR_7;
    VAR_4.sync_cb = VAR_8;
    VAR_4.gatts_register_cb = VAR_9;
    VAR_4.store_status_cb = VAR_5;

    VAR_4.sm_io_cap = VAR_0;
    VAR_4.sm_sc = 0;







    VAR_11 = FUNC_6();
    FUNC_2(VAR_11 == 0);


    VAR_11 = FUNC_4("nimble-bleprph");
    FUNC_2(VAR_11 == 0);


    FUNC_3();

    FUNC_7(VAR_6);


    VAR_11 = FUNC_11();
    if (VAR_11 != VAR_3) {
        FUNC_1(VAR_10, "scli_init() failed");
    }
}
