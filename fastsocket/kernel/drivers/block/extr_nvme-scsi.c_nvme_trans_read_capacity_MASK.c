
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int ns_id; struct nvme_dev* dev; } ;
struct nvme_id_ns {int dummy; } ;
struct nvme_dev {TYPE_1__* pci_dev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (int *,int,void*,int ) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct nvme_dev*,int ,int ,int ) ;
 int FUNC_8 (struct sg_io_hdr*,scalar_t__*,int ) ;
 int FUNC_9 (scalar_t__*,struct nvme_id_ns*,scalar_t__) ;
 int FUNC_10 (struct sg_io_hdr*,int) ;

__attribute__((used)) static int FUNC_11(struct nvme_ns *VAR_5, struct sg_io_hdr *VAR_6,
       u8 *VAR_7)
{
 int VAR_8 = VAR_4;
 int VAR_9;
 u32 VAR_10 = VAR_2;
 u32 VAR_11 = VAR_2;
 u32 VAR_12;
 u8 VAR_13;
 struct nvme_dev *VAR_14 = VAR_5->dev;
 dma_addr_t VAR_15;
 void *VAR_16;
 struct nvme_id_ns *VAR_17;
 u8 *VAR_18;

 VAR_13 = FUNC_1(VAR_7);
 if (VAR_13) {
  VAR_10 = FUNC_0(VAR_7);
  VAR_11 = VAR_3;
 }

 VAR_16 = FUNC_2(&VAR_14->pci_dev->dev, sizeof(struct nvme_id_ns),
       &VAR_15, VAR_1);
 if (VAR_16 == ((void*)0)) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_7(VAR_14, VAR_5->ns_id, 0, VAR_15);
 VAR_8 = FUNC_10(VAR_6, VAR_9);
 if (VAR_8)
  goto out_dma;
 if (VAR_9) {
  VAR_8 = VAR_9;
  goto out_dma;
 }
 VAR_17 = VAR_16;

 VAR_18 = FUNC_5(VAR_11, VAR_1);
 if (VAR_18 == ((void*)0)) {
  VAR_8 = -VAR_0;
  goto out_dma;
 }
 FUNC_9(VAR_18, VAR_17, VAR_13);

 VAR_12 = FUNC_6(VAR_10, VAR_11);
 VAR_8 = FUNC_8(VAR_6, VAR_18, VAR_12);

 FUNC_4(VAR_18);
 out_dma:
 FUNC_3(&VAR_14->pci_dev->dev, sizeof(struct nvme_id_ns), VAR_16,
     VAR_15);
 out:
 return VAR_8;
}
