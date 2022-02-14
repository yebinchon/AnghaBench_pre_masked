
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sram_channel {int dma_ctl; int int_msk; } ;
struct cx25821_dev {int * _filename; int * _irq_queues; int _file_status; scalar_t__ _frame_count; scalar_t__ _is_first_frame; scalar_t__ _is_running; int _data_buf_size; scalar_t__ _data_buf_virt_addr; struct sram_channel* sram_channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (char*) ;

void FUNC_5(struct cx25821_dev *VAR_6)
{
 struct sram_channel *VAR_7 =
     &VAR_6->sram_channels[VAR_4];
 u32 VAR_8 = 0;

 if (!VAR_6->_is_running) {
  FUNC_4
      ("cx25821: No video file is currently running so return!\n");
  return;
 }

 VAR_8 = FUNC_0(VAR_7->int_msk);
 FUNC_1(VAR_7->int_msk, VAR_8 & ~VAR_5);


 VAR_8 = FUNC_0(VAR_7->dma_ctl);
 FUNC_1(VAR_7->dma_ctl, VAR_8 & ~(VAR_1 | VAR_2));


 if (VAR_6->_data_buf_virt_addr)
  FUNC_3(VAR_6->_data_buf_virt_addr, 0, VAR_6->_data_buf_size);

 VAR_6->_is_running = 0;
 VAR_6->_is_first_frame = 0;
 VAR_6->_frame_count = 0;
 VAR_6->_file_status = VAR_0;

 if (VAR_6->_irq_queues) {
  FUNC_2(VAR_6->_irq_queues);
  VAR_6->_irq_queues = ((void*)0);
 }

 if (VAR_6->_filename != ((void*)0))
  FUNC_2(VAR_6->_filename);

 VAR_8 = FUNC_0(VAR_3);
 FUNC_1(VAR_3, VAR_8 & 0xFFFFFE00);
}
