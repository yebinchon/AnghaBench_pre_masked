
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int t ;
struct TYPE_4__ {int length; char* tx_buffer; char* rx_buffer; int addr; int cmd; } ;
typedef TYPE_1__ spi_transaction_t ;
typedef int spi_device_handle_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(spi_device_handle_t VAR_2, int VAR_3) {
    esp_err_t VAR_4;
    int VAR_5;
    bool VAR_6 = 1;
    FUNC_7(VAR_3);
    char *VAR_7=FUNC_2((VAR_3+3)&(~3), VAR_1);
    char *VAR_8=FUNC_2((VAR_3+3)&(~3), VAR_1);
    for (VAR_5=0; VAR_5<VAR_3; VAR_5++) {
        VAR_7[VAR_5]=FUNC_5()&0xff;
        VAR_8[VAR_5]=0x55;
    }

    spi_transaction_t VAR_9;
    FUNC_3(&VAR_9, 0, sizeof(VAR_9));
    VAR_9.length=VAR_3*8;
    VAR_9.tx_buffer=VAR_7;
    VAR_9.rx_buffer=VAR_8;
    VAR_9.addr=0xA00000000000000FL;
    VAR_9.cmd=0x55;

    FUNC_4("Transmitting %d bytes...\n", VAR_3);
    VAR_4=FUNC_6(VAR_2, &VAR_9);
    FUNC_0(VAR_4==VAR_0);

    FUNC_7(VAR_3);
    for (VAR_5=0; VAR_5<VAR_3; VAR_5++) {
        if (VAR_7[VAR_5]!=(FUNC_5()&0xff)) {
            FUNC_4("Huh? Sendbuf corrupted at byte %d\n", VAR_5);
            FUNC_0(0);
        }
        if (VAR_7[VAR_5]!=VAR_8[VAR_5]) break;
    }
    if (VAR_5!=VAR_3) {
        int VAR_10=VAR_5-16;
        if (VAR_10<0) VAR_10=0;
        VAR_6 = 0;
        FUNC_4("Error at %d! Sent vs recved: (starting from %d)\n" , VAR_5, VAR_10);
        for (int VAR_11=0; VAR_11<32; VAR_11++) {
            if (VAR_11+VAR_10<VAR_3) FUNC_4("%02X ", VAR_7[VAR_10+VAR_11]);
        }
        FUNC_4("\n");
        for (int VAR_12=0; VAR_12<32; VAR_12++) {
            if (VAR_12+VAR_10<VAR_3) FUNC_4("%02X ", VAR_8[VAR_10+VAR_12]);
        }
        FUNC_4("\n");
    }

    if (VAR_6) FUNC_4("Success!\n");
    FUNC_1(VAR_7);
    FUNC_1(VAR_8);
    return VAR_6;
}
