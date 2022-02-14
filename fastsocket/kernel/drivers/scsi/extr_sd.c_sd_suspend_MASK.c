
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_disk {TYPE_1__* device; scalar_t__ WCE; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int event; } ;
typedef TYPE_2__ pm_message_t ;
struct TYPE_4__ {scalar_t__ manage_start_stop; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct scsi_disk* FUNC_0 (struct device*) ;
 int FUNC_1 (struct scsi_disk*) ;
 int FUNC_2 (int ,struct scsi_disk*,char*) ;
 int FUNC_3 (struct scsi_disk*,int ) ;
 int FUNC_4 (struct scsi_disk*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2, pm_message_t VAR_3)
{
 struct scsi_disk *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = 0;

 if (!VAR_4)
  return 0;

 if (VAR_4->WCE) {
  FUNC_2(VAR_0, VAR_4, "Synchronizing SCSI cache\n");
  VAR_5 = FUNC_4(VAR_4);
  if (VAR_5)
   goto done;
 }

 if ((VAR_3.event & VAR_1) && VAR_4->device->manage_start_stop) {
  FUNC_2(VAR_0, VAR_4, "Stopping disk\n");
  VAR_5 = FUNC_3(VAR_4, 0);
 }

done:
 FUNC_1(VAR_4);
 return VAR_5;
}
