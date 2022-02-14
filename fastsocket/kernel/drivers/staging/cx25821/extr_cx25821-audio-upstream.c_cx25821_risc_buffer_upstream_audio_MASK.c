
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cx25821_dev {int _risc_phys_start_addr; int * _risc_virt_addr; scalar_t__ _audiodata_buf_phys_addr; } ;
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
 scalar_t__ VAR_12 ;
 void* FUNC_0 (int) ;
 int * FUNC_1 (struct cx25821_dev*,int *,scalar_t__,unsigned int,int) ;

int FUNC_2(struct cx25821_dev *VAR_13,
           struct pci_dev *VAR_14,
           unsigned int VAR_15, unsigned int VAR_16)
{
 __le32 *VAR_17;
 int VAR_18 = 0;
 int VAR_19 = 0, VAR_20 = 0;
 int VAR_21 = VAR_0;
 int VAR_22 = 0;
 int VAR_23 = VAR_5;
 dma_addr_t VAR_24;


 VAR_17 = VAR_13->_risc_virt_addr;


 *(VAR_17++) = FUNC_0(VAR_10 | VAR_2);

 for (VAR_19 = 0; VAR_19 < VAR_3; VAR_19++) {
  VAR_22 = VAR_21 * VAR_19;

  if (VAR_19 == 0) {
   VAR_18 = 1;
   VAR_23 = VAR_6;
  } else {
   VAR_18 = 0;
   VAR_23 = VAR_5;
  }


  if ((VAR_19 + 1) == VAR_3) {
   VAR_24 =
       VAR_13->_risc_phys_start_addr +
       VAR_11;
  } else {
   VAR_24 =
       VAR_13->_risc_phys_start_addr +
       VAR_11 +
       VAR_1 * (VAR_19 + 1);
  }

  VAR_17 = FUNC_1(VAR_13, VAR_17,
             VAR_13->
             _audiodata_buf_phys_addr
             + VAR_22, VAR_15,
             VAR_18);

  if (VAR_12) {
   for (VAR_20 = 0; VAR_20 < VAR_4; VAR_20++) {
    *(VAR_17++) = FUNC_0(VAR_9);
   }
  }


  *(VAR_17++) = FUNC_0(VAR_8 | VAR_7 | VAR_23);
  *(VAR_17++) = FUNC_0(VAR_24);
  *(VAR_17++) = FUNC_0(0);


  VAR_17 = VAR_13->_risc_virt_addr + VAR_11 / 4 +
      (VAR_1 * (VAR_19 + 1) / 4);
 }

 return 0;
}
