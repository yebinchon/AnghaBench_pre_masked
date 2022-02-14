
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int ns_id; struct nvme_dev* dev; } ;
struct nvme_id_ns {int dummy; } ;
struct nvme_id_ctrl {int* ieee; } ;
struct nvme_dev {int* serial; int* model; TYPE_1__* pci_dev; } ;
typedef int dma_addr_t ;
typedef int __be32 ;
struct TYPE_2__ {int vendor; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int *,int,void*,int ) ;
 int FUNC_3 (int*,int *,int) ;
 int FUNC_4 (int*,int ,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct nvme_dev*,int ,int,int ) ;
 int FUNC_7 (struct sg_io_hdr*,int*,int) ;
 int FUNC_8 (struct sg_io_hdr*,int) ;

__attribute__((used)) static int FUNC_9(struct nvme_ns *VAR_5, struct sg_io_hdr *VAR_6,
     u8 *VAR_7, int VAR_8)
{
 struct nvme_dev *VAR_9 = VAR_5->dev;
 dma_addr_t VAR_10;
 void *VAR_11;
 struct nvme_id_ctrl *VAR_12;
 int VAR_13 = VAR_3;
 int VAR_14;
 u8 VAR_15[4];
 int VAR_16;
 __be32 VAR_17 = FUNC_0(VAR_5->ns_id);

 VAR_11 = FUNC_1(&VAR_9->pci_dev->dev, sizeof(struct nvme_id_ns),
     &VAR_10, VAR_1);
 if (VAR_11 == ((void*)0)) {
  VAR_13 = -VAR_0;
  goto out_dma;
 }


 VAR_14 = FUNC_6(VAR_9, 0, 1, VAR_10);
 VAR_13 = FUNC_8(VAR_6, VAR_14);
 if (VAR_13)
  goto out_free;
 if (VAR_14) {
  VAR_13 = VAR_14;
  goto out_free;
 }
 VAR_12 = VAR_11;


 VAR_15[0] = VAR_12->ieee[0] << 4;
 VAR_15[1] = VAR_12->ieee[0] >> 4 | VAR_12->ieee[1] << 4;
 VAR_15[2] = VAR_12->ieee[1] >> 4 | VAR_12->ieee[2] << 4;
 VAR_15[3] = VAR_12->ieee[2] >> 4;

 FUNC_4(VAR_7, 0, VAR_4);
 VAR_7[1] = VAR_2;
 VAR_7[3] = 20;

 VAR_7[4] = 0x01;
 VAR_7[5] = 0x03;
 VAR_7[6] = 0x00;
 VAR_7[7] = 16;

 VAR_7[8] = 0x60 | VAR_15[3];
 VAR_7[9] = VAR_15[2];
 VAR_7[10] = VAR_15[1];
 VAR_7[11] = VAR_15[0];
 VAR_7[12] = (VAR_9->pci_dev->vendor & 0xFF00) >> 8;
 VAR_7[13] = (VAR_9->pci_dev->vendor & 0x00FF);
 VAR_7[14] = VAR_9->serial[0];
 VAR_7[15] = VAR_9->serial[1];
 VAR_7[16] = VAR_9->model[0];
 VAR_7[17] = VAR_9->model[1];
 FUNC_3(&VAR_7[18], &VAR_17, sizeof(u32));


 VAR_16 = FUNC_5(VAR_8, VAR_4);
 VAR_13 = FUNC_7(VAR_6, VAR_7, VAR_16);

 out_free:
 FUNC_2(&VAR_9->pci_dev->dev, sizeof(struct nvme_id_ns), VAR_11,
     VAR_10);
 out_dma:
 return VAR_13;
}
