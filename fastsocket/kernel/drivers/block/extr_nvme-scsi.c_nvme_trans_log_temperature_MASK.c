
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_smart_log {int* temperature; } ;
struct nvme_ns {struct nvme_dev* dev; } ;
struct nvme_dev {TYPE_2__* pci_dev; } ;
struct TYPE_3__ {void** cdw10; int prp1; void* nsid; int opcode; } ;
struct nvme_command {TYPE_1__ common; } ;
typedef int dma_addr_t ;
typedef int c ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (int *,int,void*,int ) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct nvme_command*,int ,int) ;
 int FUNC_7 (int,int ) ;
 int VAR_12 ;
 int FUNC_8 (struct nvme_dev*,int ,int ,int ,int*) ;
 int FUNC_9 (struct nvme_dev*,struct nvme_command*,int *) ;
 int FUNC_10 (struct sg_io_hdr*,int*,int) ;

__attribute__((used)) static int FUNC_11(struct nvme_ns *VAR_13, struct sg_io_hdr *VAR_14,
     int VAR_15)
{
 int VAR_16 = VAR_11;
 int VAR_17;
 u8 *VAR_18;
 struct nvme_command VAR_19;
 struct nvme_dev *VAR_20 = VAR_13->dev;
 struct nvme_smart_log *VAR_21;
 dma_addr_t VAR_22;
 void *VAR_23;
 u32 VAR_24;
 u8 VAR_25, VAR_26;
 u16 VAR_27;

 VAR_18 = FUNC_5(VAR_5, VAR_2);
 if (VAR_18 == ((void*)0)) {
  VAR_16 = -VAR_1;
  goto out_mem;
 }

 VAR_23 = FUNC_2(&VAR_20->pci_dev->dev,
     sizeof(struct nvme_smart_log),
     &VAR_22, VAR_2);
 if (VAR_23 == ((void*)0)) {
  VAR_16 = -VAR_1;
  goto out_dma;
 }


 FUNC_6(&VAR_19, 0, sizeof(VAR_19));
 VAR_19.common.opcode = VAR_12;
 VAR_19.common.nsid = FUNC_0(0xFFFFFFFF);
 VAR_19.common.prp1 = FUNC_1(VAR_22);
 VAR_19.common.cdw10[0] = FUNC_0(((sizeof(struct nvme_smart_log) /
   VAR_0) << 16) | VAR_8);
 VAR_16 = FUNC_9(VAR_20, &VAR_19, ((void*)0));
 if (VAR_16 != VAR_9) {
  VAR_25 = VAR_6;
 } else {
  VAR_21 = VAR_23;
  VAR_27 = (VAR_21->temperature[1] << 8) +
    (VAR_21->temperature[0]);
  VAR_25 = VAR_27 - VAR_3;
 }


 VAR_16 = FUNC_8(VAR_20, VAR_7, 0, 0,
        &VAR_24);
 if (VAR_16 != VAR_9)
  VAR_26 = VAR_6;
 else
  VAR_26 = (VAR_24 & 0xFFFF) - VAR_3;

 VAR_18[0] = VAR_4;

 VAR_18[3] = VAR_10;


 VAR_18[6] = 0x01;
 VAR_18[7] = 0x02;

 VAR_18[9] = VAR_25;

 VAR_18[11] = 0x01;
 VAR_18[12] = 0x01;
 VAR_18[13] = 0x02;

 VAR_18[15] = VAR_26;

 VAR_17 = FUNC_7(VAR_15, VAR_5);
 VAR_16 = FUNC_10(VAR_14, VAR_18, VAR_17);

 FUNC_3(&VAR_20->pci_dev->dev, sizeof(struct nvme_smart_log),
     VAR_23, VAR_22);
 out_dma:
 FUNC_4(VAR_18);
 out_mem:
 return VAR_16;
}
