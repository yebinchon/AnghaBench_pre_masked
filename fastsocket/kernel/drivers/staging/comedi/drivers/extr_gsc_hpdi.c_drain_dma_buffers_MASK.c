
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long uint32_t ;
struct comedi_device {TYPE_4__* read_subdev; } ;
struct TYPE_5__ {scalar_t__ stop_src; } ;
struct comedi_async {TYPE_1__ cmd; } ;
struct TYPE_8__ {struct comedi_async* async; } ;
struct TYPE_7__ {size_t dma_desc_index; int block_size; int num_dma_descriptors; int dio_count; TYPE_2__* dma_desc; int * desc_dio_buffer; void* plx9080_iobase; } ;
struct TYPE_6__ {scalar_t__ next; int pci_start_addr; } ;


 int FUNC_0 (char*,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 unsigned long FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (struct comedi_device*) ;
 unsigned long FUNC_4 (void*) ;

__attribute__((used)) static void FUNC_5(struct comedi_device *VAR_3, unsigned int VAR_4)
{
 struct comedi_async *VAR_5 = VAR_3->read_subdev->async;
 uint32_t VAR_6;
 int VAR_7;
 int VAR_8 = 0;
 void *VAR_9;

 if (VAR_4)
  VAR_9 =
      FUNC_3(VAR_3)->plx9080_iobase + VAR_1;
 else
  VAR_9 =
      FUNC_3(VAR_3)->plx9080_iobase + VAR_0;


 VAR_7 = 0;
 for (VAR_6 = FUNC_4(VAR_9);
      (VAR_6 <
       FUNC_2(FUNC_3(VAR_3)->dma_desc[FUNC_3(VAR_3)->dma_desc_index].
     pci_start_addr)
       || VAR_6 >=
       FUNC_2(FUNC_3(VAR_3)->dma_desc[FUNC_3(VAR_3)->dma_desc_index].
     pci_start_addr) + FUNC_3(VAR_3)->block_size)
      && VAR_7 < FUNC_3(VAR_3)->num_dma_descriptors; VAR_7++) {

  VAR_8 = FUNC_3(VAR_3)->block_size / sizeof(uint32_t);
  if (VAR_5->cmd.stop_src == VAR_2) {
   if (VAR_8 > FUNC_3(VAR_3)->dio_count)
    VAR_8 = FUNC_3(VAR_3)->dio_count;
   FUNC_3(VAR_3)->dio_count -= VAR_8;
  }
  FUNC_1(VAR_3->read_subdev,
       FUNC_3(VAR_3)->desc_dio_buffer[FUNC_3(VAR_3)->
             dma_desc_index],
       VAR_8 * sizeof(uint32_t));
  FUNC_3(VAR_3)->dma_desc_index++;
  FUNC_3(VAR_3)->dma_desc_index %= FUNC_3(VAR_3)->num_dma_descriptors;

  FUNC_0("next desc addr 0x%lx\n", (unsigned long)
       FUNC_3(VAR_3)->dma_desc[FUNC_3(VAR_3)->dma_desc_index].
       next);
  FUNC_0("pci addr reg 0x%x\n", VAR_6);
 }

}
