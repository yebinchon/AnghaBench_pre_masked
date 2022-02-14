
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {struct nvme_dev* dev; } ;
struct nvme_id_ctrl {int npss; } ;
struct nvme_dev {TYPE_1__* pci_dev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int *,int,void*,int ) ;
 unsigned int FUNC_2 (int ,int) ;
 unsigned int FUNC_3 (int ,int) ;
 int FUNC_4 (struct nvme_dev*,int ,int,int ) ;
 int FUNC_5 (struct nvme_dev*,int ,unsigned int,int ,int *) ;
 int FUNC_6 (struct sg_io_hdr*,int ,int ,int ,int ) ;
 int FUNC_7 (struct sg_io_hdr*,int) ;

__attribute__((used)) static int FUNC_8(struct nvme_ns *VAR_12, struct sg_io_hdr *VAR_13,
      u8 VAR_14, u8 VAR_15, u8 VAR_16)
{
 int VAR_17 = VAR_11;
 int VAR_18;
 struct nvme_dev *VAR_19 = VAR_12->dev;
 dma_addr_t VAR_20;
 void *VAR_21;
 struct nvme_id_ctrl *VAR_22;
 int VAR_23;
 unsigned VAR_24 = 0;


 VAR_21 = FUNC_0(&VAR_19->pci_dev->dev,
    sizeof(struct nvme_id_ctrl),
    &VAR_20, VAR_1);
 if (VAR_21 == ((void*)0)) {
  VAR_17 = -VAR_0;
  goto out;
 }
 VAR_18 = FUNC_4(VAR_19, 0, 1, VAR_20);
 VAR_17 = FUNC_7(VAR_13, VAR_18);
 if (VAR_17)
  goto out_dma;
 if (VAR_18) {
  VAR_17 = VAR_18;
  goto out_dma;
 }
 VAR_22 = VAR_21;
 VAR_23 = VAR_22->npss - 1;

 switch (VAR_14) {
 case 128:

  if (VAR_15 == 0 && VAR_16 == 0x1)
   VAR_24 = VAR_4;
  if (VAR_15 == 0 && VAR_16 == 0x0)
   VAR_24 = VAR_23;
  break;
 case 132:

  if (VAR_15 == 0)
   VAR_24 = VAR_4;
  break;
 case 131:


  if (VAR_15 == 0x0)
   VAR_24 = FUNC_3(VAR_5, (VAR_23 - 1));
  else if (VAR_15 == 0x1)
   VAR_24 = FUNC_3(VAR_6, (VAR_23 - 1));
  else if (VAR_15 == 0x2)
   VAR_24 = FUNC_3(VAR_7, (VAR_23 - 1));
  break;
 case 129:

  if (VAR_15 == 0x0)
   VAR_24 = FUNC_2(0, (VAR_23 - 2));
  else if (VAR_15 == 0x1)
   VAR_24 = FUNC_2(0, (VAR_23 - 1));
  break;
 case 130:
 default:
  VAR_17 = FUNC_6(VAR_13, VAR_8,
    VAR_2, VAR_10,
    VAR_9);
  break;
 }
 VAR_18 = FUNC_5(VAR_19, VAR_3, VAR_24, 0,
        ((void*)0));
 VAR_17 = FUNC_7(VAR_13, VAR_18);
 if (VAR_17)
  goto out_dma;
 if (VAR_18)
  VAR_17 = VAR_18;
 out_dma:
 FUNC_1(&VAR_19->pci_dev->dev, sizeof(struct nvme_id_ctrl), VAR_21,
     VAR_20);
 out:
 return VAR_17;
}
