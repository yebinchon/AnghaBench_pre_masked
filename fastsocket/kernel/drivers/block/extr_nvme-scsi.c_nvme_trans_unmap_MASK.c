
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sg_io_hdr {int dummy; } ;
struct scsi_unmap_parm_list {TYPE_1__* desc; int unmap_blk_desc_data_len; } ;
struct nvme_queue {int dummy; } ;
struct nvme_ns {int ns_id; struct nvme_dev* dev; } ;
struct nvme_dsm_range {scalar_t__ cattr; void* slba; void* nlb; } ;
struct nvme_dev {TYPE_3__* pci_dev; } ;
struct TYPE_5__ {void* attributes; void* nr; void* prp1; void* nsid; int opcode; } ;
struct nvme_command {TYPE_2__ dsm; } ;
typedef int dma_addr_t ;
typedef int c ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int slba; int nlb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int ) ;
 struct nvme_dsm_range* FUNC_6 (int *,int,int *,int ) ;
 int FUNC_7 (int *,int,struct nvme_dsm_range*,int ) ;
 struct nvme_queue* FUNC_8 (struct nvme_dev*) ;
 int FUNC_9 (struct scsi_unmap_parm_list*) ;
 struct scsi_unmap_parm_list* FUNC_10 (int,int ) ;
 int FUNC_11 (struct nvme_command*,int ,int) ;
 int VAR_7 ;
 int FUNC_12 (struct nvme_queue*,struct nvme_command*,int *,int ) ;
 int FUNC_13 (struct sg_io_hdr*,struct scsi_unmap_parm_list*,int) ;
 int FUNC_14 (struct sg_io_hdr*,int) ;
 int FUNC_15 (struct nvme_queue*) ;

__attribute__((used)) static int FUNC_16(struct nvme_ns *VAR_8, struct sg_io_hdr *VAR_9,
       u8 *VAR_10)
{
 struct nvme_dev *VAR_11 = VAR_8->dev;
 struct scsi_unmap_parm_list *VAR_12;
 struct nvme_dsm_range *VAR_13;
 struct nvme_queue *VAR_14;
 struct nvme_command VAR_15;
 int VAR_16, VAR_17, VAR_18 = -VAR_1;
 u16 VAR_19, VAR_20;
 dma_addr_t VAR_21;

 VAR_20 = FUNC_0(VAR_10, VAR_6);
 if (!VAR_20)
  return -VAR_0;

 VAR_12 = FUNC_10(VAR_20, VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_18 = FUNC_13(VAR_9, VAR_12, VAR_20);
 if (VAR_18 != VAR_5)
  goto out;

 VAR_19 = FUNC_1(VAR_12->unmap_blk_desc_data_len) >> 4;
 if (!VAR_19 || VAR_19 > 256) {
  VAR_18 = -VAR_0;
  goto out;
 }

 VAR_13 = FUNC_6(&VAR_11->pci_dev->dev, VAR_19 * sizeof(*VAR_13),
       &VAR_21, VAR_2);
 if (!VAR_13)
  goto out;

 for (VAR_16 = 0; VAR_16 < VAR_19; VAR_16++) {
  VAR_13[VAR_16].nlb = FUNC_4(FUNC_2(VAR_12->desc[VAR_16].nlb));
  VAR_13[VAR_16].slba = FUNC_5(FUNC_3(VAR_12->desc[VAR_16].slba));
  VAR_13[VAR_16].cattr = 0;
 }

 FUNC_11(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.dsm.opcode = VAR_7;
 VAR_15.dsm.nsid = FUNC_4(VAR_8->ns_id);
 VAR_15.dsm.prp1 = FUNC_5(VAR_21);
 VAR_15.dsm.nr = FUNC_4(VAR_19 - 1);
 VAR_15.dsm.attributes = FUNC_4(VAR_3);

 VAR_14 = FUNC_8(VAR_11);
 FUNC_15(VAR_14);

 VAR_17 = FUNC_12(VAR_14, &VAR_15, ((void*)0), VAR_4);
 VAR_18 = FUNC_14(VAR_9, VAR_17);

 FUNC_7(&VAR_11->pci_dev->dev, VAR_19 * sizeof(*VAR_13),
       VAR_13, VAR_21);
 out:
 FUNC_9(VAR_12);
 return VAR_18;
}
