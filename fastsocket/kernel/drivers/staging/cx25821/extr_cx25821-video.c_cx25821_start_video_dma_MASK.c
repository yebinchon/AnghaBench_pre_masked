
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sram_channel {int i; int dma_ctl; int int_msk; int gpcnt_ctl; } ;
struct cx25821_dmaqueue {int count; } ;
struct cx25821_dev {int dummy; } ;
struct TYPE_2__ {int dma; } ;
struct cx25821_buffer {TYPE_1__ risc; int bpl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx25821_dev*,struct sram_channel*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(struct cx25821_dev *VAR_2,
       struct cx25821_dmaqueue *VAR_3,
       struct cx25821_buffer *VAR_4,
       struct sram_channel *VAR_5)
{
 int VAR_6 = 0;


 FUNC_0(VAR_2, VAR_5, VAR_4->bpl, VAR_4->risc.dma);


 FUNC_3(VAR_5->gpcnt_ctl, 3);
 VAR_3->count = 1;


 FUNC_2(VAR_0, FUNC_1(VAR_0) | (1 << VAR_5->i));
 FUNC_2(VAR_5->int_msk, 0x11);


 FUNC_3(VAR_5->dma_ctl, 0x11);


 VAR_6 = FUNC_1(VAR_1);
 FUNC_3(VAR_1, VAR_6 & 0xFFFFFE00);

 return 0;
}
