
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ngene {TYPE_2__* channel; int PAOverflowBuffer; int pci_dev; TYPE_1__* card_info; void* OverflowBuffer; void* FWInterfaceBuffer; void* EventBuffer; void* ngenetohost; void* hosttongene; int PAFWInterfaceBuffer; } ;
struct TYPE_4__ {int TSRingBuffer; int TSIdleBuffer; int RingBuffer; int State; } ;
struct TYPE_3__ {int* io_type; } ;


 int FUNC_0 (int ,int ,int *,int ,int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
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
 int* VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (void*,int ,int) ;
 void* FUNC_4 (int ,int,int *) ;

__attribute__((used)) static int FUNC_5(struct ngene *VAR_16)
{
 int VAR_17 = 0, VAR_18;

 VAR_16->FWInterfaceBuffer = FUNC_4(VAR_16->pci_dev, 4096,
           &VAR_16->PAFWInterfaceBuffer);
 if (!VAR_16->FWInterfaceBuffer)
  return -VAR_2;
 VAR_16->hosttongene = VAR_16->FWInterfaceBuffer;
 VAR_16->ngenetohost = VAR_16->FWInterfaceBuffer + 256;
 VAR_16->EventBuffer = VAR_16->FWInterfaceBuffer + 512;

 VAR_16->OverflowBuffer = FUNC_4(VAR_16->pci_dev,
         VAR_12,
         &VAR_16->PAOverflowBuffer);
 if (!VAR_16->OverflowBuffer)
  return -VAR_2;
 FUNC_3(VAR_16->OverflowBuffer, 0, VAR_12);

 for (VAR_18 = VAR_15; VAR_18 < VAR_5; VAR_18++) {
  int VAR_19 = VAR_16->card_info->io_type[VAR_18];

  VAR_16->channel[VAR_18].State = VAR_3;

  if (VAR_19 & (VAR_11 | VAR_8 | VAR_7)) {
   VAR_17 = FUNC_2(VAR_16->pci_dev,
          &VAR_16->channel[VAR_18].RingBuffer,
          VAR_14[VAR_18]);
   if (VAR_17 < 0)
    break;

   if (VAR_19 & (VAR_11 | VAR_7)) {
    VAR_17 = FUNC_0(VAR_16->pci_dev,
            VAR_16->
            PAOverflowBuffer,
            &VAR_16->channel[VAR_18].
            RingBuffer,
            VAR_0[VAR_18],
            VAR_1[VAR_18]);
    if (VAR_17 < 0)
     break;
   } else if (VAR_19 & VAR_8) {
    VAR_17 = FUNC_0(VAR_16->pci_dev,
            VAR_16->
            PAOverflowBuffer,
            &VAR_16->channel[VAR_18].
            RingBuffer,
          VAR_4,
            0);
    if (VAR_17 < 0)
     break;
   }
  }

  if (VAR_19 & (VAR_9 | VAR_10)) {

   VAR_17 = FUNC_2(VAR_16->pci_dev,
          &VAR_16->channel[VAR_18].
          TSRingBuffer, VAR_13);
   if (VAR_17 < 0)
    break;

   VAR_17 = FUNC_0(VAR_16->pci_dev,
           VAR_16->PAOverflowBuffer,
           &VAR_16->channel[VAR_18].
           TSRingBuffer,
           VAR_6, 0);
   if (VAR_17)
    break;
  }

  if (VAR_19 & VAR_10) {
   VAR_17 = FUNC_2(VAR_16->pci_dev,
          &VAR_16->channel[VAR_18].
          TSIdleBuffer, 1);
   if (VAR_17 < 0)
    break;
   VAR_17 = FUNC_0(VAR_16->pci_dev,
           VAR_16->PAOverflowBuffer,
           &VAR_16->channel[VAR_18].
           TSIdleBuffer,
           VAR_6, 0);
   if (VAR_17)
    break;
   FUNC_1(&VAR_16->channel[VAR_18].TSIdleBuffer,
      &VAR_16->channel[VAR_18].TSRingBuffer);
  }
 }
 return VAR_17;
}
