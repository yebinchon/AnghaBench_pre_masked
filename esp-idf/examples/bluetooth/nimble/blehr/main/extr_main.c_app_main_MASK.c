
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {int reset_cb; int sync_cb; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int) ;
 int VAR_9 ;
 int FUNC_10 (char*,int ,int ,void*,int ) ;

void FUNC_11(void)
{
    int VAR_10;


    esp_err_t VAR_11 = FUNC_8();
    if (VAR_11 == VAR_1 || VAR_11 == VAR_0) {
        FUNC_0(FUNC_7());
        VAR_11 = FUNC_8();
    }
    FUNC_0(VAR_11);

    FUNC_0(FUNC_3());

    FUNC_6();

    VAR_2.sync_cb = VAR_5;
    VAR_2.reset_cb = VAR_4;


    VAR_7 = FUNC_10("blehr_tx_timer", FUNC_9(1000), VAR_9, (void *)0, VAR_6);

    VAR_10 = FUNC_4();
    FUNC_1(VAR_10 == 0);


    VAR_10 = FUNC_2(VAR_8);
    FUNC_1(VAR_10 == 0);


    FUNC_5(VAR_3);

}
