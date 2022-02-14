
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct e1000_ring {int count; TYPE_1__* buffer_info; } ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {struct e1000_hw hw; struct pci_dev* pdev; struct e1000_ring test_rx_ring; struct e1000_ring test_tx_ring; } ;
struct TYPE_2__ {int skb; int dma; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 unsigned long VAR_2 ;
 int FUNC_8 (int) ;
 int FUNC_9 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct e1000_adapter *VAR_3)
{
 struct e1000_ring *VAR_4 = &VAR_3->test_tx_ring;
 struct e1000_ring *VAR_5 = &VAR_3->test_rx_ring;
 struct pci_dev *VAR_6 = VAR_3->pdev;
 struct e1000_hw *VAR_7 = &VAR_3->hw;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 unsigned long VAR_15;

 FUNC_7(FUNC_0(0), VAR_5->count - 1);






 if (VAR_5->count <= VAR_4->count)
  VAR_12 = ((VAR_4->count / 64) * 2) + 1;
 else
  VAR_12 = ((VAR_5->count / 64) * 2) + 1;

 VAR_10 = 0;
 VAR_11 = 0;

 for (VAR_9 = 0; VAR_9 <= VAR_12; VAR_9++) {

  for (VAR_8 = 0; VAR_8 < 64; VAR_8++) {
   FUNC_5(VAR_4->buffer_info[VAR_10].skb,
        1024);
   FUNC_3(&VAR_6->dev,
     VAR_4->buffer_info[VAR_10].dma,
     VAR_4->buffer_info[VAR_10].length,
     VAR_1);
   VAR_10++;
   if (VAR_10 == VAR_4->count)
    VAR_10 = 0;
  }
  FUNC_7(FUNC_1(0), VAR_10);
  FUNC_6();
  FUNC_8(200);
  VAR_15 = VAR_2;
  VAR_13 = 0;

  do {
   FUNC_2(&VAR_6->dev,
     VAR_5->buffer_info[VAR_11].dma, 2048,
     VAR_0);

   VAR_14 = FUNC_4(
     VAR_5->buffer_info[VAR_11].skb, 1024);
   if (!VAR_14)
    VAR_13++;
   VAR_11++;
   if (VAR_11 == VAR_5->count)
    VAR_11 = 0;




  } while ((VAR_13 < 64) && !FUNC_9(VAR_2, VAR_15 + 20));
  if (VAR_13 != 64) {
   VAR_14 = 13;
   break;
  }
  if (VAR_2 >= (VAR_15 + 20)) {
   VAR_14 = 14;
   break;
  }
 }
 return VAR_14;
}
