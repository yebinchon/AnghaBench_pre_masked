
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct sk_buff {int data; } ;
struct sge {unsigned int rx_pkt_pad; TYPE_1__* adapter; } ;
struct pci_dev {int dummy; } ;
struct freelQ_e {int addr_hi; int len_gen; int gen2; scalar_t__ addr_lo; } ;
struct freelQ_ce {struct sk_buff* skb; } ;
struct freelQ {size_t pidx; unsigned int rx_buffer_size; unsigned int dma_offset; size_t credits; size_t size; int genbit; struct freelQ_e* entries; struct freelQ_ce* centries; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 struct sk_buff* FUNC_3 (unsigned int,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct pci_dev*,int ,unsigned int,int ) ;
 int FUNC_5 (struct freelQ_ce*,int ,scalar_t__) ;
 int FUNC_6 (struct freelQ_ce*,unsigned int,unsigned int) ;
 int FUNC_7 (struct sk_buff*,unsigned int) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct sge *VAR_3, struct freelQ *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_3->adapter->pdev;
 struct freelQ_ce *VAR_6 = &VAR_4->centries[VAR_4->pidx];
 struct freelQ_e *VAR_7 = &VAR_4->entries[VAR_4->pidx];
 unsigned int VAR_8 = VAR_4->rx_buffer_size - VAR_4->dma_offset;

 while (VAR_4->credits < VAR_4->size) {
  struct sk_buff *VAR_9;
  dma_addr_t VAR_10;

  VAR_9 = FUNC_3(VAR_4->rx_buffer_size, VAR_0);
  if (!VAR_9)
   break;

  FUNC_7(VAR_9, VAR_4->dma_offset);
  VAR_10 = FUNC_4(VAR_5, VAR_9->data, VAR_8,
      VAR_1);
  FUNC_7(VAR_9, VAR_3->rx_pkt_pad);

  VAR_6->skb = VAR_9;
  FUNC_5(VAR_6, VAR_2, VAR_10);
  FUNC_6(VAR_6, VAR_8, VAR_8);
  VAR_7->addr_lo = (u32)VAR_10;
  VAR_7->addr_hi = (u64)VAR_10 >> 32;
  VAR_7->len_gen = FUNC_2(VAR_8) | FUNC_0(VAR_4->genbit);
  FUNC_8();
  VAR_7->gen2 = FUNC_1(VAR_4->genbit);

  VAR_7++;
  VAR_6++;
  if (++VAR_4->pidx == VAR_4->size) {
   VAR_4->pidx = 0;
   VAR_4->genbit ^= 1;
   VAR_6 = VAR_4->centries;
   VAR_7 = VAR_4->entries;
  }
  VAR_4->credits++;
 }
}
