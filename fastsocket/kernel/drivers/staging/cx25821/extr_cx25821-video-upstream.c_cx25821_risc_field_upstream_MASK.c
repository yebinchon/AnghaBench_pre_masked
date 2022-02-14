
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sram_channel {int dma_ctl; } ;
struct cx25821_dev {size_t _channel_upstream_select; int _isNTSC; struct sram_channel* sram_channels; } ;
typedef unsigned int dma_addr_t ;
typedef int __le32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_0 (unsigned int) ;

__attribute__((used)) static __le32 *FUNC_1(struct cx25821_dev *VAR_11, __le32 * VAR_12,
        dma_addr_t VAR_13,
        unsigned int VAR_14, u32 VAR_15,
        unsigned int VAR_16, unsigned int VAR_17,
        int VAR_18, int VAR_19)
{
 unsigned int VAR_20, VAR_21;
 struct sram_channel *VAR_22 =
     &VAR_11->sram_channels[VAR_11->_channel_upstream_select];
 int VAR_23 = VAR_16 * 2;


 if (VAR_15 != VAR_1) {
  *(VAR_12++) = FUNC_0(VAR_7 | VAR_15);
 }

 if (VAR_10) {
  for (VAR_21 = 0; VAR_21 < VAR_3; VAR_21++) {
   *(VAR_12++) = FUNC_0(VAR_5);
  }
 }


 for (VAR_20 = 0; VAR_20 < VAR_17; VAR_20++) {
  *(VAR_12++) = FUNC_0(VAR_6 | VAR_8 | VAR_4 | VAR_16);
  *(VAR_12++) = FUNC_0(VAR_13 + VAR_14);
  *(VAR_12++) = FUNC_0(0);

  if ((VAR_17 <= VAR_2)
      || (VAR_20 < (VAR_2 - 1)) || !(VAR_11->_isNTSC)) {
   VAR_14 += VAR_23;
  }



  if (VAR_18 && VAR_20 == 3) {
   *(VAR_12++) = VAR_9;
   *(VAR_12++) = VAR_22->dma_ctl;
   *(VAR_12++) = VAR_0;
   *(VAR_12++) = 0x00000001;
  }
 }

 return VAR_12;
}
