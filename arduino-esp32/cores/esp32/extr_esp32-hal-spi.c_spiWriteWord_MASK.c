
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_13__ {TYPE_5__* dev; } ;
typedef TYPE_6__ spi_t ;
struct TYPE_10__ {int usr; } ;
struct TYPE_9__ {scalar_t__ usr_miso_dbitlen; } ;
struct TYPE_8__ {int usr_mosi_dbitlen; } ;
struct TYPE_11__ {int wr_bit_order; } ;
struct TYPE_12__ {int* data_buf; TYPE_3__ cmd; TYPE_2__ miso_dlen; TYPE_1__ mosi_dlen; TYPE_4__ ctrl; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(spi_t * VAR_0, uint16_t VAR_1)
{
    if(!VAR_0) {
        return;
    }
    if(!VAR_0->dev->ctrl.wr_bit_order){
        VAR_1 = (VAR_1 >> 8) | (VAR_1 << 8);
    }
    FUNC_0();
    VAR_0->dev->mosi_dlen.usr_mosi_dbitlen = 15;
    VAR_0->dev->miso_dlen.usr_miso_dbitlen = 0;
    VAR_0->dev->data_buf[0] = VAR_1;
    VAR_0->dev->cmd.usr = 1;
    while(VAR_0->dev->cmd.usr);
    FUNC_1();
}
