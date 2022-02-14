
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int data_in_num; int data_out_num; int ws_io_num; int bck_io_num; } ;
typedef TYPE_1__ i2s_pin_config_t ;
struct TYPE_6__ {int mode; int bits_per_sample; int communication_format; int dma_buf_count; int dma_buf_len; int use_apll; int intr_alloc_flags; int channel_format; int sample_rate; } ;
typedef TYPE_2__ i2s_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,TYPE_2__*,int ,int *) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

void FUNC_4(void)
{





    i2s_config_t VAR_13 = {
        .mode = VAR_7 | VAR_8,
        .sample_rate = VAR_11,
        .bits_per_sample = 16,
        .channel_format = VAR_2,
        .communication_format = VAR_3 | VAR_4,
        .dma_buf_count = 6,
        .dma_buf_len = 60,
        .use_apll = 0,
        .intr_alloc_flags = VAR_0
    };
    i2s_pin_config_t VAR_14 = {
        .bck_io_num = VAR_1,
        .ws_io_num = VAR_10,
        .data_out_num = VAR_6,
        .data_in_num = VAR_5
    };
    FUNC_0(VAR_9, &VAR_13, 0, ((void*)0));
    FUNC_1(VAR_9, &VAR_14);

    int VAR_15 = 16;
    while (1) {
        FUNC_2(VAR_15);
        FUNC_3(5000/VAR_12);
        VAR_15 += 8;
        if(VAR_15 > 32)
            VAR_15 = 16;

    }

}
