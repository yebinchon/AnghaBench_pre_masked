
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sram_channel {int fld_aud_fifo_en; int fld_aud_risc_en; int dma_ctl; int int_msk; } ;
struct cx25821_dev {int * _audiofilename; int * _irq_audio_queues; int _audiofile_status; scalar_t__ _audioframe_count; scalar_t__ _is_first_audio_frame; scalar_t__ _audio_is_running; int _audiodata_buf_size; scalar_t__ _audiodata_buf_virt_addr; struct sram_channel* sram_channels; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (char*) ;

void FUNC_5(struct cx25821_dev *VAR_2)
{
 struct sram_channel *VAR_3 =
     &VAR_2->sram_channels[VAR_0];
 u32 VAR_4 = 0;

 if (!VAR_2->_audio_is_running) {
  FUNC_4
      ("cx25821: No audio file is currently running so return!\n");
  return;
 }

 FUNC_1(VAR_3->int_msk, 0);


 VAR_4 = FUNC_0(VAR_3->dma_ctl);
 FUNC_1(VAR_3->dma_ctl,
   VAR_4 & ~(VAR_3->fld_aud_fifo_en | VAR_3->fld_aud_risc_en));


 if (VAR_2->_audiodata_buf_virt_addr)
  FUNC_3(VAR_2->_audiodata_buf_virt_addr, 0,
         VAR_2->_audiodata_buf_size);

 VAR_2->_audio_is_running = 0;
 VAR_2->_is_first_audio_frame = 0;
 VAR_2->_audioframe_count = 0;
 VAR_2->_audiofile_status = VAR_1;

 if (VAR_2->_irq_audio_queues) {
  FUNC_2(VAR_2->_irq_audio_queues);
  VAR_2->_irq_audio_queues = ((void*)0);
 }

 if (VAR_2->_audiofilename != ((void*)0))
  FUNC_2(VAR_2->_audiofilename);
}
