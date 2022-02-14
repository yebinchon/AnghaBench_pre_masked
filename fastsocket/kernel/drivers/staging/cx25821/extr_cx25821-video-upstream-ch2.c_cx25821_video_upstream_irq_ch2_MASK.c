
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sram_channel {int int_msk; int int_stat; int gpcnt; } ;
struct cx25821_dev {int _frame_index_ch2; scalar_t__ _pixel_format_ch2; scalar_t__ _file_status_ch2; int _frame_count_ch2; int slock; int * _dma_virt_start_addr_ch2; scalar_t__ _dma_phys_start_addr_ch2; scalar_t__ _isNTSC_ch2; scalar_t__ _is_first_frame_ch2; int _irq_work_entry_ch2; int _irq_queues_ch2; struct sram_channel* sram_channels; } ;
typedef scalar_t__ dma_addr_t ;
typedef int __le32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (scalar_t__) ;
 int * FUNC_1 (struct cx25821_dev*,int *,int ,int,int,int,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct cx25821_dev *VAR_14, int VAR_15,
       u32 VAR_16)
{
 u32 VAR_17;
 struct sram_channel *VAR_18 = &VAR_14->sram_channels[VAR_15];
 int VAR_19 = VAR_3;
 int VAR_20 = VAR_12;
 int VAR_21 = 0;
 dma_addr_t VAR_22;
 __le32 *VAR_23;

 if (VAR_16 & VAR_2) {

  u32 VAR_24 = FUNC_2(VAR_18->gpcnt);


  VAR_17 = FUNC_2(VAR_18->int_msk);
  FUNC_3(VAR_18->int_msk, VAR_17 & ~VAR_13);
  FUNC_3(VAR_18->int_stat, VAR_13);

  FUNC_6(&VAR_14->slock);

  VAR_14->_frame_index_ch2 = VAR_24;

  FUNC_5(VAR_14->_irq_queues_ch2, &VAR_14->_irq_work_entry_ch2);

  if (VAR_14->_is_first_frame_ch2) {
   VAR_14->_is_first_frame_ch2 = 0;

   if (VAR_14->_isNTSC_ch2) {
    VAR_19 += 1;
    VAR_21 = VAR_5;
   } else {
    VAR_19 = VAR_7;
    VAR_21 = VAR_6;
   }

   if (VAR_14->_dma_virt_start_addr_ch2 != ((void*)0)) {
    VAR_20 =
        (VAR_14->_pixel_format_ch2 ==
         VAR_8) ? VAR_11 :
        VAR_12;
    VAR_22 =
        VAR_14->_dma_phys_start_addr_ch2 +
        VAR_21;

    VAR_23 = FUNC_1(VAR_14,
            VAR_14->
            _dma_virt_start_addr_ch2,
            VAR_10,
            VAR_20,
            0x0,
            VAR_19,
            VAR_1,
            VAR_4);


    *(VAR_23++) = FUNC_0(VAR_9);
    *(VAR_23++) = FUNC_0(VAR_22);
    *(VAR_23++) = FUNC_0(0);
   }
  }

  FUNC_7(&VAR_14->slock);
 }

 if (VAR_14->_file_status_ch2 == VAR_0) {
  FUNC_4("cx25821: EOF Channel 2 Framecount = %d\n",
         VAR_14->_frame_count_ch2);
  return -1;
 }

 VAR_17 = FUNC_2(VAR_18->int_msk);
 FUNC_3(VAR_18->int_msk, VAR_17 |= VAR_13);

 return 0;
}
