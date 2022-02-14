
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int ns_id; struct nvme_dev* dev; } ;
struct nvme_id_ns {scalar_t__ dps; } ;
struct nvme_dev {char* model; char* firmware_rev; TYPE_1__* pci_dev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int *,int,void*,int ) ;
 int FUNC_2 (int*,int ,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (struct nvme_dev*,int ,int ,int ) ;
 int FUNC_5 (struct sg_io_hdr*,int*,int) ;
 int FUNC_6 (struct sg_io_hdr*,int) ;
 int FUNC_7 (int*,char*,int) ;

__attribute__((used)) static int FUNC_8(struct nvme_ns *VAR_6,
     struct sg_io_hdr *VAR_7, u8 *VAR_8,
     int VAR_9)
{
 struct nvme_dev *VAR_10 = VAR_6->dev;
 dma_addr_t VAR_11;
 void *VAR_12;
 struct nvme_id_ns *VAR_13;
 int VAR_14 = VAR_3;
 int VAR_15;
 int VAR_16;
 u8 VAR_17 = 0x02;
 u8 VAR_18;
 u8 VAR_19 = 0x01 << 1;

 VAR_12 = FUNC_0(&VAR_10->pci_dev->dev, sizeof(struct nvme_id_ns),
    &VAR_11, VAR_2);
 if (VAR_12 == ((void*)0)) {
  VAR_14 = -VAR_1;
  goto out_dma;
 }


 VAR_15 = FUNC_4(VAR_10, VAR_6->ns_id, 0, VAR_11);
 VAR_14 = FUNC_6(VAR_7, VAR_15);







 if (VAR_14)
  goto out_free;
 if (VAR_15) {
  VAR_14 = VAR_15;
  goto out_free;
 }
 VAR_13 = VAR_12;
 (VAR_13->dps) ? (VAR_18 = 0x01) : (VAR_18 = 0);

 FUNC_2(VAR_8, 0, VAR_4);
 VAR_8[2] = VAR_5;
 VAR_8[3] = VAR_17;
 VAR_8[4] = VAR_0;
 VAR_8[5] = VAR_18;
 VAR_8[7] = VAR_19;
 FUNC_7(&VAR_8[8], "NVMe    ", 8);
 FUNC_7(&VAR_8[16], VAR_10->model, 16);
 FUNC_7(&VAR_8[32], VAR_10->firmware_rev, 4);

 VAR_16 = FUNC_3(VAR_9, VAR_4);
 VAR_14 = FUNC_5(VAR_7, VAR_8, VAR_16);

 out_free:
 FUNC_1(&VAR_10->pci_dev->dev, sizeof(struct nvme_id_ns), VAR_12,
     VAR_11);
 out_dma:
 return VAR_14;
}
