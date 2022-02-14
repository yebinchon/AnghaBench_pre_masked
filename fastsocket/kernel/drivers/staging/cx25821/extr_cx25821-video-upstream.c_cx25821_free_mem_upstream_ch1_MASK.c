
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx25821_dev {int * _data_buf_virt_addr; int _data_buf_phys_addr; int _data_buf_size; int pci; int * _dma_virt_addr; int _dma_phys_addr; int _risc_size; scalar_t__ _is_running; } ;


 int FUNC_0 (struct cx25821_dev*) ;
 int FUNC_1 (int ,int ,int *,int ) ;

void FUNC_2(struct cx25821_dev *VAR_0)
{
 if (VAR_0->_is_running) {
  FUNC_0(VAR_0);
 }

 if (VAR_0->_dma_virt_addr) {
  FUNC_1(VAR_0->pci, VAR_0->_risc_size,
        VAR_0->_dma_virt_addr, VAR_0->_dma_phys_addr);
  VAR_0->_dma_virt_addr = ((void*)0);
 }

 if (VAR_0->_data_buf_virt_addr) {
  FUNC_1(VAR_0->pci, VAR_0->_data_buf_size,
        VAR_0->_data_buf_virt_addr,
        VAR_0->_data_buf_phys_addr);
  VAR_0->_data_buf_virt_addr = ((void*)0);
 }
}
