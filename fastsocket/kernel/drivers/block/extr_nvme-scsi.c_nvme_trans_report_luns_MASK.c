
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {struct nvme_dev* dev; } ;
struct nvme_id_ctrl {int nn; } ;
struct nvme_dev {TYPE_1__* pci_dev; } ;
typedef int dma_addr_t ;
typedef int __be64 ;
typedef int __be32 ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 void* FUNC_4 (int *,int,int *,int ) ;
 int FUNC_5 (int *,int,void*,int ) ;
 int FUNC_6 (scalar_t__*) ;
 scalar_t__* FUNC_7 (scalar_t__,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__*,int *,int) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (struct nvme_dev*,int ,int,int ) ;
 int FUNC_12 (struct sg_io_hdr*,int ,int ,int ,int ) ;
 int FUNC_13 (struct sg_io_hdr*,scalar_t__*,scalar_t__) ;
 int FUNC_14 (struct sg_io_hdr*,int) ;

__attribute__((used)) static int FUNC_15(struct nvme_ns *VAR_14, struct sg_io_hdr *VAR_15,
       u8 *VAR_16)
{
 int VAR_17 = VAR_13;
 int VAR_18;
 u32 VAR_19, VAR_20, VAR_21;
 u8 VAR_22;
 u8 *VAR_23;
 struct nvme_dev *VAR_24 = VAR_14->dev;
 dma_addr_t VAR_25;
 void *VAR_26;
 struct nvme_id_ctrl *VAR_27;
 u32 VAR_28, VAR_29;
 u8 VAR_30 = VAR_7;
 __be32 VAR_31;

 VAR_19 = FUNC_0(VAR_16);
 VAR_22 = FUNC_1(VAR_16, VAR_8);

 if ((VAR_22 != VAR_0) &&
     (VAR_22 != VAR_1) &&
     (VAR_22 != VAR_9)) {
  VAR_17 = FUNC_12(VAR_15, VAR_10,
     VAR_4, VAR_12,
     VAR_11);
  goto out;
 } else {

  VAR_26 = FUNC_4(&VAR_24->pci_dev->dev,
     sizeof(struct nvme_id_ctrl),
     &VAR_25, VAR_3);
  if (VAR_26 == ((void*)0)) {
   VAR_17 = -VAR_2;
   goto out;
  }
  VAR_18 = FUNC_11(VAR_24, 0, 1, VAR_25);
  VAR_17 = FUNC_14(VAR_15, VAR_18);
  if (VAR_17)
   goto out_dma;
  if (VAR_18) {
   VAR_17 = VAR_18;
   goto out_dma;
  }
  VAR_27 = VAR_26;
  VAR_28 = FUNC_8(VAR_27->nn) * VAR_6;
  VAR_21 = VAR_28 + VAR_5;

  if (VAR_19 < VAR_21) {
   VAR_17 = FUNC_12(VAR_15,
     VAR_10,
     VAR_4, VAR_12,
     VAR_11);
   goto out_dma;
  }

  VAR_23 = FUNC_7(VAR_21, VAR_3);
  if (VAR_23 == ((void*)0)) {
   VAR_17 = -VAR_2;
   goto out_dma;
  }


  for (VAR_29 = 0; VAR_29 < FUNC_8(VAR_27->nn); VAR_29++) {




   __be64 VAR_32 = FUNC_3(VAR_29);
   FUNC_9(&VAR_23[VAR_30], &VAR_32, sizeof(u64));
   VAR_30 += VAR_6;
  }
  VAR_31 = FUNC_2(VAR_28);
  FUNC_9(VAR_23, &VAR_31, sizeof(u32));
 }

 VAR_20 = FUNC_10(VAR_19, VAR_21);
 VAR_17 = FUNC_13(VAR_15, VAR_23, VAR_20);

 FUNC_6(VAR_23);
 out_dma:
 FUNC_5(&VAR_24->pci_dev->dev, sizeof(struct nvme_id_ctrl), VAR_26,
     VAR_25);
 out:
 return VAR_17;
}
