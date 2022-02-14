
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int spi_device_handle_t ;
struct TYPE_4__ {int databytes; int data; int cmd; } ;
typedef TYPE_1__ lcd_init_cmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (char*,...) ;
 TYPE_1__* VAR_8 ;
 int FUNC_6 (int) ;

void FUNC_7(spi_device_handle_t VAR_9)
{
    int VAR_10=0;
    const lcd_init_cmd_t* VAR_11;


    FUNC_0(VAR_4, VAR_0);
    FUNC_0(VAR_5, VAR_0);
    FUNC_0(VAR_3, VAR_0);


    FUNC_1(VAR_5, 0);
    FUNC_6(100 / VAR_7);
    FUNC_1(VAR_5, 1);
    FUNC_6(100 / VAR_7);


    uint32_t VAR_12 = FUNC_4(VAR_9);
    int VAR_13 = 0;
    int VAR_14;

    FUNC_5("LCD ID: %08X\n", VAR_12);
    if ( VAR_12 == 0 ) {

        VAR_13 = VAR_1;
        FUNC_5("ILI9341 detected.\n");
    } else {

        VAR_13 = VAR_2;
        FUNC_5("ST7789V detected.\n");
    }
    if ( VAR_14 == VAR_2 ) {
        FUNC_5("LCD ST7789V initialization.\n");
        VAR_11 = VAR_8;
    } else {
        FUNC_5("LCD ILI9341 initialization.\n");
        VAR_11 = VAR_6;
    }


    while (VAR_11[VAR_10].databytes!=0xff) {
        FUNC_2(VAR_9, VAR_11[VAR_10].cmd);
        FUNC_3(VAR_9, VAR_11[VAR_10].data, VAR_11[VAR_10].databytes&0x1F);
        if (VAR_11[VAR_10].databytes&0x80) {
            FUNC_6(100 / VAR_7);
        }
        VAR_10++;
    }


    FUNC_1(VAR_3, 0);
}
