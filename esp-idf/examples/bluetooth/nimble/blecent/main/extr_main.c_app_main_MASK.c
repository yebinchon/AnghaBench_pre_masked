
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {int store_status_cb; int sync_cb; int reset_cb; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ,int,int,int) ;

void
FUNC_11(void)
{
    int VAR_8;

    esp_err_t VAR_9 = FUNC_9();
    if (VAR_9 == VAR_2 || VAR_9 == VAR_1) {
        FUNC_0(FUNC_8());
        VAR_9 = FUNC_9();
    }
    FUNC_0(VAR_9);

    FUNC_0(FUNC_5());

    FUNC_7();

    VAR_3.reset_cb = VAR_6;
    VAR_3.sync_cb = VAR_7;
    VAR_3.store_status_cb = VAR_4;


    VAR_8 = FUNC_10(FUNC_1(VAR_0), 64, 64, 64);
    FUNC_2(VAR_8 == 0);


    VAR_8 = FUNC_4("nimble-blecent");
    FUNC_2(VAR_8 == 0);


    FUNC_3();

    FUNC_6(VAR_5);

}
