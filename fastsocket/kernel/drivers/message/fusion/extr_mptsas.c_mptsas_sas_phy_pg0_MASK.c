
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_17__ {void* handle; } ;
struct TYPE_16__ {void* handle; } ;
struct mptsas_phyinfo {TYPE_3__ attached; TYPE_2__ identify; int programmed_link_rate; int hw_link_rate; } ;
typedef int dma_addr_t ;
struct TYPE_15__ {TYPE_6__* ehdr; } ;
struct TYPE_21__ {int physAddr; int action; scalar_t__ pageAddr; int timeout; scalar_t__ dir; TYPE_1__ cfghdr; } ;
struct TYPE_20__ {int ExtPageLength; int ExtPageType; int PageType; scalar_t__ Reserved2; scalar_t__ Reserved1; scalar_t__ PageNumber; int PageVersion; } ;
struct TYPE_19__ {int pcidev; } ;
struct TYPE_18__ {int AttachedDevHandle; int OwnerDevHandle; int ProgrammedLinkRate; int HwLinkRate; } ;
typedef TYPE_4__ SasPhyPage0_t ;
typedef TYPE_5__ MPT_ADAPTER ;
typedef TYPE_6__ ConfigExtendedPageHeader_t ;
typedef TYPE_7__ CONFIGPARMS ;


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
 void* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int ,int,int*) ;
 int FUNC_4 (int ,int,TYPE_4__*,int) ;

__attribute__((used)) static int
FUNC_5(MPT_ADAPTER *VAR_10, struct mptsas_phyinfo *VAR_11,
  u32 VAR_12, u32 VAR_13)
{
 ConfigExtendedPageHeader_t VAR_14;
 CONFIGPARMS VAR_15;
 SasPhyPage0_t *VAR_16;
 dma_addr_t VAR_17;
 int VAR_18;

 VAR_14.PageVersion = VAR_8;
 VAR_14.ExtPageLength = 0;
 VAR_14.PageNumber = 0;
 VAR_14.Reserved1 = 0;
 VAR_14.Reserved2 = 0;
 VAR_14.PageType = VAR_6;
 VAR_14.ExtPageType = VAR_5;

 VAR_15.cfghdr.ehdr = &VAR_14;
 VAR_15.dir = 0;
 VAR_15.timeout = VAR_9;


 VAR_15.physAddr = -1;
 VAR_15.pageAddr = VAR_12 + VAR_13;
 VAR_15.action = VAR_3;

 VAR_18 = FUNC_1(VAR_10, &VAR_15);
 if (VAR_18)
  goto out;

 if (!VAR_14.ExtPageLength) {
  VAR_18 = -VAR_2;
  goto out;
 }

 VAR_16 = FUNC_3(VAR_10->pcidev, VAR_14.ExtPageLength * 4,
          &VAR_17);
 if (!VAR_16) {
  VAR_18 = -VAR_1;
  goto out;
 }

 VAR_15.physAddr = VAR_17;
 VAR_15.action = VAR_4;

 VAR_18 = FUNC_1(VAR_10, &VAR_15);

 if (VAR_18 == VAR_7) {
  VAR_18 = -VAR_0;
  goto out_free_consistent;
 }

 if (VAR_18)
  goto out_free_consistent;

 FUNC_2(VAR_10, VAR_16);

 VAR_11->hw_link_rate = VAR_16->HwLinkRate;
 VAR_11->programmed_link_rate = VAR_16->ProgrammedLinkRate;
 VAR_11->identify.handle = FUNC_0(VAR_16->OwnerDevHandle);
 VAR_11->attached.handle = FUNC_0(VAR_16->AttachedDevHandle);

 out_free_consistent:
 FUNC_4(VAR_10->pcidev, VAR_14.ExtPageLength * 4,
       VAR_16, VAR_17);
 out:
 return VAR_18;
}
