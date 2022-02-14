
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint32_t ;
typedef int portTickType ;
typedef size_t i2s_port_t ;
struct TYPE_23__ {int mux; scalar_t__* desc; } ;
typedef TYPE_9__ i2s_dma_t ;
typedef int i2s_channel_t ;
typedef int i2s_bits_per_sample_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_22__ {int tx_bck_div_num; int rx_bck_div_num; int tx_bits_mod; int rx_bits_mod; } ;
struct TYPE_21__ {int clkm_div_num; int clkm_div_b; int clkm_div_a; int clka_en; int clk_sel; } ;
struct TYPE_20__ {int rx_sinc_dsr_16_en; } ;
struct TYPE_19__ {int tx_pdm_fp; int tx_pdm_fs; } ;
struct TYPE_18__ {int addr; } ;
struct TYPE_17__ {int addr; } ;
struct TYPE_16__ {int tx_fifo_mod; int rx_fifo_mod; } ;
struct TYPE_15__ {int tx_chan_mod; int rx_chan_mod; } ;
struct TYPE_14__ {int rx_eof_num; TYPE_8__ sample_rate_conf; TYPE_7__ clkm_conf; TYPE_6__ pdm_conf; TYPE_5__ pdm_freq_conf; TYPE_4__ in_link; TYPE_3__ out_link; TYPE_2__ fifo_conf; TYPE_1__ conf_chan; } ;
struct TYPE_13__ {int sample_rate; int mode; int channel_num; int bits_per_sample; int bytes_per_sample; int dma_buf_len; int fixed_mclk; double real_rate; TYPE_9__* rx; TYPE_9__* tx; scalar_t__ use_apll; int dma_buf_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int,double,int,int,int,double,double,int,int) ;
 scalar_t__ VAR_2 ;
 TYPE_12__** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_4 (int,int,int*,int*,int*,int*) ;
 double FUNC_5 (int,int,int,int,int) ;
 void* FUNC_6 (size_t,int ,int) ;
 int FUNC_7 (size_t,TYPE_9__*) ;
 int FUNC_8 (size_t) ;
 int FUNC_9 (size_t) ;
 int FUNC_10 (size_t) ;
 TYPE_10__** VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_11 (int,int,int,int,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;

esp_err_t FUNC_14(i2s_port_t VAR_18, uint32_t VAR_19, i2s_bits_per_sample_t VAR_20, i2s_channel_t VAR_21)
{
    int VAR_22 = (256%VAR_20)? 384 : 256;
    int VAR_23, VAR_24, VAR_25 = 0;
    double VAR_26 = (double)1 / 64;
    int VAR_27 = 2;
    i2s_dma_t *VAR_28 = ((void*)0), *VAR_29 = ((void*)0);

    FUNC_3((VAR_18 < VAR_13), "i2s_num error", VAR_0);

    if (VAR_20 % 8 != 0 || VAR_20 > VAR_7 || VAR_20 < VAR_6) {
        FUNC_1(VAR_15, "Invalid bits per sample");
        return VAR_0;
    }

    if (VAR_16[VAR_18] == ((void*)0)) {
        FUNC_1(VAR_15, "Not initialized yet");
        return VAR_0;
    }
    VAR_16[VAR_18]->sample_rate = VAR_19;
    double VAR_30 = (double)VAR_5 / (VAR_19 * VAR_22);

    if (VAR_30 > 256) {
        FUNC_1(VAR_15, "clkmdiv is too large\r\n");
        return VAR_0;
    }


    if ((VAR_16[VAR_18]->mode & VAR_12) && VAR_16[VAR_18]->tx) {
        FUNC_13(VAR_16[VAR_18]->tx->mux, (portTickType)VAR_17);
    }
    if ((VAR_16[VAR_18]->mode & VAR_11) && VAR_16[VAR_18]->rx) {
        FUNC_13(VAR_16[VAR_18]->rx->mux, (portTickType)VAR_17);
    }

    FUNC_10(VAR_18);


    uint32_t VAR_31 = 0;
    if (VAR_16[VAR_18]->channel_num != VAR_21) {
        VAR_16[VAR_18]->channel_num = (VAR_21 == 2) ? 2 : 1;
        VAR_31 = VAR_3[VAR_18]->fifo_conf.tx_fifo_mod;
        VAR_3[VAR_18]->fifo_conf.tx_fifo_mod = (VAR_21 == 2) ? VAR_31 - 1 : VAR_31 + 1;
        VAR_31 = VAR_3[VAR_18]->fifo_conf.rx_fifo_mod;
        VAR_3[VAR_18]->fifo_conf.rx_fifo_mod = (VAR_21 == 2) ? VAR_31 -1 : VAR_31 + 1;
        VAR_3[VAR_18]->conf_chan.tx_chan_mod = (VAR_21 == 2) ? 0 : 1;
        VAR_3[VAR_18]->conf_chan.rx_chan_mod = (VAR_21 == 2) ? 0 : 1;
    }

    if (VAR_20 != VAR_16[VAR_18]->bits_per_sample) {


        if (VAR_16[VAR_18]->bits_per_sample <= 16 && VAR_20 > 16) {
            VAR_3[VAR_18]->fifo_conf.tx_fifo_mod += 2;
            VAR_3[VAR_18]->fifo_conf.rx_fifo_mod += 2;
        } else if (VAR_16[VAR_18]->bits_per_sample > 16 && VAR_20 <= 16) {
            VAR_3[VAR_18]->fifo_conf.tx_fifo_mod -= 2;
            VAR_3[VAR_18]->fifo_conf.rx_fifo_mod -= 2;
        }

        VAR_16[VAR_18]->bits_per_sample = VAR_20;
        VAR_16[VAR_18]->bytes_per_sample = VAR_16[VAR_18]->bits_per_sample / 8;


        int VAR_32 = (VAR_16[VAR_18]->bits_per_sample + 15) / 16;
        VAR_16[VAR_18]->bytes_per_sample = VAR_32 * 2;


        if (VAR_16[VAR_18]->dma_buf_len * VAR_16[VAR_18]->bytes_per_sample * VAR_16[VAR_18]->channel_num > 4092) {
            VAR_16[VAR_18]->dma_buf_len = 4092 / VAR_16[VAR_18]->bytes_per_sample / VAR_16[VAR_18]->channel_num;
        }

        if (VAR_16[VAR_18]->mode & VAR_12) {

            VAR_28 = VAR_16[VAR_18]->tx;

            VAR_16[VAR_18]->tx = FUNC_6(VAR_18, VAR_16[VAR_18]->dma_buf_count, VAR_16[VAR_18]->dma_buf_len);
            if (VAR_16[VAR_18]->tx == ((void*)0)) {
                FUNC_1(VAR_15, "Failed to create tx dma buffer");
                FUNC_8(VAR_18);
                return VAR_1;
            }
            VAR_3[VAR_18]->out_link.addr = (uint32_t) VAR_16[VAR_18]->tx->desc[0];


            if (VAR_28) {
                FUNC_7(VAR_18, VAR_28);
            }
        }

        if (VAR_16[VAR_18]->mode & VAR_11) {

            VAR_29 = VAR_16[VAR_18]->rx;

            VAR_16[VAR_18]->rx = FUNC_6(VAR_18, VAR_16[VAR_18]->dma_buf_count, VAR_16[VAR_18]->dma_buf_len);
            if (VAR_16[VAR_18]->rx == ((void*)0)){
                FUNC_1(VAR_15, "Failed to create rx dma buffer");
                FUNC_8(VAR_18);
                return VAR_1;
            }







            VAR_3[VAR_18]->in_link.addr = (uint32_t) VAR_16[VAR_18]->rx->desc[0];


            if (VAR_29) {
                FUNC_7(VAR_18, VAR_29);
            }
        }

    }

    double VAR_33;
    int VAR_34, VAR_35, VAR_36, VAR_37, VAR_38 = 8;
    int VAR_39 = VAR_19*VAR_27*VAR_20*VAR_38;
    if (VAR_16[VAR_18]->mode & (VAR_9 | VAR_8)) {



        uint32_t VAR_40 = VAR_19 * VAR_4;
        VAR_39 /= VAR_4;
        int VAR_41 = 60;
        VAR_33 = VAR_40 * VAR_41;
        VAR_30 = ((double) VAR_5) / VAR_33;
        VAR_23 = VAR_30;
        VAR_24 = (VAR_30 - VAR_23) / VAR_26;
        VAR_25 = VAR_33 / VAR_40;
    } else {
        VAR_23 = VAR_30;
        VAR_24 = (VAR_30 - VAR_23) / VAR_26;
        VAR_33 = VAR_23 + VAR_26 * VAR_24;
        VAR_25 = VAR_22/(VAR_20 * VAR_27);
    }

    if(VAR_16[VAR_18]->use_apll && VAR_16[VAR_18]->fixed_mclk) {
        VAR_39 = VAR_16[VAR_18]->fixed_mclk;
        VAR_38 = VAR_39/VAR_20/VAR_19/VAR_27;
    }
    if(VAR_16[VAR_18]->use_apll && FUNC_4(VAR_39, VAR_20, &VAR_34, &VAR_35, &VAR_36, &VAR_37) == VAR_2) {
        FUNC_0(VAR_15, "sdm0=%d, sdm1=%d, sdm2=%d, odir=%d", VAR_34, VAR_35, VAR_36, VAR_37);
        FUNC_11(1, VAR_34, VAR_35, VAR_36, VAR_37);
        VAR_3[VAR_18]->clkm_conf.clkm_div_num = 1;
        VAR_3[VAR_18]->clkm_conf.clkm_div_b = 0;
        VAR_3[VAR_18]->clkm_conf.clkm_div_a = 1;
        VAR_3[VAR_18]->sample_rate_conf.tx_bck_div_num = VAR_38;
        VAR_3[VAR_18]->sample_rate_conf.rx_bck_div_num = VAR_38;





        double VAR_42 = FUNC_5(VAR_20, VAR_34, VAR_35, VAR_36, VAR_37);
        VAR_16[VAR_18]->real_rate = VAR_42/VAR_20/VAR_27/VAR_38;
        FUNC_2(VAR_15, "APLL: Req RATE: %d, real rate: %0.3f, BITS: %u, CLKM: %u, BCK_M: %u, MCLK: %0.3f, SCLK: %f, diva: %d, divb: %d",
            VAR_19, VAR_42/VAR_20/VAR_27/VAR_38, VAR_20, 1, VAR_38, VAR_42, VAR_42/8, 1, 0);
    } else {





        VAR_3[VAR_18]->clkm_conf.clkm_div_a = 63;
        VAR_3[VAR_18]->clkm_conf.clkm_div_b = VAR_24;
        VAR_3[VAR_18]->clkm_conf.clkm_div_num = VAR_23;
        VAR_3[VAR_18]->sample_rate_conf.tx_bck_div_num = VAR_25;
        VAR_3[VAR_18]->sample_rate_conf.rx_bck_div_num = VAR_25;
        double VAR_43 = (double) (VAR_5 / (VAR_25 * VAR_20 * VAR_23) / 2);
        VAR_16[VAR_18]->real_rate = VAR_43;
        FUNC_2(VAR_15, "PLL_D2: Req RATE: %d, real rate: %0.3f, BITS: %u, CLKM: %u, BCK: %u, MCLK: %0.3f, SCLK: %f, diva: %d, divb: %d",
            VAR_19, VAR_43, VAR_20, VAR_23, VAR_25, (double)VAR_5 / VAR_33, VAR_43*VAR_20*VAR_27, 64, VAR_24);
    }

    VAR_3[VAR_18]->sample_rate_conf.tx_bits_mod = VAR_20;
    VAR_3[VAR_18]->sample_rate_conf.rx_bits_mod = VAR_20;


    if ((VAR_16[VAR_18]->mode & VAR_12) && VAR_16[VAR_18]->tx) {
        FUNC_12(VAR_16[VAR_18]->tx->mux);
    }
    if ((VAR_16[VAR_18]->mode & VAR_11) && VAR_16[VAR_18]->rx) {
        FUNC_12(VAR_16[VAR_18]->rx->mux);
    }
    FUNC_9(VAR_18);
    return VAR_2;
}
