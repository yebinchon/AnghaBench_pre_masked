
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct mptsas_portinfo {int num_phys; TYPE_13__* phy_info; } ;
struct mptsas_phyinfo {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_16__ {TYPE_4__* ehdr; } ;
struct TYPE_20__ {int physAddr; int action; int timeout; scalar_t__ dir; scalar_t__ pageAddr; TYPE_1__ cfghdr; } ;
struct TYPE_19__ {int ExtPageLength; int ExtPageType; int PageType; scalar_t__ Reserved2; scalar_t__ Reserved1; scalar_t__ PageNumber; int PageVersion; } ;
struct TYPE_18__ {int pcidev; void* nvdata_version_default; void* nvdata_version_persistent; } ;
struct TYPE_17__ {int NumPhys; TYPE_10__* PhyData; int NvdataVersionDefault; int NvdataVersionPersistent; } ;
struct TYPE_15__ {int phy_id; void* handle; struct mptsas_portinfo* portinfo; int negotiated_link_rate; int port_id; } ;
struct TYPE_14__ {int ControllerDevHandle; int NegotiatedLinkRate; int Port; } ;
typedef TYPE_2__ SasIOUnitPage0_t ;
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
 int VAR_8 ;
 TYPE_13__* FUNC_0 (int,int,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_10__*) ;
 TYPE_2__* FUNC_4 (int ,int,int*) ;
 int FUNC_5 (int ,int,TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_6(MPT_ADAPTER *VAR_9, struct mptsas_portinfo *VAR_10)
{
 ConfigExtendedPageHeader_t VAR_11;
 CONFIGPARMS VAR_12;
 SasIOUnitPage0_t *VAR_13;
 dma_addr_t VAR_14;
 int VAR_15, VAR_16;

 VAR_11.PageVersion = VAR_7;
 VAR_11.ExtPageLength = 0;
 VAR_11.PageNumber = 0;
 VAR_11.Reserved1 = 0;
 VAR_11.Reserved2 = 0;
 VAR_11.PageType = VAR_6;
 VAR_11.ExtPageType = VAR_5;

 VAR_12.cfghdr.ehdr = &VAR_11;
 VAR_12.physAddr = -1;
 VAR_12.pageAddr = 0;
 VAR_12.action = VAR_3;
 VAR_12.dir = 0;
 VAR_12.timeout = VAR_8;

 VAR_15 = FUNC_2(VAR_9, &VAR_12);
 if (VAR_15)
  goto out;
 if (!VAR_11.ExtPageLength) {
  VAR_15 = -VAR_1;
  goto out;
 }

 VAR_13 = FUNC_4(VAR_9->pcidev, VAR_11.ExtPageLength * 4,
         &VAR_14);
 if (!VAR_13) {
  VAR_15 = -VAR_0;
  goto out;
 }

 VAR_12.physAddr = VAR_14;
 VAR_12.action = VAR_4;

 VAR_15 = FUNC_2(VAR_9, &VAR_12);
 if (VAR_15)
  goto out_free_consistent;

 VAR_10->num_phys = VAR_13->NumPhys;
 VAR_10->phy_info = FUNC_0(VAR_10->num_phys,
  sizeof(struct mptsas_phyinfo), VAR_2);
 if (!VAR_10->phy_info) {
  VAR_15 = -VAR_0;
  goto out_free_consistent;
 }

 VAR_9->nvdata_version_persistent =
     FUNC_1(VAR_13->NvdataVersionPersistent);
 VAR_9->nvdata_version_default =
     FUNC_1(VAR_13->NvdataVersionDefault);

 for (VAR_16 = 0; VAR_16 < VAR_10->num_phys; VAR_16++) {
  FUNC_3(VAR_9, &VAR_13->PhyData[VAR_16]);
  VAR_10->phy_info[VAR_16].phy_id = VAR_16;
  VAR_10->phy_info[VAR_16].port_id =
      VAR_13->PhyData[VAR_16].Port;
  VAR_10->phy_info[VAR_16].negotiated_link_rate =
      VAR_13->PhyData[VAR_16].NegotiatedLinkRate;
  VAR_10->phy_info[VAR_16].portinfo = VAR_10;
  VAR_10->phy_info[VAR_16].handle =
      FUNC_1(VAR_13->PhyData[VAR_16].ControllerDevHandle);
 }

 out_free_consistent:
 FUNC_5(VAR_9->pcidev, VAR_11.ExtPageLength * 4,
       VAR_13, VAR_14);
 out:
 return VAR_15;
}
