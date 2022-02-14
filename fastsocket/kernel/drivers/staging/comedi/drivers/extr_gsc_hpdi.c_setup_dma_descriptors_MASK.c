
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct comedi_device {int dummy; } ;
struct TYPE_4__ {unsigned int dma_desc_phys_addr; unsigned int* dio_buffer_phys_addr; unsigned int* desc_dio_buffer; unsigned int* dio_buffer; unsigned int num_dma_descriptors; unsigned int block_size; TYPE_1__* dma_desc; } ;
struct TYPE_3__ {void* next; void* pci_start_addr; void* transfer_size; void* local_start_addr; } ;


 int FUNC_0 (char*,unsigned int,...) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 void* FUNC_1 (unsigned int) ;
 TYPE_2__* FUNC_2 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_7,
     unsigned int VAR_8)
{
 unsigned int VAR_9, VAR_10;
 uint32_t VAR_11 = VAR_4 | VAR_5 |
     VAR_6;
 unsigned int VAR_12;

 if (VAR_8 > VAR_0)
  VAR_8 = VAR_0;
 VAR_8 -= VAR_8 % sizeof(uint32_t);
 if (VAR_8 == 0)
  return -1;

 FUNC_0(" transfer_size %i\n", VAR_8);
 FUNC_0(" descriptors at 0x%lx\n",
      (unsigned long)FUNC_2(VAR_7)->dma_desc_phys_addr);

 VAR_10 = 0;
 VAR_9 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_3 &&
      VAR_9 < VAR_2; VAR_12++) {
  FUNC_2(VAR_7)->dma_desc[VAR_12].pci_start_addr =
      FUNC_1(FUNC_2(VAR_7)->dio_buffer_phys_addr[VAR_9] +
    VAR_10);
  FUNC_2(VAR_7)->dma_desc[VAR_12].local_start_addr = FUNC_1(VAR_1);
  FUNC_2(VAR_7)->dma_desc[VAR_12].transfer_size =
      FUNC_1(VAR_8);
  FUNC_2(VAR_7)->dma_desc[VAR_12].next =
      FUNC_1((FUNC_2(VAR_7)->dma_desc_phys_addr + (VAR_12 +
          1) *
     sizeof(FUNC_2(VAR_7)->dma_desc[0])) | VAR_11);

  FUNC_2(VAR_7)->desc_dio_buffer[VAR_12] =
      FUNC_2(VAR_7)->dio_buffer[VAR_9] +
      (VAR_10 / sizeof(uint32_t));

  VAR_10 += VAR_8;
  if (VAR_8 + VAR_10 > VAR_0) {
   VAR_10 = 0;
   VAR_9++;
  }

  FUNC_0(" desc %i\n", VAR_12);
  FUNC_0(" start addr virt 0x%p, phys 0x%lx\n",
       FUNC_2(VAR_7)->desc_dio_buffer[VAR_12],
       (unsigned long)FUNC_2(VAR_7)->dma_desc[VAR_12].
       pci_start_addr);
  FUNC_0(" next 0x%lx\n",
       (unsigned long)FUNC_2(VAR_7)->dma_desc[VAR_12].next);
 }
 FUNC_2(VAR_7)->num_dma_descriptors = VAR_12;

 FUNC_2(VAR_7)->dma_desc[VAR_12 - 1].next =
     FUNC_1(FUNC_2(VAR_7)->dma_desc_phys_addr | VAR_11);
 FUNC_0(" desc %i next fixup 0x%lx\n", VAR_12 - 1,
      (unsigned long)FUNC_2(VAR_7)->dma_desc[VAR_12 - 1].next);

 FUNC_2(VAR_7)->block_size = VAR_8;

 return VAR_8;
}
