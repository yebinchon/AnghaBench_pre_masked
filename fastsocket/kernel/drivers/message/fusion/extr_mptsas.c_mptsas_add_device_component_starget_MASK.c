
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct scsi_target {int * hostdata; TYPE_1__ dev; } ;
struct TYPE_5__ {int sas_address; } ;
struct sas_rphy {TYPE_2__ identify; } ;
struct TYPE_6__ {int slot; int device_info; int sas_address; int id; int channel; int handle_enclosure; } ;
struct mptsas_phyinfo {TYPE_3__ attached; } ;
struct mptsas_enclosure {int enclosure_logical_id; } ;
typedef int VirtTarget ;
typedef int MPT_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 struct sas_rphy* FUNC_0 (int ) ;
 int FUNC_1 (struct mptsas_enclosure*,int ,int) ;
 int FUNC_2 (int *,int ,int ,int ,int ,int ,int ) ;
 struct mptsas_phyinfo* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,struct mptsas_enclosure*,int,int ) ;

__attribute__((used)) static void
FUNC_5(MPT_ADAPTER *VAR_2,
 struct scsi_target *VAR_3)
{
 VirtTarget *VAR_4;
 struct sas_rphy *VAR_5;
 struct mptsas_phyinfo *VAR_6 = ((void*)0);
 struct mptsas_enclosure VAR_7;

 VAR_5 = FUNC_0(VAR_3->dev.parent);
 VAR_4 = VAR_3->hostdata;
 VAR_6 = FUNC_3(VAR_2,
   VAR_5->identify.sas_address);
 if (!VAR_6)
  return;

 FUNC_1(&VAR_7, 0, sizeof(struct mptsas_enclosure));
 FUNC_4(VAR_2, &VAR_7,
  (VAR_0 <<
  VAR_1),
  VAR_6->attached.handle_enclosure);

 FUNC_2(VAR_2, VAR_6->attached.channel,
  VAR_6->attached.id, VAR_6->attached.sas_address,
  VAR_6->attached.device_info,
  VAR_6->attached.slot, VAR_7.enclosure_logical_id);
}
