
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {scalar_t__ type; } ;
struct TYPE_2__ {int IOCCapabilities; } ;
struct MPT2SAS_ADAPTER {TYPE_1__ facts; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct scsi_device*) ;
 scalar_t__ FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (int ,struct scsi_device*,char*,char*) ;

__attribute__((used)) static void
FUNC_3(struct MPT2SAS_ADAPTER *VAR_3, struct scsi_device *VAR_4)
{

 if (VAR_4->type != VAR_2)
  return;

 if (!(VAR_3->facts.IOCCapabilities & VAR_1))
  return;

 FUNC_0(VAR_4);
 FUNC_2(VAR_0, VAR_4, "TLR %s\n",
     FUNC_1(VAR_4) ? "Enabled" : "Disabled");
 return;

}
