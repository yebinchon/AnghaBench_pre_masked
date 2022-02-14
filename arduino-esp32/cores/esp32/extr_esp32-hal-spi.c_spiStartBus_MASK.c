
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {TYPE_2__* dev; int * lock; } ;
typedef TYPE_3__ spi_t ;
struct TYPE_11__ {int usr_mosi; int usr_miso; int doutdin; } ;
struct TYPE_12__ {int* data_buf; TYPE_1__ user; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* VAR_11 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int * FUNC_9 () ;

spi_t * FUNC_10(uint8_t VAR_12, uint32_t VAR_13, uint8_t VAR_14, uint8_t VAR_15)
{
    if(VAR_12 > 3){
        return ((void*)0);
    }

    spi_t * VAR_16 = &VAR_11[VAR_12];


    if(VAR_16->lock == ((void*)0)){
        VAR_16->lock = FUNC_9();
        if(VAR_16->lock == ((void*)0)) {
            return ((void*)0);
        }
    }


    if(VAR_12 == VAR_8) {
        FUNC_1(VAR_0, VAR_2);
        FUNC_0(VAR_1, VAR_5);
    } else if(VAR_12 == VAR_9) {
        FUNC_1(VAR_0, VAR_4);
        FUNC_0(VAR_1, VAR_7);
    } else {
        FUNC_1(VAR_0, VAR_3);
        FUNC_0(VAR_1, VAR_6);
    }

    FUNC_8(VAR_16);
    FUNC_7(VAR_16, VAR_14);
    FUNC_5(VAR_16, VAR_15);
    FUNC_6(VAR_16, VAR_13);

    FUNC_2();
    VAR_16->dev->user.usr_mosi = 1;
    VAR_16->dev->user.usr_miso = 1;
    VAR_16->dev->user.doutdin = 1;

    int VAR_17;
    for(VAR_17=0; VAR_17<16; VAR_17++) {
        VAR_16->dev->data_buf[VAR_17] = 0x00000000;
    }
    FUNC_3();

    FUNC_4(VAR_16, VAR_10);
    return VAR_16;
}
