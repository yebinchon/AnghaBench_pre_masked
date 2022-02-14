
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int parity; int baudrate; int mode; int port; } ;
typedef TYPE_1__ mb_communication_info_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int ,char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 scalar_t__ FUNC_1 (int ,void**) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (void*) ;
 scalar_t__ FUNC_4 () ;
 int VAR_13 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (int) ;

esp_err_t FUNC_8(void)
{
    mb_communication_info_t VAR_14 = {
            .port = VAR_8,
            .mode = VAR_6,
            .baudrate = VAR_5,
            .parity = VAR_7
    };
    void* VAR_15 = ((void*)0);

    esp_err_t VAR_16 = FUNC_1(VAR_9, &VAR_15);
    FUNC_0((VAR_15 != ((void*)0)), VAR_3,
                                "mb controller initialization fail.");
    FUNC_0((VAR_16 == VAR_4), VAR_3,
                            "mb controller initialization fail, returns(0x%x).",
                            (uint32_t)VAR_16);
    VAR_16 = FUNC_3((void*)&VAR_14);
    FUNC_0((VAR_16 == VAR_4), VAR_3,
                            "mb controller setup fail, returns(0x%x).",
                            (uint32_t)VAR_16);
    VAR_16 = FUNC_4();
    FUNC_0((VAR_16 == VAR_4), VAR_3,
                            "mb controller start fail, returns(0x%x).",
                            (uint32_t)VAR_16);

    VAR_16 = FUNC_6(VAR_8, VAR_2, VAR_1,
                                    VAR_0, VAR_11);
    FUNC_0((VAR_16 == VAR_4), VAR_3,
            "mb serial set pin failure, uart_set_pin() returned (0x%x).", (uint32_t)VAR_16);

    VAR_16 = FUNC_5(VAR_8, VAR_10);
    FUNC_0((VAR_16 == VAR_4), VAR_3,
            "mb serial set mode failure, uart_set_mode() returned (0x%x).", (uint32_t)VAR_16);
    FUNC_7(5);
    VAR_16 = FUNC_2(&VAR_12[0], VAR_13);
    FUNC_0((VAR_16 == VAR_4), VAR_3,
                                "mb controller set descriptor fail, returns(0x%x).",
                                (uint32_t)VAR_16);
    return VAR_16;
}
