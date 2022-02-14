
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_15__ {int filter_ticks_thresh; scalar_t__ idle_threshold; int filter_en; } ;
struct TYPE_10__ {scalar_t__ carrier_freq_hz; int carrier_en; scalar_t__ carrier_duty_percent; int carrier_level; int idle_level; int idle_output_en; int loop_en; } ;
struct TYPE_16__ {int rmt_mode; int channel; int gpio_num; int mem_block_num; int clk_div; TYPE_6__ rx_config; TYPE_1__ tx_config; } ;
typedef TYPE_7__ rmt_config_t ;
typedef int esp_err_t ;
struct TYPE_17__ {TYPE_5__* conf_ch; TYPE_2__* carrier_duty_ch; } ;
struct TYPE_13__ {int mem_rd_rst; int mem_wr_rst; int idle_out_lv; int rx_filter_thres; int rx_filter_en; int mem_owner; void* ref_always_on; int idle_out_en; int tx_conti_mode; } ;
struct TYPE_12__ {int div_cnt; int mem_size; int carrier_en; int carrier_out_lv; scalar_t__ idle_thres; } ;
struct TYPE_14__ {TYPE_4__ conf1; TYPE_3__ conf0; } ;
struct TYPE_11__ {scalar_t__ low; scalar_t__ high; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,scalar_t__,int,scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 TYPE_9__ VAR_3 ;
 void* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,char*,int ) ;
 char* VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (void*) ;
 int VAR_15 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,int,int) ;
 int VAR_16 ;

esp_err_t FUNC_10(const rmt_config_t* VAR_17)
{
    uint8_t VAR_18 = VAR_17->rmt_mode;
    uint8_t VAR_19 = VAR_17->channel;
    uint8_t VAR_20 = VAR_17->gpio_num;
    uint8_t VAR_21 = VAR_17->mem_block_num;
    int VAR_22 = VAR_17->clk_div;
    uint32_t VAR_23 = VAR_17->tx_config.carrier_freq_hz;
    bool VAR_24 = VAR_17->tx_config.carrier_en;
    FUNC_2(VAR_19 < VAR_6, VAR_5, VAR_0);
    FUNC_2(FUNC_1(VAR_20), VAR_9, VAR_0);
    FUNC_2((VAR_21 + VAR_19 <= 8 && VAR_21 > 0), VAR_10, VAR_0);
    FUNC_2((VAR_22 > 0), VAR_7, VAR_0);
    if (VAR_18 == VAR_14) {
        FUNC_2((!VAR_24 || VAR_23 > 0), "RMT carrier frequency can't be zero", VAR_0);
    }

    static bool VAR_25 = 0;
    if (VAR_25 == 0) {
        FUNC_5(VAR_2);
        VAR_25 = 1;
    }
    FUNC_4(VAR_2);

    VAR_3.conf_ch[VAR_19].conf0.div_cnt = VAR_22;

    FUNC_8(VAR_8);

    FUNC_6(&VAR_16);
    VAR_3.conf_ch[VAR_19].conf1.mem_rd_rst = 1;
    VAR_3.conf_ch[VAR_19].conf1.mem_wr_rst = 1;
    FUNC_7(&VAR_16);

    if(VAR_18 == VAR_14) {
        uint32_t VAR_26 = 0;
        uint16_t VAR_27 = VAR_17->tx_config.carrier_duty_percent;
        uint8_t VAR_28 = VAR_17->tx_config.carrier_level;
        uint8_t VAR_29 = VAR_17->tx_config.idle_level;

        FUNC_6(&VAR_16);
        VAR_3.conf_ch[VAR_19].conf1.tx_conti_mode = VAR_17->tx_config.loop_en;

        VAR_3.conf_ch[VAR_19].conf0.mem_size = VAR_21;
        VAR_3.conf_ch[VAR_19].conf1.mem_owner = VAR_12;

        VAR_3.conf_ch[VAR_19].conf1.ref_always_on = VAR_4;
        VAR_26 = FUNC_3(VAR_4);

        VAR_3.conf_ch[VAR_19].conf1.idle_out_en = VAR_17->tx_config.idle_output_en;
        VAR_3.conf_ch[VAR_19].conf1.idle_out_lv = VAR_29;

        VAR_3.conf_ch[VAR_19].conf0.carrier_en = VAR_24;
        if (VAR_24) {
            uint32_t VAR_30, VAR_31, VAR_32;
            VAR_30 = VAR_26 / VAR_23;
            VAR_31 = VAR_30 * VAR_27 / 100;
            VAR_32 = VAR_30 - VAR_31;
            VAR_3.conf_ch[VAR_19].conf0.carrier_out_lv = VAR_28;
            VAR_3.carrier_duty_ch[VAR_19].high = VAR_31;
            VAR_3.carrier_duty_ch[VAR_19].low = VAR_32;
        } else {
            VAR_3.conf_ch[VAR_19].conf0.carrier_out_lv = 0;
            VAR_3.carrier_duty_ch[VAR_19].high = 0;
            VAR_3.carrier_duty_ch[VAR_19].low = 0;
        }
        FUNC_7(&VAR_16);

        FUNC_0(VAR_15, "Rmt Tx Channel %u|Gpio %u|Sclk_Hz %u|Div %u|Carrier_Hz %u|Duty %u",
                 VAR_19, VAR_20, VAR_26, VAR_22, VAR_23, VAR_27);

    }
    else if(VAR_13 == VAR_18) {
        uint8_t VAR_33 = VAR_17->rx_config.filter_ticks_thresh;
        uint16_t VAR_34 = VAR_17->rx_config.idle_threshold;

        FUNC_6(&VAR_16);

        VAR_3.conf_ch[VAR_19].conf1.ref_always_on = VAR_4;
        uint32_t VAR_35 = FUNC_3(VAR_4);

        VAR_3.conf_ch[VAR_19].conf0.mem_size = VAR_21;
        VAR_3.conf_ch[VAR_19].conf1.mem_owner = VAR_11;

        VAR_3.conf_ch[VAR_19].conf0.idle_thres = VAR_34;

        VAR_3.conf_ch[VAR_19].conf1.rx_filter_thres = VAR_33;
        VAR_3.conf_ch[VAR_19].conf1.rx_filter_en = VAR_17->rx_config.filter_en;
        FUNC_7(&VAR_16);

        FUNC_0(VAR_15, "Rmt Rx Channel %u|Gpio %u|Sclk_Hz %u|Div %u|Thresold %u|Filter %u",
            VAR_19, VAR_20, VAR_35, VAR_22, VAR_34, VAR_33);
    }
    FUNC_9(VAR_19, VAR_18, VAR_20);
    return VAR_1;
}
