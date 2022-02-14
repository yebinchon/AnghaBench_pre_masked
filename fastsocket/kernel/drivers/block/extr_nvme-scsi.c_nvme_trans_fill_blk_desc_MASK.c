
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int ns_id; struct nvme_dev* dev; } ;
struct nvme_id_ns {int flbas; int ncap; TYPE_1__* lbaf; } ;
struct nvme_dev {TYPE_2__* pci_dev; } ;
typedef int dma_addr_t ;
typedef int __be64 ;
typedef int __be32 ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (int *,int,void*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__*,int *,int) ;
 int FUNC_6 (struct nvme_dev*,int ,int ,int ) ;
 int FUNC_7 (struct sg_io_hdr*,int) ;

__attribute__((used)) static int FUNC_8(struct nvme_ns *VAR_6, struct sg_io_hdr *VAR_7,
        u8 *VAR_8, int VAR_9, u8 VAR_10)
{
 int VAR_11 = VAR_5;
 int VAR_12;
 struct nvme_dev *VAR_13 = VAR_6->dev;
 dma_addr_t VAR_14;
 void *VAR_15;
 struct nvme_id_ns *VAR_16;
 u8 VAR_17;
 u32 VAR_18;

 if (VAR_10 == 0 && VAR_9 < VAR_2)
  return VAR_4;
 else if (VAR_10 > 0 && VAR_9 < VAR_3)
  return VAR_4;

 VAR_15 = FUNC_2(&VAR_13->pci_dev->dev, sizeof(struct nvme_id_ns),
       &VAR_14, VAR_1);
 if (VAR_15 == ((void*)0)) {
  VAR_11 = -VAR_0;
  goto out;
 }


 VAR_12 = FUNC_6(VAR_13, VAR_6->ns_id, 0, VAR_14);
 VAR_11 = FUNC_7(VAR_7, VAR_12);
 if (VAR_11)
  goto out_dma;
 if (VAR_12) {
  VAR_11 = VAR_12;
  goto out_dma;
 }
 VAR_16 = VAR_15;
 VAR_17 = (VAR_16->flbas) & 0x0F;
 VAR_18 = (1 << (VAR_16->lbaf[VAR_17].ds));

 if (VAR_10 == 0) {
  __be32 VAR_19 = FUNC_0(FUNC_4(VAR_16->ncap));

  __be32 VAR_20 = FUNC_0(VAR_18 & 0x00FFFFFF);

  FUNC_5(VAR_8, &VAR_19, sizeof(u32));
  FUNC_5(&VAR_8[4], &VAR_20, sizeof(u32));
 } else {
  __be64 VAR_21 = FUNC_1(FUNC_4(VAR_16->ncap));
  __be32 VAR_22 = FUNC_0(VAR_18);

  FUNC_5(VAR_8, &VAR_21, sizeof(u64));

  FUNC_5(&VAR_8[12], &VAR_22, sizeof(u32));
 }

 out_dma:
 FUNC_3(&VAR_13->pci_dev->dev, sizeof(struct nvme_id_ns), VAR_15,
     VAR_14);
 out:
 return VAR_11;
}
