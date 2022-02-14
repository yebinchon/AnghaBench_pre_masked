
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_22__ {int PhysDiskIOC; int PhysDiskID; int PhysDiskBus; int PhysDiskNum; } ;
struct inactive_raid_component_info {int volumeID; int volumeBus; int list; TYPE_4__ d; } ;
typedef TYPE_6__* pRaidVolumePage0_t ;
typedef int dma_addr_t ;
struct TYPE_19__ {TYPE_9__* hdr; } ;
struct TYPE_27__ {int pageAddr; int PageLength; int action; int physAddr; TYPE_1__ cfghdr; int PageType; } ;
struct TYPE_23__ {int inactive_list_mutex; int inactive_list; } ;
struct TYPE_26__ {int pcidev; TYPE_5__ raid_data; } ;
struct TYPE_25__ {int PhysDiskIOC; int PhysDiskID; int PhysDiskBus; int PhysDiskNum; } ;
struct TYPE_20__ {int Flags; scalar_t__ State; } ;
struct TYPE_24__ {int NumPhysDisks; TYPE_3__* PhysDisk; TYPE_2__ VolumeStatus; } ;
struct TYPE_21__ {int PhysDiskNum; } ;
typedef TYPE_7__ RaidPhysDiskPage0_t ;
typedef TYPE_8__ MPT_ADAPTER ;
typedef TYPE_9__ ConfigPageHeader_t ;
typedef TYPE_9__ CONFIGPARMS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct inactive_raid_component_info* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_9__*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_8__*,TYPE_9__*) ;
 scalar_t__ FUNC_4 (TYPE_8__*,int ,TYPE_7__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_6__* FUNC_7 (int ,int,int *) ;
 int FUNC_8 (int ,int,TYPE_6__*,int ) ;

__attribute__((used)) static void
FUNC_9(MPT_ADAPTER *VAR_8, u8 VAR_9, u8 VAR_10)
{
 CONFIGPARMS VAR_11;
 ConfigPageHeader_t VAR_12;
 dma_addr_t VAR_13;
 pRaidVolumePage0_t VAR_14 = ((void*)0);
 int VAR_15;
 RaidPhysDiskPage0_t VAR_16;
 struct inactive_raid_component_info *VAR_17;
 int VAR_18;

 FUNC_2(&VAR_11, 0 , sizeof(CONFIGPARMS));
 FUNC_2(&VAR_12, 0 , sizeof(ConfigPageHeader_t));
 VAR_12.PageType = VAR_3;
 VAR_11.pageAddr = (VAR_9 << 8) + VAR_10;
 VAR_11.cfghdr.hdr = &VAR_12;
 VAR_11.action = VAR_1;

 if (FUNC_3(VAR_8, &VAR_11) != 0)
  goto out;

 if (!VAR_12.PageLength)
  goto out;

 VAR_14 = FUNC_7(VAR_8->pcidev, VAR_12.PageLength * 4,
     &VAR_13);

 if (!VAR_14)
  goto out;

 VAR_11.physAddr = VAR_13;
 VAR_11.action = VAR_2;

 if (FUNC_3(VAR_8, &VAR_11) != 0)
  goto out;

 if (!VAR_14->NumPhysDisks)
  goto out;

 VAR_18 =
    (VAR_14->VolumeStatus.Flags & VAR_5 ||
    (VAR_14->VolumeStatus.Flags & VAR_4) == 0 ||
     VAR_14->VolumeStatus.State == VAR_6 ||
     VAR_14->VolumeStatus.State == VAR_7) ? 1 : 0;

 if (!VAR_18)
  goto out;

 FUNC_5(&VAR_8->raid_data.inactive_list_mutex);
 for (VAR_15 = 0; VAR_15 < VAR_14->NumPhysDisks; VAR_15++) {
  if(FUNC_4(VAR_8,
      VAR_14->PhysDisk[VAR_15].PhysDiskNum, &VAR_16) != 0)
   continue;

  if ((VAR_17 = FUNC_0(sizeof (*VAR_17),
   VAR_0)) == ((void*)0))
   continue;

  VAR_17->volumeID = VAR_10;
  VAR_17->volumeBus = VAR_9;
  VAR_17->d.PhysDiskNum = VAR_16.PhysDiskNum;
  VAR_17->d.PhysDiskBus = VAR_16.PhysDiskBus;
  VAR_17->d.PhysDiskID = VAR_16.PhysDiskID;
  VAR_17->d.PhysDiskIOC = VAR_16.PhysDiskIOC;

  FUNC_1(&VAR_17->list,
      &VAR_8->raid_data.inactive_list);
 }
 FUNC_6(&VAR_8->raid_data.inactive_list_mutex);

 out:
 if (VAR_14)
  FUNC_8(VAR_8->pcidev, VAR_12.PageLength * 4, VAR_14,
      VAR_13);
}
