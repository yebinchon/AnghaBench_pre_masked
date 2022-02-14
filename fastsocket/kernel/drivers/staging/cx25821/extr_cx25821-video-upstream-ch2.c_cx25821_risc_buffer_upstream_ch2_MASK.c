
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cx25821_dev {int _dma_phys_start_addr_ch2; scalar_t__ _data_buf_phys_addr_ch2; int * _dma_virt_addr_ch2; scalar_t__ _isNTSC_ch2; } ;
typedef int dma_addr_t ;
typedef int __le32 ;


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
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 void* FUNC_0 (int) ;
 int * FUNC_1 (struct cx25821_dev*,int *,scalar_t__,unsigned int,int,unsigned int,int,int,int ) ;

int FUNC_2(struct cx25821_dev *VAR_17,
         struct pci_dev *VAR_18,
         unsigned int VAR_19, unsigned int VAR_20,
         unsigned int VAR_21)
{
 __le32 *VAR_22;
 int VAR_23 = 0;
 int VAR_24 = VAR_21 >> 1;
 int VAR_25 = VAR_24;
 int VAR_26 = 0;
 int VAR_27 = 0;
 int VAR_28 = 0;
 int VAR_29 = 0;
 int VAR_30 = VAR_12;
 unsigned int VAR_31 = VAR_20;
 dma_addr_t VAR_32;

 if (VAR_17->_isNTSC_ch2) {
  VAR_25 = VAR_24 + 1;
  VAR_29 = VAR_3;
  VAR_27 =
      (VAR_20 ==
       VAR_16) ? VAR_4 :
      VAR_5;
 } else {
  VAR_29 = VAR_10;
  VAR_27 =
      (VAR_20 ==
       VAR_16) ? VAR_6 : VAR_7;
 }


 VAR_22 = VAR_17->_dma_virt_addr_ch2;

 for (VAR_26 = 0; VAR_26 < VAR_8; VAR_26++) {
  VAR_28 = VAR_27 * VAR_26;

  if (VAR_15 != VAR_19) {
   VAR_23 = (VAR_26 == 0) ? VAR_2 : VAR_1;
   VAR_22 = FUNC_1(VAR_17, VAR_22,
            VAR_17->
            _data_buf_phys_addr_ch2
            + VAR_28,
            VAR_19, 0, VAR_20,
            VAR_25,
            VAR_23,
            VAR_9);
  }

  VAR_23 = VAR_1;


  VAR_22 = FUNC_1(VAR_17, VAR_22,
           VAR_17->
           _data_buf_phys_addr_ch2 +
           VAR_28,
           VAR_31, 0x200, VAR_20,
           VAR_24,
           VAR_23, VAR_0);

  if (VAR_26 == 0) {
   VAR_30 = VAR_12;
   VAR_32 =
       VAR_17->_dma_phys_start_addr_ch2 + VAR_29;
  } else {
   VAR_30 = VAR_11;
   VAR_32 = VAR_17->_dma_phys_start_addr_ch2;
  }


  *(VAR_22++) = FUNC_0(VAR_14 | VAR_13 | VAR_30);
  *(VAR_22++) = FUNC_0(VAR_32);
  *(VAR_22++) = FUNC_0(0);
 }

 return 0;
}
