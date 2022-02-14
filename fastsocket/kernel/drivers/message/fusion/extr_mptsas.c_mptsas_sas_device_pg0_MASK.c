
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mptsas_devinfo {void* flags; int device_info; int sas_address; int channel; int phys_disk_num; int id; int port_id; int phy_id; void* slot; void* handle_enclosure; void* handle_parent; void* handle; } ;
typedef int dma_addr_t ;
typedef int __le64 ;
struct TYPE_13__ {TYPE_4__* ehdr; } ;
struct TYPE_17__ {int physAddr; int action; int timeout; scalar_t__ dir; scalar_t__ pageAddr; TYPE_1__ cfghdr; } ;
struct TYPE_16__ {int ExtPageLength; int ExtPageType; int PageType; scalar_t__ Reserved2; scalar_t__ Reserved1; scalar_t__ PageNumber; int PageVersion; } ;
struct TYPE_15__ {int pcidev; } ;
struct TYPE_14__ {int Flags; int DeviceInfo; int SASAddress; int Bus; int TargetID; int PhysicalPort; int PhyNum; int Slot; int EnclosureHandle; int ParentDevHandle; int DevHandle; } ;
typedef TYPE_2__ SasDevicePage0_t ;
typedef TYPE_3__ MPT_ADAPTER ;
typedef TYPE_4__ ConfigExtendedPageHeader_t ;
typedef TYPE_5__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct mptsas_devinfo*,int ,int) ;
 int FUNC_5 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int ,int,int*) ;
 int FUNC_8 (int ,int,TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_9(MPT_ADAPTER *VAR_8, struct mptsas_devinfo *VAR_9,
  u32 VAR_10, u32 VAR_11)
{
 ConfigExtendedPageHeader_t VAR_12;
 CONFIGPARMS VAR_13;
 SasDevicePage0_t *VAR_14;
 dma_addr_t VAR_15;
 __le64 VAR_16;
 int VAR_17=0;

 VAR_12.PageVersion = VAR_6;
 VAR_12.ExtPageLength = 0;
 VAR_12.PageNumber = 0;
 VAR_12.Reserved1 = 0;
 VAR_12.Reserved2 = 0;
 VAR_12.PageType = VAR_5;
 VAR_12.ExtPageType = VAR_4;

 VAR_13.cfghdr.ehdr = &VAR_12;
 VAR_13.pageAddr = VAR_10 + VAR_11;
 VAR_13.physAddr = -1;
 VAR_13.action = VAR_2;
 VAR_13.dir = 0;
 VAR_13.timeout = VAR_7;

 FUNC_4(VAR_9, 0, sizeof(struct mptsas_devinfo));
 VAR_17 = FUNC_5(VAR_8, &VAR_13);
 if (VAR_17)
  goto out;
 if (!VAR_12.ExtPageLength) {
  VAR_17 = -VAR_1;
  goto out;
 }

 VAR_14 = FUNC_7(VAR_8->pcidev, VAR_12.ExtPageLength * 4,
          &VAR_15);
 if (!VAR_14) {
  VAR_17 = -VAR_0;
  goto out;
 }

 VAR_13.physAddr = VAR_15;
 VAR_13.action = VAR_3;

 VAR_17 = FUNC_5(VAR_8, &VAR_13);
 if (VAR_17)
  goto out_free_consistent;

 FUNC_6(VAR_8, VAR_14);

 FUNC_4(VAR_9, 0, sizeof(struct mptsas_devinfo));
 VAR_9->handle = FUNC_0(VAR_14->DevHandle);
 VAR_9->handle_parent = FUNC_0(VAR_14->ParentDevHandle);
 VAR_9->handle_enclosure =
     FUNC_0(VAR_14->EnclosureHandle);
 VAR_9->slot = FUNC_0(VAR_14->Slot);
 VAR_9->phy_id = VAR_14->PhyNum;
 VAR_9->port_id = VAR_14->PhysicalPort;
 VAR_9->id = VAR_14->TargetID;
 VAR_9->phys_disk_num = ~0;
 VAR_9->channel = VAR_14->Bus;
 FUNC_3(&VAR_16, &VAR_14->SASAddress, sizeof(__le64));
 VAR_9->sas_address = FUNC_2(VAR_16);
 VAR_9->device_info =
     FUNC_1(VAR_14->DeviceInfo);
 VAR_9->flags = FUNC_0(VAR_14->Flags);

 out_free_consistent:
 FUNC_8(VAR_8->pcidev, VAR_12.ExtPageLength * 4,
       VAR_14, VAR_15);
 out:
 return VAR_17;
}
