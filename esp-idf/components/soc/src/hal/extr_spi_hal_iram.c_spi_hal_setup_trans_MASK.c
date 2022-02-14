
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int mode; int cmd_bits; int addr_bits; scalar_t__ cs_setup; int tx_lsbfirst; int addr; int cmd; scalar_t__ half_duplex; int tx_bitlen; int rx_bitlen; TYPE_1__* timing_conf; scalar_t__ dummy_bits; int no_compensate; scalar_t__ rcv_buffer; int io_mode; int * hw; } ;
typedef TYPE_2__ spi_hal_context_t ;
typedef int spi_dev_t ;
struct TYPE_4__ {int timing_dummy; int timing_miso_delay; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int,int ) ;
 int FUNC_6 (int *,int ,int,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *,int ) ;

void FUNC_12(const spi_hal_context_t *VAR_0)
{
    spi_dev_t *VAR_1 = VAR_0->hw;


    FUNC_1(VAR_0->hw);

    FUNC_0(FUNC_2(VAR_1) == 0);

    FUNC_3(VAR_1, VAR_0->io_mode);

    int VAR_2 = 0;

    if (VAR_0->rcv_buffer && !VAR_0->no_compensate && VAR_0->half_duplex) {
        VAR_2 = VAR_0->timing_conf->timing_dummy;
    }



    FUNC_8(VAR_1, VAR_2 + VAR_0->dummy_bits);

    uint32_t VAR_3 = 0;
    uint32_t VAR_4 = 0;
    if (VAR_0->timing_conf->timing_miso_delay < 0) {

        switch (VAR_0->mode) {
        case 0:
            VAR_4 = 2;
            break;
        case 1:
            VAR_4 = 1;
            break;
        case 2:
            VAR_4 = 1;
            break;
        case 3:
            VAR_4 = 2;
            break;
        }
        VAR_3 = 0;
    } else {

        VAR_3 = VAR_2 ? VAR_0->timing_conf->timing_miso_delay : 0;
        VAR_4 = 0;
    }
    FUNC_10(VAR_1, VAR_4, VAR_3);

    FUNC_11(VAR_1, VAR_0->tx_bitlen);

    if (VAR_0->half_duplex) {
        FUNC_9(VAR_1, VAR_0->rx_bitlen);
    } else {

        FUNC_9(VAR_1, VAR_0->tx_bitlen);
    }


    int VAR_5 = VAR_0->cmd_bits;
    int VAR_6 = VAR_0->addr_bits;
    if (!VAR_0->half_duplex && VAR_0->cs_setup != 0) {



        VAR_5 = 0;
        VAR_6 = 0;
    }

    FUNC_4(VAR_1, VAR_6);
    FUNC_7(VAR_1, VAR_5);

    FUNC_6(VAR_1, VAR_0->cmd, VAR_5, VAR_0->tx_lsbfirst);
    FUNC_5(VAR_1, VAR_0->addr, VAR_6, VAR_0->tx_lsbfirst);
}
