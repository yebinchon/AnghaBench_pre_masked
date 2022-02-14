
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
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
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (int *,int,void*,int ) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct nvme_command*,int ,int) ;
 int FUNC_7 (int,int ) ;
 int VAR_11 ;
 int FUNC_8 (struct nvme_dev*,struct nvme_command*,int *) ;
 int FUNC_9 (struct sg_io_hdr*,int*,int) ;

__attribute__((used)) static int FUNC_10(struct nvme_ns *VAR_12,
     struct sg_io_hdr *VAR_13, int VAR_14)
{
 int VAR_15 = VAR_10;
 int VAR_16;
 u8 *VAR_17;
 struct nvme_command VAR_18;
 struct nvme_dev *VAR_19 = VAR_12->dev;
 struct nvme_smart_log *VAR_20;
 dma_addr_t VAR_21;
 void *VAR_22;
 u8 VAR_23;
 u16 VAR_24;

 VAR_17 = FUNC_5(VAR_4, VAR_2);
 if (VAR_17 == ((void*)0)) {
  VAR_15 = -VAR_1;
  goto out_mem;
 }

 VAR_22 = FUNC_2(&VAR_19->pci_dev->dev,
     sizeof(struct nvme_smart_log),
     &VAR_21, VAR_2);
 if (VAR_22 == ((void*)0)) {
  VAR_15 = -VAR_1;
  goto out_dma;
 }


 FUNC_6(&VAR_18, 0, sizeof(VAR_18));
 VAR_18.common.opcode = VAR_11;
 VAR_18.common.nsid = FUNC_0(0xFFFFFFFF);
 VAR_18.common.prp1 = FUNC_1(VAR_21);
 VAR_18.common.cdw10[0] = FUNC_0(((sizeof(struct nvme_smart_log) /
   VAR_0) << 16) | VAR_7);
 VAR_15 = FUNC_8(VAR_19, &VAR_18, ((void*)0));
 if (VAR_15 != VAR_8) {
  VAR_23 = VAR_6;
 } else {
  VAR_20 = VAR_22;
  VAR_24 = (VAR_20->temperature[1] << 8) +
    (VAR_20->temperature[0]);
  VAR_23 = VAR_24 - VAR_3;
 }

 VAR_17[0] = VAR_5;

 VAR_17[3] = VAR_9;


 VAR_17[6] = 0x23;
 VAR_17[7] = 0x04;


 VAR_17[10] = VAR_23;

 VAR_16 = FUNC_7(VAR_14, VAR_4);
 VAR_15 = FUNC_9(VAR_13, VAR_17, VAR_16);

 FUNC_3(&VAR_19->pci_dev->dev, sizeof(struct nvme_smart_log),
     VAR_22, VAR_21);
 out_dma:
 FUNC_4(VAR_17);
 out_mem:
 return VAR_15;
}
