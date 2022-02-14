
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx25821_dev {int * _audiodata_buf_virt_addr; int _audiodata_buf_phys_addr; int _audiodata_buf_size; int pci; int * _risc_virt_addr; int _risc_phys_addr; int _audiorisc_size; } ;


 int FUNC_0 (int ,int ,int *,int ) ;

void FUNC_1(struct cx25821_dev *VAR_0)
{
 if (VAR_0->_risc_virt_addr) {
  FUNC_0(VAR_0->pci, VAR_0->_audiorisc_size,
        VAR_0->_risc_virt_addr, VAR_0->_risc_phys_addr);
  VAR_0->_risc_virt_addr = ((void*)0);
 }

 if (VAR_0->_audiodata_buf_virt_addr) {
  FUNC_0(VAR_0->pci, VAR_0->_audiodata_buf_size,
        VAR_0->_audiodata_buf_virt_addr,
        VAR_0->_audiodata_buf_phys_addr);
  VAR_0->_audiodata_buf_virt_addr = ((void*)0);
 }
}
