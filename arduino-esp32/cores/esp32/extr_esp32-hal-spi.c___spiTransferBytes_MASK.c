
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int uint32_t ;
struct TYPE_11__ {TYPE_4__* dev; } ;
typedef TYPE_5__ spi_t ;
struct TYPE_9__ {int usr; } ;
struct TYPE_8__ {int usr_miso_dbitlen; } ;
struct TYPE_7__ {int usr_mosi_dbitlen; } ;
struct TYPE_10__ {int* data_buf; TYPE_3__ cmd; TYPE_2__ miso_dlen; TYPE_1__ mosi_dlen; } ;


 int FUNC_0 (int const*,int const*,int) ;
 int FUNC_1 (int const*,int,int) ;

__attribute__((used)) static void FUNC_2(spi_t * VAR_0, const uint8_t * VAR_1, uint8_t * VAR_2, uint32_t VAR_3)
{
    if(!VAR_0) {
        return;
    }
    int VAR_4;

    if(VAR_3 > 64) {
        VAR_3 = 64;
    }

    uint32_t VAR_5 = (VAR_3 + 3) / 4;

    uint32_t VAR_6[16] = {0,};
    uint8_t * VAR_7 = (uint8_t *) VAR_6;

    if(VAR_1) {
        FUNC_0(VAR_7, VAR_1, VAR_3);
    } else {
        FUNC_1(VAR_7, 0xFF, VAR_3);
    }

    VAR_0->dev->mosi_dlen.usr_mosi_dbitlen = ((VAR_3 * 8) - 1);
    VAR_0->dev->miso_dlen.usr_miso_dbitlen = ((VAR_3 * 8) - 1);

    for(VAR_4=0; VAR_4<VAR_5; VAR_4++) {
        VAR_0->dev->data_buf[VAR_4] = VAR_6[VAR_4];
    }

    VAR_0->dev->cmd.usr = 1;

    while(VAR_0->dev->cmd.usr);

    if(VAR_2) {
        for(VAR_4=0; VAR_4<VAR_5; VAR_4++) {
            VAR_6[VAR_4] = VAR_0->dev->data_buf[VAR_4];
        }
        FUNC_0(VAR_2, VAR_7, VAR_3);
    }
}
