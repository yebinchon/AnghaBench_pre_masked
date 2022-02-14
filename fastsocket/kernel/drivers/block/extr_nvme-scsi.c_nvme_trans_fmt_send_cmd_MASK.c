
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {size_t ns_id; int mode_select_block_len; scalar_t__ mode_select_num_blocks; struct nvme_dev* dev; } ;
struct nvme_id_ns {int flbas; size_t nlbaf; int ncap; TYPE_1__* lbaf; } ;
struct nvme_dev {TYPE_3__* pci_dev; } ;
struct TYPE_5__ {void* cdw10; void* nsid; int opcode; } ;
struct nvme_command {TYPE_2__ format; } ;
typedef int dma_addr_t ;
typedef int c ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (size_t) ;
 void* FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int *,int,void*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct nvme_command*,int ,int) ;
 int VAR_7 ;
 int FUNC_5 (struct nvme_dev*,size_t,int ,int ) ;
 int FUNC_6 (struct nvme_dev*,struct nvme_command*,int *) ;
 int FUNC_7 (struct sg_io_hdr*,int ,int ,int ,int ) ;
 int FUNC_8 (struct sg_io_hdr*,int) ;

__attribute__((used)) static int FUNC_9(struct nvme_ns *VAR_8, struct sg_io_hdr *VAR_9,
       u8 VAR_10)
{
 int VAR_11 = VAR_6;
 int VAR_12;
 struct nvme_dev *VAR_13 = VAR_8->dev;
 dma_addr_t VAR_14;
 void *VAR_15;
 struct nvme_id_ns *VAR_16;
 u8 VAR_17;
 u8 VAR_18, VAR_19;
 u8 VAR_20 = 0xFF;
 u32 VAR_21 = 0;
 struct nvme_command VAR_22;


 VAR_15 = FUNC_1(&VAR_13->pci_dev->dev, sizeof(struct nvme_id_ns),
       &VAR_14, VAR_1);
 if (VAR_15 == ((void*)0)) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_5(VAR_13, VAR_8->ns_id, 0, VAR_14);
 VAR_11 = FUNC_8(VAR_9, VAR_12);
 if (VAR_11)
  goto out_dma;
 if (VAR_12) {
  VAR_11 = VAR_12;
  goto out_dma;
 }
 VAR_16 = VAR_15;
 VAR_18 = (VAR_16->flbas) & 0x0F;
 VAR_19 = VAR_16->nlbaf;

 for (VAR_17 = 0; VAR_17 < VAR_19; VAR_17++) {
  if (VAR_8->mode_select_block_len == (1 << (VAR_16->lbaf[VAR_17].ds))) {
   VAR_20 = VAR_17;
   break;
  }
 }
 if (VAR_20 > 0x0F) {
  VAR_11 = FUNC_7(VAR_9, VAR_3,
    VAR_2, VAR_5,
    VAR_4);
 }
 if (VAR_8->mode_select_num_blocks != FUNC_3(VAR_16->ncap)) {
  VAR_11 = FUNC_7(VAR_9, VAR_3,
    VAR_2, VAR_5,
    VAR_4);
 }

 VAR_21 |= VAR_10 << 5;
 VAR_21 |= VAR_20 & 0x0F;
 FUNC_4(&VAR_22, 0, sizeof(VAR_22));
 VAR_22.format.opcode = VAR_7;
 VAR_22.format.nsid = FUNC_0(VAR_8->ns_id);
 VAR_22.format.cdw10 = FUNC_0(VAR_21);

 VAR_12 = FUNC_6(VAR_13, &VAR_22, ((void*)0));
 VAR_11 = FUNC_8(VAR_9, VAR_12);
 if (VAR_11)
  goto out_dma;
 if (VAR_12)
  VAR_11 = VAR_12;

 out_dma:
 FUNC_2(&VAR_13->pci_dev->dev, sizeof(struct nvme_id_ns), VAR_15,
     VAR_14);
 out:
 return VAR_11;
}
