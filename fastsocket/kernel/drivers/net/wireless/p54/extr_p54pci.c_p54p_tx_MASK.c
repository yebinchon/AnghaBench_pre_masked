
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct p54p_ring_control {void** host_idx; struct p54p_desc* tx_data; } ;
struct p54p_priv {int lock; struct sk_buff** tx_buf_data; TYPE_1__* pdev; struct p54p_ring_control* ring_control; } ;
struct p54p_desc {int flags; int len; int device_addr; void* host_addr; } ;
struct p54_hdr {int req_id; } ;
struct ieee80211_hw {struct p54p_priv* priv; } ;
typedef size_t dma_addr_t ;
struct TYPE_3__ {int dev; } ;


 size_t FUNC_0 (struct p54p_desc*) ;
 size_t VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (int *,char*) ;
 int VAR_2 ;
 size_t FUNC_6 (void*) ;
 int FUNC_7 (struct ieee80211_hw*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (TYPE_1__*,size_t) ;
 size_t FUNC_9 (TYPE_1__*,scalar_t__,int ,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(struct ieee80211_hw *VAR_3, struct sk_buff *VAR_4)
{
 unsigned long VAR_5;
 struct p54p_priv *VAR_6 = VAR_3->priv;
 struct p54p_ring_control *VAR_7 = VAR_6->ring_control;
 struct p54p_desc *VAR_8;
 dma_addr_t VAR_9;
 u32 VAR_10, VAR_11;

 FUNC_10(&VAR_6->lock, VAR_5);
 VAR_10 = FUNC_6(VAR_7->host_idx[1]);
 VAR_11 = VAR_10 % FUNC_0(VAR_7->tx_data);

 VAR_9 = FUNC_9(VAR_6->pdev, VAR_4->data, VAR_4->len,
     VAR_1);
 if (FUNC_8(VAR_6->pdev, VAR_9)) {
  FUNC_11(&VAR_6->lock, VAR_5);
  FUNC_7(VAR_3, VAR_4);
  FUNC_5(&VAR_6->pdev->dev, "TX DMA mapping error\n");
  return ;
 }
 VAR_6->tx_buf_data[VAR_11] = VAR_4;

 VAR_8 = &VAR_7->tx_data[VAR_11];
 VAR_8->host_addr = FUNC_4(VAR_9);
 VAR_8->device_addr = ((struct p54_hdr *)VAR_4->data)->req_id;
 VAR_8->len = FUNC_3(VAR_4->len);
 VAR_8->flags = 0;

 FUNC_12();
 VAR_7->host_idx[1] = FUNC_4(VAR_10 + 1);
 FUNC_11(&VAR_6->lock, VAR_5);

 FUNC_2(VAR_2, FUNC_4(VAR_0));
 FUNC_1(VAR_2);
}
