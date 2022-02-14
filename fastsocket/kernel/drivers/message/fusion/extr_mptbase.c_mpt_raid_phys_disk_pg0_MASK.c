
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u8 ;
typedef TYPE_2__* pRaidPhysDiskPage0_t ;
typedef int dma_addr_t ;
struct TYPE_19__ {int pcidev; } ;
struct TYPE_16__ {TYPE_3__* hdr; } ;
struct TYPE_18__ {int physAddr; int PageLength; int MaxLBA; int pageAddr; int action; TYPE_1__ cfghdr; int PageType; int PageVersion; } ;
struct TYPE_17__ {int MaxLBA; } ;
typedef TYPE_3__ RaidPhysDiskPage0_t ;
typedef TYPE_4__ MPT_ADAPTER ;
typedef TYPE_3__ ConfigPageHeader_t ;
typedef TYPE_3__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 TYPE_2__* FUNC_4 (int ,int,int*) ;
 int FUNC_5 (int ,int,TYPE_2__*,int) ;

int
FUNC_6(MPT_ADAPTER *VAR_6, u8 VAR_7,
   RaidPhysDiskPage0_t *VAR_8)
{
 CONFIGPARMS VAR_9;
 ConfigPageHeader_t VAR_10;
 dma_addr_t VAR_11;
 pRaidPhysDiskPage0_t VAR_12 = ((void*)0);
 int VAR_13;

 FUNC_2(&VAR_9, 0 , sizeof(CONFIGPARMS));
 FUNC_2(&VAR_10, 0 , sizeof(ConfigPageHeader_t));
 FUNC_2(VAR_8, 0, sizeof(RaidPhysDiskPage0_t));

 VAR_10.PageVersion = VAR_5;
 VAR_10.PageType = VAR_4;
 VAR_9.cfghdr.hdr = &VAR_10;
 VAR_9.physAddr = -1;
 VAR_9.action = VAR_2;

 if (FUNC_3(VAR_6, &VAR_9) != 0) {
  VAR_13 = -VAR_0;
  goto out;
 }

 if (!VAR_10.PageLength) {
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_12 = FUNC_4(VAR_6->pcidev, VAR_10.PageLength * 4,
     &VAR_11);

 if (!VAR_12) {
  VAR_13 = -VAR_1;
  goto out;
 }

 VAR_9.physAddr = VAR_11;
 VAR_9.action = VAR_3;
 VAR_9.pageAddr = VAR_7;

 if (FUNC_3(VAR_6, &VAR_9) != 0) {
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_13 = 0;
 FUNC_1(VAR_8, VAR_12, sizeof(*VAR_12));
 VAR_8->MaxLBA = FUNC_0(VAR_12->MaxLBA);

 out:

 if (VAR_12)
  FUNC_5(VAR_6->pcidev, VAR_10.PageLength * 4, VAR_12,
      VAR_11);

 return VAR_13;
}
