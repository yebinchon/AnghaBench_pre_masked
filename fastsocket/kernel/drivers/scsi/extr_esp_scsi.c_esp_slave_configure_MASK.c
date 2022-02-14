
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {size_t id; int sdev_target; TYPE_1__* host; scalar_t__ tagged_supported; scalar_t__ sdtr; scalar_t__ ppr; } ;
struct esp_target_data {int flags; } ;
struct esp {int flags; struct esp_target_data* target; } ;
struct TYPE_2__ {int cmd_per_lun; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_device*,int) ;
 int FUNC_1 (struct scsi_device*,int) ;
 int FUNC_2 (struct scsi_device*,int ) ;
 struct esp* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct scsi_device*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct scsi_device *VAR_5)
{
 struct esp *VAR_6 = FUNC_3(VAR_5->host);
 struct esp_target_data *VAR_7 = &VAR_6->target[VAR_5->id];
 int VAR_8, VAR_9;

 if (VAR_6->flags & VAR_1) {

  VAR_5->ppr = 0;
  VAR_5->sdtr = 0;
 }

 VAR_8 = 0;

 if (VAR_5->tagged_supported) {

  VAR_8 = VAR_0;

  if (VAR_8 > VAR_2)
   VAR_8 = VAR_2;
 }

 VAR_9 = VAR_8;
 if (VAR_9 < VAR_5->host->cmd_per_lun)
  VAR_9 = VAR_5->host->cmd_per_lun;

 if (VAR_8) {
  FUNC_2(VAR_5, VAR_4);
  FUNC_0(VAR_5, VAR_9);
 } else {
  FUNC_1(VAR_5, VAR_9);
 }
 VAR_7->flags |= VAR_3;

 if (!FUNC_5(VAR_5->sdev_target))
  FUNC_4(VAR_5);

 return 0;
}
