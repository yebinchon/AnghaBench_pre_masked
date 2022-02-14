
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct pch_gbe_rx_ring {unsigned int count; unsigned int rx_buff_pool_size; scalar_t__ rx_buff_pool; struct pch_gbe_buffer* buffer_info; int rx_buff_pool_logic; } ;
struct pch_gbe_buffer {unsigned int length; scalar_t__ rx_buffer; } ;
struct pch_gbe_adapter {unsigned int rx_buffer_len; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int *,unsigned int,int *,int ) ;
 int FUNC_1 (scalar_t__,int ,unsigned int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct pch_gbe_adapter *VAR_3,
    struct pch_gbe_rx_ring *VAR_4, int VAR_5)
{
 struct pci_dev *VAR_6 = VAR_3->pdev;
 struct pch_gbe_buffer *VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;

 VAR_9 = VAR_3->rx_buffer_len;

 VAR_10 = VAR_4->count * VAR_9 + VAR_2;
 VAR_4->rx_buff_pool = FUNC_0(&VAR_6->dev, VAR_10,
      &VAR_4->rx_buff_pool_logic,
      VAR_1);
 if (!VAR_4->rx_buff_pool) {
  FUNC_2("Unable to allocate memory for the receive pool buffer\n");
  return -VAR_0;
 }
 FUNC_1(VAR_4->rx_buff_pool, 0, VAR_10);
 VAR_4->rx_buff_pool_size = VAR_10;
 for (VAR_8 = 0; VAR_8 < VAR_4->count; VAR_8++) {
  VAR_7 = &VAR_4->buffer_info[VAR_8];
  VAR_7->rx_buffer = VAR_4->rx_buff_pool + VAR_9 * VAR_8;
  VAR_7->length = VAR_9;
 }
 return 0;
}
