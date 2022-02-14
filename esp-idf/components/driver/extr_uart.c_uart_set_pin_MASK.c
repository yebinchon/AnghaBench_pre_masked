
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uart_port_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int,char*,int ) ;




 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (int,int,int ,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int ) ;

esp_err_t FUNC_9(uart_port_t VAR_19, int VAR_20, int VAR_21, int VAR_22, int VAR_23)
{
    FUNC_3((VAR_19 < 128), "uart_num error", VAR_0);
    FUNC_3((VAR_20 < 0 || (FUNC_1(VAR_20))), "tx_io_num error", VAR_0);
    FUNC_3((VAR_21 < 0 || (FUNC_0(VAR_21))), "rx_io_num error", VAR_0);
    FUNC_3((VAR_22 < 0 || (FUNC_1(VAR_22))), "rts_io_num error", VAR_0);
    FUNC_3((VAR_23 < 0 || (FUNC_0(VAR_23))), "cts_io_num error", VAR_0);

    int VAR_24, VAR_25, VAR_26, VAR_27;
    switch(VAR_19) {
        case 131:
            VAR_24 = VAR_10;
            VAR_25 = VAR_9;
            VAR_26 = VAR_8;
            VAR_27 = VAR_7;
            break;
        case 130:
            VAR_24 = VAR_14;
            VAR_25 = VAR_13;
            VAR_26 = VAR_12;
            VAR_27 = VAR_11;
            break;
        case 128:
            default:
            VAR_24 = VAR_10;
            VAR_25 = VAR_9;
            VAR_26 = VAR_8;
            VAR_27 = VAR_7;
            break;
    }
    if (VAR_20 >= 0) {
        FUNC_2(VAR_4[VAR_20], VAR_6);
        FUNC_7(VAR_20, 1);
        FUNC_5(VAR_20, VAR_24, 0, 0);
    }

    if (VAR_21 >= 0) {
        FUNC_2(VAR_4[VAR_21], VAR_6);
        FUNC_8(VAR_21, VAR_5);
        FUNC_6(VAR_21, VAR_2);
        FUNC_4(VAR_21, VAR_25, 0);
    }
    if (VAR_22 >= 0) {
        FUNC_2(VAR_4[VAR_22], VAR_6);
        FUNC_6(VAR_22, VAR_3);
        FUNC_5(VAR_22, VAR_26, 0, 0);
    }
    if (VAR_23 >= 0) {
        FUNC_2(VAR_4[VAR_23], VAR_6);
        FUNC_8(VAR_23, VAR_5);
        FUNC_6(VAR_23, VAR_2);
        FUNC_4(VAR_23, VAR_27, 0);
    }
    return VAR_1;
}
