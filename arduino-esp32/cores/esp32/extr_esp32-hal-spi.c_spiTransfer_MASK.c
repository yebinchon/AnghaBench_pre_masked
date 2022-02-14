
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {TYPE_4__* dev; } ;
typedef TYPE_5__ spi_t ;
struct TYPE_9__ {int usr; } ;
struct TYPE_8__ {int usr_miso_dbitlen; } ;
struct TYPE_7__ {int usr_mosi_dbitlen; } ;
struct TYPE_10__ {int * data_buf; TYPE_3__ cmd; TYPE_2__ miso_dlen; TYPE_1__ mosi_dlen; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(spi_t * VAR_0, uint32_t *VAR_1, uint8_t VAR_2)
{
    if(!VAR_0) {
        return;
    }
    int VAR_3;
    if(VAR_2 > 16) {
        VAR_2 = 16;
    }
    FUNC_0();
    VAR_0->dev->mosi_dlen.usr_mosi_dbitlen = (VAR_2 * 32) - 1;
    VAR_0->dev->miso_dlen.usr_miso_dbitlen = (VAR_2 * 32) - 1;
    for(VAR_3=0; VAR_3<VAR_2; VAR_3++) {
        VAR_0->dev->data_buf[VAR_3] = VAR_1[VAR_3];
    }
    VAR_0->dev->cmd.usr = 1;
    while(VAR_0->dev->cmd.usr);
    for(VAR_3=0; VAR_3<VAR_2; VAR_3++) {
        VAR_1[VAR_3] = VAR_0->dev->data_buf[VAR_3];
    }
    FUNC_1();
}
