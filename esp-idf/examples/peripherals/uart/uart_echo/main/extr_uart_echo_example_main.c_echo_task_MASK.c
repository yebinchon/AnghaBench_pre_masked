
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int baud_rate; int flow_ctrl; int stop_bits; int parity; int data_bits; } ;
typedef TYPE_1__ uart_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_10 ;
 int FUNC_1 (int ,int,int ,int ,int *,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int *,int,int) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,char const*,int) ;

__attribute__((used)) static void FUNC_6(void *VAR_11)
{


    uart_config_t VAR_12 = {
        .baud_rate = 115200,
        .data_bits = VAR_5,
        .parity = VAR_8,
        .stop_bits = VAR_9,
        .flow_ctrl = VAR_6
    };
    FUNC_2(VAR_7, &VAR_12);
    FUNC_4(VAR_7, VAR_4, VAR_3, VAR_2, VAR_1);
    FUNC_1(VAR_7, VAR_0 * 2, 0, 0, ((void*)0), 0);


    uint8_t *VAR_13 = (uint8_t *) FUNC_0(VAR_0);

    while (1) {

        int VAR_14 = FUNC_3(VAR_7, VAR_13, VAR_0, 20 / VAR_10);

        FUNC_5(VAR_7, (const char *) VAR_13, VAR_14);
    }
}
