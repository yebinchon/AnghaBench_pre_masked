
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct e1000_tx_ring {int count; TYPE_1__* buffer_info; } ;
struct e1000_rx_ring {int count; TYPE_2__* buffer_info; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {struct pci_dev* pdev; struct e1000_rx_ring test_rx_ring; struct e1000_tx_ring test_tx_ring; struct e1000_hw hw; } ;
struct TYPE_4__ {int skb; int length; int dma; } ;
struct TYPE_3__ {int length; int dma; int skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 unsigned long VAR_4 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct e1000_adapter *VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_5->hw;
 struct e1000_tx_ring *VAR_7 = &VAR_5->test_tx_ring;
 struct e1000_rx_ring *VAR_8 = &VAR_5->test_rx_ring;
 struct pci_dev *VAR_9 = VAR_5->pdev;
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16=0;
 unsigned long VAR_17;

 FUNC_5(VAR_2, VAR_8->count - 1);






 if (VAR_8->count <= VAR_7->count)
  VAR_14 = ((VAR_7->count / 64) * 2) + 1;
 else
  VAR_14 = ((VAR_8->count / 64) * 2) + 1;

 VAR_12 = VAR_13 = 0;
 for (VAR_11 = 0; VAR_11 <= VAR_14; VAR_11++) {
  for (VAR_10 = 0; VAR_10 < 64; VAR_10++) {
   FUNC_4(VAR_7->buffer_info[VAR_10].skb,
     1024);
   FUNC_2(&VAR_9->dev,
         VAR_7->buffer_info[VAR_12].dma,
         VAR_7->buffer_info[VAR_12].length,
         VAR_1);
   if (FUNC_7(++VAR_12 == VAR_7->count)) VAR_12 = 0;
  }
  FUNC_5(VAR_3, VAR_12);
  FUNC_0();
  FUNC_6(200);
  VAR_17 = VAR_4;
  VAR_15 = 0;
  do {
   FUNC_1(&VAR_9->dev,
      VAR_8->buffer_info[VAR_13].dma,
      VAR_8->buffer_info[VAR_13].length,
      VAR_0);

   VAR_16 = FUNC_3(
     VAR_8->buffer_info[VAR_13].skb,
        1024);
   if (!VAR_16)
    VAR_15++;
   if (FUNC_7(++VAR_13 == VAR_8->count)) VAR_13 = 0;




  } while (VAR_15 < 64 && VAR_4 < (VAR_17 + 20));
  if (VAR_15 != 64) {
   VAR_16 = 13;
   break;
  }
  if (VAR_4 >= (VAR_17 + 2)) {
   VAR_16 = 14;
   break;
  }
 }
 return VAR_16;
}
