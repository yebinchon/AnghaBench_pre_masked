
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {scalar_t__ tagged_supported; scalar_t__ hostdata; TYPE_1__* host; } ;
struct dc390_dcb {int DevMode; int SyncMode; } ;
struct dc390_acb {int TagMaxNum; scalar_t__ scan_devices; } ;
struct TYPE_2__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_device*,int ) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_2)
{
 struct dc390_acb *VAR_3 = (struct dc390_acb *)VAR_2->host->hostdata;
 struct dc390_dcb *VAR_4 = (struct dc390_dcb *)VAR_2->hostdata;

 VAR_3->scan_devices = 0;
 if (VAR_2->tagged_supported && (VAR_4->DevMode & VAR_1)) {
  VAR_4->SyncMode |= VAR_0;
  FUNC_0(VAR_2, VAR_3->TagMaxNum);
 }

 return 0;
}
