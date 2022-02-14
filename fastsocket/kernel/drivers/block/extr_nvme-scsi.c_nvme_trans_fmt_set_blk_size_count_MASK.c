
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int mode_select_block_len; int mode_select_num_blocks; int ns_id; struct nvme_dev* dev; } ;
struct nvme_id_ns {int flbas; TYPE_1__* lbaf; int ncap; } ;
struct nvme_dev {TYPE_2__* pci_dev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int *,int,void*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nvme_dev*,int ,int ,int ) ;
 int FUNC_4 (struct sg_io_hdr*,int) ;

__attribute__((used)) static int FUNC_5(struct nvme_ns *VAR_3,
          struct sg_io_hdr *VAR_4)
{
 int VAR_5 = VAR_2;
 int VAR_6;
 struct nvme_dev *VAR_7 = VAR_3->dev;
 dma_addr_t VAR_8;
 void *VAR_9;
 struct nvme_id_ns *VAR_10;
 u8 VAR_11;
 if (VAR_3->mode_select_num_blocks == 0 || VAR_3->mode_select_block_len == 0) {
  VAR_9 = FUNC_0(&VAR_7->pci_dev->dev,
   sizeof(struct nvme_id_ns), &VAR_8, VAR_1);
  if (VAR_9 == ((void*)0)) {
   VAR_5 = -VAR_0;
   goto out;
  }

  VAR_6 = FUNC_3(VAR_7, VAR_3->ns_id, 0, VAR_8);
  VAR_5 = FUNC_4(VAR_4, VAR_6);
  if (VAR_5)
   goto out_dma;
  if (VAR_6) {
   VAR_5 = VAR_6;
   goto out_dma;
  }
  VAR_10 = VAR_9;

  if (VAR_3->mode_select_num_blocks == 0)
   VAR_3->mode_select_num_blocks = FUNC_2(VAR_10->ncap);
  if (VAR_3->mode_select_block_len == 0) {
   VAR_11 = (VAR_10->flbas) & 0x0F;
   VAR_3->mode_select_block_len =
      (1 << (VAR_10->lbaf[VAR_11].ds));
  }
 out_dma:
  FUNC_1(&VAR_7->pci_dev->dev, sizeof(struct nvme_id_ns),
      VAR_9, VAR_8);
 }
 out:
 return VAR_5;
}
