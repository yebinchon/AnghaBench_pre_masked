
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct _MPT_SCSI_HOST {TYPE_4__* ioc; } ;
struct TYPE_7__ {TYPE_2__* pIocPg2; } ;
struct TYPE_8__ {TYPE_3__ raid_data; } ;
struct TYPE_6__ {int NumActiveVolumes; TYPE_1__* RaidVolume; } ;
struct TYPE_5__ {scalar_t__ VolumeID; } ;
typedef TYPE_4__ MPT_ADAPTER ;



__attribute__((used)) static int
FUNC_0(struct _MPT_SCSI_HOST *VAR_0, u32 VAR_1)
{
 int VAR_2, VAR_3 = 0;
 MPT_ADAPTER *VAR_4 = VAR_0->ioc;

 if (!VAR_4->raid_data.pIocPg2)
  goto out;

 if (!VAR_4->raid_data.pIocPg2->NumActiveVolumes)
  goto out;
 for (VAR_2=0; VAR_2 < VAR_4->raid_data.pIocPg2->NumActiveVolumes; VAR_2++) {
  if (VAR_4->raid_data.pIocPg2->RaidVolume[VAR_2].VolumeID == VAR_1) {
   VAR_3 = 1;
   goto out;
  }
 }

 out:
 return VAR_3;
}
