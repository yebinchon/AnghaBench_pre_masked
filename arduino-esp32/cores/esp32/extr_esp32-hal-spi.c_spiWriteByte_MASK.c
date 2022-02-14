
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
struct TYPE_11__ {TYPE_4__* dev; } ;
typedef TYPE_5__ spi_t ;
struct TYPE_7__ {int usr; } ;
struct TYPE_9__ {scalar_t__ usr_miso_dbitlen; } ;
struct TYPE_8__ {int usr_mosi_dbitlen; } ;
struct TYPE_10__ {TYPE_1__ cmd; int * data_buf; TYPE_3__ miso_dlen; TYPE_2__ mosi_dlen; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(spi_t * VAR_0, uint8_t VAR_1)
{
    if(!VAR_0) {
        return;
    }
    FUNC_0();
    VAR_0->dev->mosi_dlen.usr_mosi_dbitlen = 7;
    VAR_0->dev->miso_dlen.usr_miso_dbitlen = 0;
    VAR_0->dev->data_buf[0] = VAR_1;
    VAR_0->dev->cmd.usr = 1;
    while(VAR_0->dev->cmd.usr);
    FUNC_1();
}
