
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int length; int* tx_data; scalar_t__ flags; int * tx_buffer; void* user; } ;
typedef TYPE_1__ spi_transaction_t ;
typedef int spi_device_handle_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(spi_device_handle_t VAR_4, int VAR_5, uint16_t *VAR_6)
{
    esp_err_t VAR_7;
    int VAR_8;


    static spi_transaction_t VAR_9[6];



    for (VAR_8=0; VAR_8<6; VAR_8++) {
        FUNC_1(&VAR_9[VAR_8], 0, sizeof(spi_transaction_t));
        if ((VAR_8&1)==0) {

            VAR_9[VAR_8].length=8;
            VAR_9[VAR_8].user=(void*)0;
        } else {

            VAR_9[VAR_8].length=8*4;
            VAR_9[VAR_8].user=(void*)1;
        }
        VAR_9[VAR_8].flags=VAR_2;
    }
    VAR_9[0].tx_data[0]=0x2A;
    VAR_9[1].tx_data[0]=0;
    VAR_9[1].tx_data[1]=0;
    VAR_9[1].tx_data[2]=(320)>>8;
    VAR_9[1].tx_data[3]=(320)&0xff;
    VAR_9[2].tx_data[0]=0x2B;
    VAR_9[3].tx_data[0]=VAR_5>>8;
    VAR_9[3].tx_data[1]=VAR_5&0xff;
    VAR_9[3].tx_data[2]=(VAR_5+VAR_1)>>8;
    VAR_9[3].tx_data[3]=(VAR_5+VAR_1)&0xff;
    VAR_9[4].tx_data[0]=0x2C;
    VAR_9[5].tx_buffer=VAR_6;
    VAR_9[5].length=320*2*8*VAR_1;
    VAR_9[5].flags=0;


    for (VAR_8=0; VAR_8<6; VAR_8++) {
        VAR_7=FUNC_2(VAR_4, &VAR_9[VAR_8], VAR_3);
        FUNC_0(VAR_7==VAR_0);
    }





}
