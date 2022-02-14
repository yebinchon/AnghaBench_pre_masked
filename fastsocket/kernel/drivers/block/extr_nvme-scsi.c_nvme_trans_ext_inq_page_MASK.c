
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int ns_id; struct nvme_dev* dev; } ;
struct nvme_id_ns {int dpc; scalar_t__ dps; } ;
struct nvme_id_ctrl {int vwc; } ;
struct nvme_dev {TYPE_1__* pci_dev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (int *,int,void*,int ) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (int ,int ) ;
 int FUNC_4 (int*,int ,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct nvme_dev*,int ,int,int ) ;
 int FUNC_7 (struct sg_io_hdr*,int*,int) ;
 int FUNC_8 (struct sg_io_hdr*,int) ;

__attribute__((used)) static int FUNC_9(struct nvme_ns *VAR_5, struct sg_io_hdr *VAR_6,
     int VAR_7)
{
 u8 *VAR_8;
 int VAR_9 = VAR_4;
 int VAR_10;
 struct nvme_dev *VAR_11 = VAR_5->dev;
 dma_addr_t VAR_12;
 void *VAR_13;
 struct nvme_id_ctrl *VAR_14;
 struct nvme_id_ns *VAR_15;
 int VAR_16;
 u8 VAR_17 = 0x80;
 u8 VAR_18;
 u8 VAR_19[8] = {0, 0, 2, 1, 4, 6, 5, 7};
 u8 VAR_20, VAR_21, VAR_22, VAR_23;
 u8 VAR_24 = 0x20;
 u8 VAR_25;
 u8 VAR_26 = 0x01;

 VAR_8 = FUNC_3(VAR_1, VAR_2);
 if (VAR_8 == ((void*)0)) {
  VAR_9 = -VAR_0;
  goto out_mem;
 }

 VAR_13 = FUNC_0(&VAR_11->pci_dev->dev, sizeof(struct nvme_id_ns),
       &VAR_12, VAR_2);
 if (VAR_13 == ((void*)0)) {
  VAR_9 = -VAR_0;
  goto out_dma;
 }


 VAR_10 = FUNC_6(VAR_11, VAR_5->ns_id, 0, VAR_12);
 VAR_9 = FUNC_8(VAR_6, VAR_10);
 if (VAR_9)
  goto out_free;
 if (VAR_10) {
  VAR_9 = VAR_10;
  goto out_free;
 }
 VAR_15 = VAR_13;
 VAR_18 = VAR_19[(VAR_15->dpc) & 0x07] << 3;
 (VAR_15->dps) ? (VAR_23 = 0x01) : (VAR_23 = 0);
 VAR_20 = VAR_23 << 2;
 VAR_21 = VAR_23 << 1;
 VAR_22 = VAR_23;


 VAR_10 = FUNC_6(VAR_11, 0, 1, VAR_12);
 VAR_9 = FUNC_8(VAR_6, VAR_10);
 if (VAR_9)
  goto out_free;
 if (VAR_10) {
  VAR_9 = VAR_10;
  goto out_free;
 }
 VAR_14 = VAR_13;
 VAR_25 = VAR_14->vwc;

 FUNC_4(VAR_8, 0, VAR_1);
 VAR_8[1] = VAR_3;
 VAR_8[2] = 0x00;
 VAR_8[3] = 0x3C;
 VAR_8[4] = VAR_17 | VAR_18 | VAR_20 | VAR_21 | VAR_22;
 VAR_8[5] = VAR_24;
 VAR_8[6] = VAR_25;
 VAR_8[7] = VAR_26;
 VAR_8[8] = 0;
 VAR_8[9] = 0;

 VAR_16 = FUNC_5(VAR_7, VAR_1);
 VAR_9 = FUNC_7(VAR_6, VAR_8, VAR_16);

 out_free:
 FUNC_1(&VAR_11->pci_dev->dev, sizeof(struct nvme_id_ns), VAR_13,
     VAR_12);
 out_dma:
 FUNC_2(VAR_8);
 out_mem:
 return VAR_9;
}
