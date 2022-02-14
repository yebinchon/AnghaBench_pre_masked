
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long uint32_t ;
typedef int uint16_t ;
struct comedi_device {TYPE_3__* read_subdev; } ;
struct TYPE_4__ {scalar_t__ stop_src; } ;
struct comedi_async {TYPE_1__ cmd; } ;
struct TYPE_6__ {struct comedi_async* async; } ;
struct TYPE_5__ {unsigned long* ai_buffer_bus_addr; size_t ai_dma_index; int ai_count; int * ai_buffer; void* plx9080_iobase; } ;


 int FUNC_0 (char*,unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct comedi_device*) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (struct comedi_device*) ;
 TYPE_2__* FUNC_5 (struct comedi_device*) ;
 unsigned long FUNC_6 (void*) ;

__attribute__((used)) static void FUNC_7(struct comedi_device *VAR_4, unsigned int VAR_5)
{
 struct comedi_async *VAR_6 = VAR_4->read_subdev->async;
 uint32_t VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 void *VAR_10;

 if (VAR_5)
  VAR_10 =
      FUNC_5(VAR_4)->plx9080_iobase + VAR_2;
 else
  VAR_10 =
      FUNC_5(VAR_4)->plx9080_iobase + VAR_1;


 for (VAR_8 = 0, VAR_7 = FUNC_6(VAR_10);
      (VAR_7 <
       FUNC_5(VAR_4)->ai_buffer_bus_addr[FUNC_5(VAR_4)->ai_dma_index]
       || VAR_7 >=
       FUNC_5(VAR_4)->ai_buffer_bus_addr[FUNC_5(VAR_4)->ai_dma_index] +
       VAR_0) && VAR_8 < FUNC_1(FUNC_2(VAR_4)); VAR_8++) {

  VAR_9 = FUNC_4(VAR_4);
  if (VAR_6->cmd.stop_src == VAR_3) {
   if (VAR_9 > FUNC_5(VAR_4)->ai_count)
    VAR_9 = FUNC_5(VAR_4)->ai_count;
   FUNC_5(VAR_4)->ai_count -= VAR_9;
  }
  FUNC_3(VAR_4->read_subdev,
       FUNC_5(VAR_4)->ai_buffer[FUNC_5(VAR_4)->
              ai_dma_index],
       VAR_9 * sizeof(uint16_t));
  FUNC_5(VAR_4)->ai_dma_index =
      (FUNC_5(VAR_4)->ai_dma_index +
       1) % FUNC_1(FUNC_2(VAR_4));

  FUNC_0("next buffer addr 0x%lx\n",
       (unsigned long)FUNC_5(VAR_4)->
       ai_buffer_bus_addr[FUNC_5(VAR_4)->ai_dma_index]);
  FUNC_0("pci addr reg 0x%x\n", VAR_7);
 }


}
