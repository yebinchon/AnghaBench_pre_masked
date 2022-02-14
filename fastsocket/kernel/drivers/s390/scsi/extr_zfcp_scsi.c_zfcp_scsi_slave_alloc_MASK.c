
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_unit {struct scsi_device* device; } ;
struct zfcp_adapter {int dummy; } ;
struct scsi_device {struct zfcp_unit* hostdata; int lun; int id; int channel; TYPE_1__* host; } ;
struct TYPE_4__ {int config_lock; } ;
struct TYPE_3__ {scalar_t__* hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (struct zfcp_unit*) ;
 struct zfcp_unit* FUNC_3 (struct zfcp_adapter*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct scsi_device *VAR_2)
{
 struct zfcp_adapter *VAR_3;
 struct zfcp_unit *VAR_4;
 unsigned long VAR_5;
 int VAR_6 = -VAR_0;

 VAR_3 = (struct zfcp_adapter *) VAR_2->host->hostdata[0];
 if (!VAR_3)
  goto out;

 FUNC_0(&VAR_1.config_lock, VAR_5);
 VAR_4 = FUNC_3(VAR_3, VAR_2->channel, VAR_2->id, VAR_2->lun);
 if (VAR_4) {
  VAR_2->hostdata = VAR_4;
  VAR_4->device = VAR_2;
  FUNC_2(VAR_4);
  VAR_6 = 0;
 }
 FUNC_1(&VAR_1.config_lock, VAR_5);
out:
 return VAR_6;
}
