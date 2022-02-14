
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sram_channel {int fld_aud_fifo_en; int dma_ctl; } ;
struct cx25821_dev {size_t _audio_upstream_channel_select; struct sram_channel* sram_channels; } ;
typedef int dma_addr_t ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static __le32 *FUNC_1(struct cx25821_dev *VAR_6,
       __le32 * VAR_7,
       dma_addr_t VAR_8,
       unsigned int VAR_9,
       int VAR_10)
{
 unsigned int VAR_11;
 struct sram_channel *VAR_12 =
     &VAR_6->sram_channels[VAR_6->_audio_upstream_channel_select];
 int VAR_13 = 0;


 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  *(VAR_7++) = FUNC_0(VAR_3 | VAR_4 | VAR_2 | VAR_9);
  *(VAR_7++) = FUNC_0(VAR_8 + VAR_13);
  *(VAR_7++) = FUNC_0(0);



  if (VAR_10 && VAR_11 == 2) {
   *(VAR_7++) = VAR_5;
   *(VAR_7++) = VAR_12->dma_ctl;
   *(VAR_7++) = VAR_12->fld_aud_fifo_en;
   *(VAR_7++) = 0x00000020;
  }

  VAR_13 += VAR_0;
 }

 return VAR_7;
}
