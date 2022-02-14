
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int dma_buf_count; int dma_buf_len; int use_apll; int intr_alloc_flags; int channel_format; int communication_format; int bits_per_sample; int sample_rate; } ;
typedef TYPE_1__ i2s_config_t ;


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
 int VAR_12 ;
 int FUNC_0 (int,TYPE_1__*,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(void)
{
  int VAR_13 = VAR_1;
  i2s_config_t VAR_14 = {
        .mode = VAR_10 | VAR_11 | VAR_12 | VAR_9 | VAR_8,
        .sample_rate = VAR_3,
        .bits_per_sample = VAR_2,
     .communication_format = VAR_6,
     .channel_format = VAR_0,
     .intr_alloc_flags = 0,
     .dma_buf_count = 2,
     .dma_buf_len = 1024,
     .use_apll = 1,
  };

  FUNC_0(VAR_13, &VAR_14, 0, ((void*)0));

  FUNC_2(VAR_7);

  FUNC_1(VAR_5, VAR_4);
}
