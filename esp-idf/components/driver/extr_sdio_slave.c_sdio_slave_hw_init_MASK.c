
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_23__ {int func; int d3_gpio; int d2_gpio; int d1_gpio; int d0_gpio; int cmd_gpio; int clk_gpio; } ;
typedef TYPE_7__ sdio_slave_slot_info_t ;
struct TYPE_24__ {int flags; int timing; } ;
typedef TYPE_8__ sdio_slave_config_t ;
typedef int esp_err_t ;
struct TYPE_22__ {int frhost_bit0; int frhost_bit1; int frhost_bit2; int frhost_bit3; int frhost_bit4; int frhost_bit5; int frhost_bit6; int frhost_bit7; scalar_t__ val; } ;
struct TYPE_21__ {int frc_sdio20; int frc_sdio11; int frc_pos_samp; int frc_neg_samp; } ;
struct TYPE_20__ {int highspeed_enable; int sdio_ver; } ;
struct TYPE_19__ {int slc0_token_no_replace; } ;
struct TYPE_18__ {scalar_t__ slc0_len_auto_clr; scalar_t__ slc0_tx_stitch_en; scalar_t__ slc0_rx_stitch_en; } ;
struct TYPE_17__ {int slc0_rx_auto_wrback; scalar_t__ slc0_tx_loop_test; scalar_t__ slc0_rx_loop_test; scalar_t__ slc0_token_auto_clr; } ;
struct TYPE_16__ {TYPE_4__ cfg_data1; } ;
struct TYPE_15__ {TYPE_5__ conf; } ;
struct TYPE_14__ {TYPE_6__ slc0_int_ena; TYPE_3__ rx_dscr_conf; TYPE_2__ conf1; TYPE_1__ conf0; } ;


 int VAR_0 ;
 TYPE_13__ VAR_1 ;
 TYPE_12__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 TYPE_11__ VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_7__* VAR_8 ;

__attribute__((used)) static inline esp_err_t FUNC_3(sdio_slave_config_t *VAR_9)
{

    VAR_7.slc0_int_ena.val = 0;


    const sdio_slave_slot_info_t *VAR_10 = &VAR_8[1];

    bool VAR_11 = VAR_9->flags & VAR_6;
    FUNC_0(VAR_10->clk_gpio, VAR_10->func, 0);
    FUNC_0(VAR_10->cmd_gpio, VAR_10->func, VAR_11);
    FUNC_0(VAR_10->d0_gpio, VAR_10->func, VAR_11);
    if ((VAR_9->flags & VAR_5)==0) {
        FUNC_0(VAR_10->d1_gpio, VAR_10->func, VAR_11);
    }
    if ((VAR_9->flags & VAR_4)==0) {
       FUNC_0(VAR_10->d2_gpio, VAR_10->func, VAR_11);
    }
    FUNC_0(VAR_10->d3_gpio, VAR_10->func, VAR_11);


    FUNC_2(VAR_3);
    FUNC_1(VAR_3);

    VAR_7.conf0.slc0_rx_auto_wrback = 1;
    VAR_7.conf0.slc0_token_auto_clr = 0;
    VAR_7.conf0.slc0_rx_loop_test = 0;
    VAR_7.conf0.slc0_tx_loop_test = 0;

    VAR_7.conf1.slc0_rx_stitch_en = 0;
    VAR_7.conf1.slc0_tx_stitch_en = 0;
    VAR_7.conf1.slc0_len_auto_clr = 0;

    VAR_7.rx_dscr_conf.slc0_token_no_replace = 1;
    VAR_1.cfg_data1.highspeed_enable = 1;
    VAR_1.cfg_data1.sdio_ver = 0x232;

    switch(VAR_9->timing) {
        case 128:
            VAR_2.conf.frc_sdio20 = 0x1f;
            VAR_2.conf.frc_sdio11 = 0;
            VAR_2.conf.frc_pos_samp = 0x1f;
            VAR_2.conf.frc_neg_samp = 0;
            break;
        case 129:
            VAR_2.conf.frc_sdio20 = 0x1f;
            VAR_2.conf.frc_sdio11 = 0;
            VAR_2.conf.frc_pos_samp = 0;
            VAR_2.conf.frc_neg_samp = 0x1f;
            break;
        case 130:
            VAR_2.conf.frc_sdio20 = 0;
            VAR_2.conf.frc_sdio11 = 0x1f;
            VAR_2.conf.frc_pos_samp = 0x1f;
            VAR_2.conf.frc_neg_samp = 0;
            break;
        case 131:
            VAR_2.conf.frc_sdio20 = 0;
            VAR_2.conf.frc_sdio11 = 0x1f;
            VAR_2.conf.frc_pos_samp = 0;
            VAR_2.conf.frc_neg_samp = 0x1f;
            break;
    }

    VAR_7.slc0_int_ena.frhost_bit0 = 1;
    VAR_7.slc0_int_ena.frhost_bit1 = 1;
    VAR_7.slc0_int_ena.frhost_bit2 = 1;
    VAR_7.slc0_int_ena.frhost_bit3 = 1;
    VAR_7.slc0_int_ena.frhost_bit4 = 1;
    VAR_7.slc0_int_ena.frhost_bit5 = 1;
    VAR_7.slc0_int_ena.frhost_bit6 = 1;
    VAR_7.slc0_int_ena.frhost_bit7 = 1;

    return VAR_0;
}
