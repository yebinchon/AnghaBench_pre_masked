
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int queue_len; int * queue_addr; void* queue_dma; } ;
struct ibmveth_adapter {int * bounce_buffer; void* bounce_buffer_dma; TYPE_3__* netdev; TYPE_2__* vdev; TYPE_4__* rx_buff_pool; TYPE_1__ rx_queue; int * filter_list_addr; void* filter_list_dma; int * buffer_list_addr; void* buffer_list_dma; } ;
struct device {int dummy; } ;
struct TYPE_8__ {scalar_t__ active; } ;
struct TYPE_7__ {int mtu; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,void*) ;
 int FUNC_1 (struct device*,void*,int,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct ibmveth_adapter*,TYPE_4__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ibmveth_adapter *VAR_4)
{
 int VAR_5;
 struct device *VAR_6 = &VAR_4->vdev->dev;

 if (VAR_4->buffer_list_addr != ((void*)0)) {
  if (!FUNC_0(VAR_6, VAR_4->buffer_list_dma)) {
   FUNC_1(VAR_6, VAR_4->buffer_list_dma, 4096,
     VAR_0);
   VAR_4->buffer_list_dma = VAR_1;
  }
  FUNC_2((unsigned long)VAR_4->buffer_list_addr);
  VAR_4->buffer_list_addr = ((void*)0);
 }

 if (VAR_4->filter_list_addr != ((void*)0)) {
  if (!FUNC_0(VAR_6, VAR_4->filter_list_dma)) {
   FUNC_1(VAR_6, VAR_4->filter_list_dma, 4096,
     VAR_0);
   VAR_4->filter_list_dma = VAR_1;
  }
  FUNC_2((unsigned long)VAR_4->filter_list_addr);
  VAR_4->filter_list_addr = ((void*)0);
 }

 if (VAR_4->rx_queue.queue_addr != ((void*)0)) {
  if (!FUNC_0(VAR_6, VAR_4->rx_queue.queue_dma)) {
   FUNC_1(VAR_6,
     VAR_4->rx_queue.queue_dma,
     VAR_4->rx_queue.queue_len,
     VAR_0);
   VAR_4->rx_queue.queue_dma = VAR_1;
  }
  FUNC_4(VAR_4->rx_queue.queue_addr);
  VAR_4->rx_queue.queue_addr = ((void*)0);
 }

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  if (VAR_4->rx_buff_pool[VAR_5].active)
   FUNC_3(VAR_4,
       &VAR_4->rx_buff_pool[VAR_5]);

 if (VAR_4->bounce_buffer != ((void*)0)) {
  if (!FUNC_0(VAR_6, VAR_4->bounce_buffer_dma)) {
   FUNC_1(&VAR_4->vdev->dev,
     VAR_4->bounce_buffer_dma,
     VAR_4->netdev->mtu + VAR_2,
     VAR_0);
   VAR_4->bounce_buffer_dma = VAR_1;
  }
  FUNC_4(VAR_4->bounce_buffer);
  VAR_4->bounce_buffer = ((void*)0);
 }
}
