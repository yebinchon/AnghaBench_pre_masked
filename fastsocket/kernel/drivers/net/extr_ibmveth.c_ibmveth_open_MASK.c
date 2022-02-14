
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags_len; void* address; } ;
union ibmveth_buf_desc {int desc; TYPE_1__ fields; } ;
typedef int u64 ;
struct net_device {int mtu; int irq; int name; int addr_len; int dev_addr; } ;
struct ibmveth_rx_q_entry {int dummy; } ;
struct TYPE_6__ {int queue_len; int num_slots; int toggle; void* queue_addr; void* queue_dma; scalar_t__ index; } ;
struct ibmveth_adapter {int napi; void* bounce_buffer_dma; void* bounce_buffer; TYPE_3__* vdev; TYPE_4__* rx_buff_pool; void* filter_list_dma; void* buffer_list_dma; TYPE_2__ rx_queue; void* filter_list_addr; void* buffer_list_addr; } ;
struct device {int dummy; } ;
struct TYPE_8__ {scalar_t__ active; scalar_t__ size; } ;
struct TYPE_7__ {struct device dev; int unit_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (struct device*,void*,int,int ) ;
 scalar_t__ FUNC_2 (struct device*,void*) ;
 int FUNC_3 (int ,struct net_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (struct ibmveth_adapter*) ;
 int FUNC_9 (int ,struct net_device*) ;
 unsigned long FUNC_10 (struct ibmveth_adapter*,union ibmveth_buf_desc,int) ;
 void* FUNC_11 (int,int ) ;
 int FUNC_12 (int*,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct net_device*,char*,...) ;
 int FUNC_16 (struct net_device*,char*,...) ;
 struct ibmveth_adapter* FUNC_17 (struct net_device*) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (int ,int (*) (int ,struct net_device*),int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_20(struct net_device *VAR_10)
{
 struct ibmveth_adapter *VAR_11 = FUNC_17(VAR_10);
 u64 VAR_12 = 0;
 int VAR_13 = 1;
 unsigned long VAR_14;
 int VAR_15;
 union ibmveth_buf_desc VAR_16;
 int VAR_17;
 struct device *VAR_18;

 FUNC_15(VAR_10, "open starting\n");

 FUNC_14(&VAR_11->napi);

 for(VAR_17 = 0; VAR_17 < VAR_8; VAR_17++)
  VAR_13 += VAR_11->rx_buff_pool[VAR_17].size;

 VAR_11->buffer_list_addr = (void*) FUNC_4(VAR_3);
 VAR_11->filter_list_addr = (void*) FUNC_4(VAR_3);

 if (!VAR_11->buffer_list_addr || !VAR_11->filter_list_addr) {
  FUNC_16(VAR_10, "unable to allocate filter or buffer list "
      "pages\n");
  VAR_15 = -VAR_1;
  goto err_out;
 }

 VAR_11->rx_queue.queue_len = sizeof(struct ibmveth_rx_q_entry) *
      VAR_13;
 VAR_11->rx_queue.queue_addr = FUNC_11(VAR_11->rx_queue.queue_len,
      VAR_3);

 if (!VAR_11->rx_queue.queue_addr) {
  FUNC_16(VAR_10, "unable to allocate rx queue pages\n");
  VAR_15 = -VAR_1;
  goto err_out;
 }

 VAR_18 = &VAR_11->vdev->dev;

 VAR_11->buffer_list_dma = FUNC_1(VAR_18,
   VAR_11->buffer_list_addr, 4096, VAR_0);
 VAR_11->filter_list_dma = FUNC_1(VAR_18,
   VAR_11->filter_list_addr, 4096, VAR_0);
 VAR_11->rx_queue.queue_dma = FUNC_1(VAR_18,
   VAR_11->rx_queue.queue_addr,
   VAR_11->rx_queue.queue_len, VAR_0);

 if ((FUNC_2(VAR_18, VAR_11->buffer_list_dma)) ||
     (FUNC_2(VAR_18, VAR_11->filter_list_dma)) ||
     (FUNC_2(VAR_18, VAR_11->rx_queue.queue_dma))) {
  FUNC_16(VAR_10, "unable to map filter or buffer list "
      "pages\n");
  VAR_15 = -VAR_1;
  goto err_out;
 }

 VAR_11->rx_queue.index = 0;
 VAR_11->rx_queue.num_slots = VAR_13;
 VAR_11->rx_queue.toggle = 1;

 FUNC_12(&VAR_12, VAR_10->dev_addr, VAR_10->addr_len);
 VAR_12 = VAR_12 >> 16;

 VAR_16.fields.flags_len = VAR_7 |
     VAR_11->rx_queue.queue_len;
 VAR_16.fields.address = VAR_11->rx_queue.queue_dma;

 FUNC_15(VAR_10, "buffer list @ 0x%p\n", VAR_11->buffer_list_addr);
 FUNC_15(VAR_10, "filter list @ 0x%p\n", VAR_11->filter_list_addr);
 FUNC_15(VAR_10, "receive q   @ 0x%p\n", VAR_11->rx_queue.queue_addr);

 FUNC_6(VAR_11->vdev->unit_address, VAR_9);

 VAR_14 = FUNC_10(VAR_11, VAR_16, VAR_12);

 if (VAR_14 != VAR_5) {
  FUNC_16(VAR_10, "h_register_logical_lan failed with %ld\n",
      VAR_14);
  FUNC_16(VAR_10, "buffer TCE:0x%llx filter TCE:0x%llx rxq "
      "desc:0x%llx MAC:0x%llx\n",
         VAR_11->buffer_list_dma,
         VAR_11->filter_list_dma,
         VAR_16.desc,
         VAR_12);
  VAR_15 = -VAR_2;
  goto err_out;
 }

 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
  if (!VAR_11->rx_buff_pool[VAR_17].active)
   continue;
  if (FUNC_7(&VAR_11->rx_buff_pool[VAR_17])) {
   FUNC_16(VAR_10, "unable to alloc pool\n");
   VAR_11->rx_buff_pool[VAR_17].active = 0;
   VAR_15 = -VAR_1;
   goto err_out;
  }
 }

 FUNC_15(VAR_10, "registering irq 0x%x\n", VAR_10->irq);
 VAR_15 = FUNC_19(VAR_10->irq, FUNC_9, 0, VAR_10->name,
    VAR_10);
 if (VAR_15 != 0) {
  FUNC_16(VAR_10, "unable to request irq 0x%x, rc %d\n",
      VAR_10->irq, VAR_15);
  do {
   VAR_15 = FUNC_5(VAR_11->vdev->unit_address);
  } while (FUNC_0(VAR_15) || (VAR_15 == VAR_4));

  goto err_out;
 }

 VAR_11->bounce_buffer =
     FUNC_11(VAR_10->mtu + VAR_6, VAR_3);
 if (!VAR_11->bounce_buffer) {
  FUNC_16(VAR_10, "unable to allocate bounce buffer\n");
  VAR_15 = -VAR_1;
  goto err_out_free_irq;
 }
 VAR_11->bounce_buffer_dma =
     FUNC_1(&VAR_11->vdev->dev, VAR_11->bounce_buffer,
      VAR_10->mtu + VAR_6, VAR_0);
 if (FUNC_2(VAR_18, VAR_11->bounce_buffer_dma)) {
  FUNC_16(VAR_10, "unable to map bounce buffer\n");
  VAR_15 = -VAR_1;
  goto err_out_free_irq;
 }

 FUNC_15(VAR_10, "initial replenish cycle\n");
 FUNC_9(VAR_10->irq, VAR_10);

 FUNC_18(VAR_10);

 FUNC_15(VAR_10, "open complete\n");

 return 0;

err_out_free_irq:
 FUNC_3(VAR_10->irq, VAR_10);
err_out:
 FUNC_8(VAR_11);
 FUNC_13(&VAR_11->napi);
 return VAR_15;
}
