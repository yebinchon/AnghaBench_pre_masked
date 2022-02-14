
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ib_sge {int lkey; int length; int addr; } ;
struct iser_rx_desc {int dma_addr; struct ib_sge rx_sg; } ;
struct iser_device {int ib_device; TYPE_1__* mr; } ;
struct iser_conn {struct iser_rx_desc* rx_descs; scalar_t__ rx_desc_head; struct iser_device* device; } ;
struct TYPE_2__ {int lkey; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,void*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct iser_rx_desc*) ;
 struct iser_rx_desc* FUNC_5 (int,int ) ;

int FUNC_6(struct iser_conn *VAR_5)
{
 int VAR_6, VAR_7;
 u64 VAR_8;
 struct iser_rx_desc *VAR_9;
 struct ib_sge *VAR_10;
 struct iser_device *VAR_11 = VAR_5->device;

 VAR_5->rx_descs = FUNC_5(VAR_3 *
    sizeof(struct iser_rx_desc), VAR_2);
 if (!VAR_5->rx_descs)
  goto rx_desc_alloc_fail;

 VAR_9 = VAR_5->rx_descs;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++, VAR_9++) {
  VAR_8 = FUNC_0(VAR_11->ib_device, (void *)VAR_9,
     VAR_4, VAR_0);
  if (FUNC_1(VAR_11->ib_device, VAR_8))
   goto rx_desc_dma_map_failed;

  VAR_9->dma_addr = VAR_8;

  VAR_10 = &VAR_9->rx_sg;
  VAR_10->addr = VAR_9->dma_addr;
  VAR_10->length = VAR_4;
  VAR_10->lkey = VAR_11->mr->lkey;
 }

 VAR_5->rx_desc_head = 0;
 return 0;

rx_desc_dma_map_failed:
 VAR_9 = VAR_5->rx_descs;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++, VAR_9++)
  FUNC_2(VAR_11->ib_device, VAR_9->dma_addr,
   VAR_4, VAR_0);
 FUNC_4(VAR_5->rx_descs);
 VAR_5->rx_descs = ((void*)0);
rx_desc_alloc_fail:
 FUNC_3("failed allocating rx descriptors / data buffers\n");
 return -VAR_1;
}
