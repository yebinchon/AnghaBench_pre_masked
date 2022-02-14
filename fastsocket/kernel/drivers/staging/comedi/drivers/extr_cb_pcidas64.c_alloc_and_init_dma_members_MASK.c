
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct plx_dma_desc {int dummy; } ;
struct comedi_device {int dummy; } ;
struct TYPE_10__ {scalar_t__ layout; } ;
struct TYPE_9__ {int* ai_buffer_bus_addr; int* ao_buffer_bus_addr; int ai_dma_desc_bus_addr; int ao_dma_desc_bus_addr; int local1_iobase; int local0_iobase; TYPE_2__* ao_dma_desc; TYPE_1__* ai_dma_desc; int hw_dev; int ** ao_buffer; int ** ai_buffer; } ;
struct TYPE_8__ {void* next; void* transfer_size; void* local_start_addr; void* pci_start_addr; } ;
struct TYPE_7__ {void* next; void* transfer_size; void* local_start_addr; void* pci_start_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (struct comedi_device*) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int ,int,int*) ;
 TYPE_3__* FUNC_6 (struct comedi_device*) ;

int FUNC_7(struct comedi_device *VAR_9)
{
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < FUNC_1(FUNC_3(VAR_9)); VAR_10++) {
  FUNC_6(VAR_9)->ai_buffer[VAR_10] =
      FUNC_5(FUNC_6(VAR_9)->hw_dev, VAR_3,
      &FUNC_6(VAR_9)->ai_buffer_bus_addr[VAR_10]);
  if (FUNC_6(VAR_9)->ai_buffer[VAR_10] == ((void*)0)) {
   return -VAR_4;
  }
 }
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (FUNC_2(FUNC_3(VAR_9))) {
   FUNC_6(VAR_9)->ao_buffer[VAR_10] =
       FUNC_5(FUNC_6(VAR_9)->hw_dev,
       VAR_3,
       &FUNC_6(VAR_9)->
       ao_buffer_bus_addr[VAR_10]);
   if (FUNC_6(VAR_9)->ao_buffer[VAR_10] == ((void*)0)) {
    return -VAR_4;
   }
  }
 }

 FUNC_6(VAR_9)->ai_dma_desc =
     FUNC_5(FUNC_6(VAR_9)->hw_dev,
     sizeof(struct plx_dma_desc) *
     FUNC_1(FUNC_3(VAR_9)),
     &FUNC_6(VAR_9)->ai_dma_desc_bus_addr);
 if (FUNC_6(VAR_9)->ai_dma_desc == ((void*)0)) {
  return -VAR_4;
 }
 FUNC_0("ai dma descriptors start at bus addr 0x%x\n",
      FUNC_6(VAR_9)->ai_dma_desc_bus_addr);
 if (FUNC_2(FUNC_3(VAR_9))) {
  FUNC_6(VAR_9)->ao_dma_desc =
      FUNC_5(FUNC_6(VAR_9)->hw_dev,
      sizeof(struct plx_dma_desc) *
      VAR_1,
      &FUNC_6(VAR_9)->ao_dma_desc_bus_addr);
  if (FUNC_6(VAR_9)->ao_dma_desc == ((void*)0)) {
   return -VAR_4;
  }
  FUNC_0("ao dma descriptors start at bus addr 0x%x\n",
       FUNC_6(VAR_9)->ao_dma_desc_bus_addr);
 }

 for (VAR_10 = 0; VAR_10 < FUNC_1(FUNC_3(VAR_9)); VAR_10++) {
  FUNC_6(VAR_9)->ai_dma_desc[VAR_10].pci_start_addr =
      FUNC_4(FUNC_6(VAR_9)->ai_buffer_bus_addr[VAR_10]);
  if (FUNC_3(VAR_9)->layout == VAR_5)
   FUNC_6(VAR_9)->ai_dma_desc[VAR_10].local_start_addr =
       FUNC_4(FUNC_6(VAR_9)->local1_iobase +
     VAR_0);
  else
   FUNC_6(VAR_9)->ai_dma_desc[VAR_10].local_start_addr =
       FUNC_4(FUNC_6(VAR_9)->local0_iobase +
     VAR_0);
  FUNC_6(VAR_9)->ai_dma_desc[VAR_10].transfer_size = FUNC_4(0);
  FUNC_6(VAR_9)->ai_dma_desc[VAR_10].next =
      FUNC_4((FUNC_6(VAR_9)->ai_dma_desc_bus_addr + ((VAR_10 +
             1) %
            FUNC_1
            (FUNC_3
             (VAR_9))) *
     sizeof(FUNC_6(VAR_9)->ai_dma_desc[0])) |
    VAR_6 | VAR_7 |
    VAR_8);
 }
 if (FUNC_2(FUNC_3(VAR_9))) {
  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
   FUNC_6(VAR_9)->ao_dma_desc[VAR_10].pci_start_addr =
       FUNC_4(FUNC_6(VAR_9)->ao_buffer_bus_addr[VAR_10]);
   FUNC_6(VAR_9)->ao_dma_desc[VAR_10].local_start_addr =
       FUNC_4(FUNC_6(VAR_9)->local0_iobase +
     VAR_2);
   FUNC_6(VAR_9)->ao_dma_desc[VAR_10].transfer_size =
       FUNC_4(0);
   FUNC_6(VAR_9)->ao_dma_desc[VAR_10].next =
       FUNC_4((FUNC_6(VAR_9)->ao_dma_desc_bus_addr +
      ((VAR_10 + 1) % (VAR_1)) *
      sizeof(FUNC_6(VAR_9)->ao_dma_desc[0])) |
     VAR_6 |
     VAR_7);
  }
 }
 return 0;
}
