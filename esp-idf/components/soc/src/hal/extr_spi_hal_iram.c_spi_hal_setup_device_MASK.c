
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cs_pin_id; int cs_hold; int cs_setup; int sio; int half_duplex; int mode; int tx_lsbfirst; int rx_lsbfirst; TYPE_1__* timing_conf; int positive_cs; int as_cs; int * hw; } ;
typedef TYPE_2__ spi_hal_context_t ;
typedef int spi_dev_t ;
struct TYPE_4__ {int clock_reg; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;

void FUNC_11(const spi_hal_context_t *VAR_0)
{

    spi_dev_t *VAR_1 = VAR_0->hw;



    FUNC_6(VAR_1, VAR_0->cs_pin_id, VAR_0->positive_cs);
    FUNC_2(VAR_1, &VAR_0->timing_conf->clock_reg);

    FUNC_8(VAR_1, VAR_0->rx_lsbfirst);
    FUNC_10(VAR_1, VAR_0->tx_lsbfirst);
    FUNC_5(VAR_1, VAR_0->mode);

    FUNC_7(VAR_1, VAR_0->half_duplex);
    FUNC_9(VAR_1, VAR_0->sio);

    FUNC_4(VAR_1, VAR_0->cs_setup);
    FUNC_3(VAR_1, VAR_0->cs_hold);
    FUNC_0(VAR_1, VAR_0->cs_pin_id);
}
