
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ngene_channel {int TSRingBuffer; int RingBuffer; int TSIdleBuffer; } ;
struct ngene {int PAFWInterfaceBuffer; scalar_t__ FWInterfaceBuffer; int pci_dev; int PAOverflowBuffer; scalar_t__ OverflowBuffer; struct ngene_channel* channel; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct ngene*,int *,int *) ;
 int FUNC_1 (struct ngene*,int *) ;
 int FUNC_2 (int ,int,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct ngene *VAR_3)
{
 u32 VAR_4;
 struct ngene_channel *VAR_5;

 for (VAR_4 = VAR_2; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = &VAR_3->channel[VAR_4];
  FUNC_0(VAR_3, &VAR_5->TSIdleBuffer, &VAR_5->TSRingBuffer);
  FUNC_1(VAR_3, &VAR_5->RingBuffer);
  FUNC_1(VAR_3, &VAR_5->TSRingBuffer);
 }

 if (VAR_3->OverflowBuffer)
  FUNC_2(VAR_3->pci_dev,
        VAR_1,
        VAR_3->OverflowBuffer, VAR_3->PAOverflowBuffer);

 if (VAR_3->FWInterfaceBuffer)
  FUNC_2(VAR_3->pci_dev,
        4096,
        VAR_3->FWInterfaceBuffer,
        VAR_3->PAFWInterfaceBuffer);
}
