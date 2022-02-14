
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spider_net_hw_descr {scalar_t__ next_descr_addr; int dmac_cmd_status; } ;
struct spider_net_descr_chain {int num_desc; int dma_addr; struct spider_net_descr* ring; struct spider_net_descr* tail; struct spider_net_descr* head; int lock; struct spider_net_hw_descr* hwring; } ;
struct spider_net_descr {int bus_addr; struct spider_net_descr* prev; struct spider_net_descr* next; struct spider_net_hw_descr* hwdescr; } ;
struct spider_net_card {TYPE_1__* pdev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct spider_net_hw_descr* FUNC_0 (int *,size_t,int*,int ) ;
 int FUNC_1 (struct spider_net_descr*,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct spider_net_card *VAR_3,
         struct spider_net_descr_chain *VAR_4)
{
 int VAR_5;
 struct spider_net_descr *VAR_6;
 struct spider_net_hw_descr *VAR_7;
 dma_addr_t VAR_8;
 size_t VAR_9;

 VAR_9 = VAR_4->num_desc * sizeof(struct spider_net_hw_descr);

 VAR_4->hwring = FUNC_0(&VAR_3->pdev->dev, VAR_9,
  &VAR_4->dma_addr, VAR_1);

 if (!VAR_4->hwring)
  return -VAR_0;

 FUNC_1(VAR_4->ring, 0, VAR_4->num_desc * sizeof(struct spider_net_descr));


 VAR_6 = VAR_4->ring;
 VAR_7 = VAR_4->hwring;
 VAR_8 = VAR_4->dma_addr;
 for (VAR_5=0; VAR_5 < VAR_4->num_desc; VAR_5++, VAR_6++, VAR_7++) {
  VAR_7->dmac_cmd_status = VAR_2;
  VAR_7->next_descr_addr = 0;

  VAR_6->hwdescr = VAR_7;
  VAR_6->bus_addr = VAR_8;
  VAR_6->next = VAR_6 + 1;
  VAR_6->prev = VAR_6 - 1;

  VAR_8 += sizeof(struct spider_net_hw_descr);
 }

 (VAR_6-1)->next = VAR_4->ring;
 VAR_4->ring->prev = VAR_6-1;

 FUNC_2(&VAR_4->lock);
 VAR_4->head = VAR_4->ring;
 VAR_4->tail = VAR_4->ring;
 return 0;
}
