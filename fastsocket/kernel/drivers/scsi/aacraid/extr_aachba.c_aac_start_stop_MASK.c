
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_device {TYPE_1__* host; } ;
struct TYPE_6__ {int phase; } ;
struct scsi_cmnd {int result; int* cmnd; TYPE_3__ SCp; int (* scsi_done ) (struct scsi_cmnd*) ;struct scsi_device* device; } ;
struct fib {int dummy; } ;
struct aac_power_management {void* parm; void* cid; void* sub; void* type; void* command; } ;
struct TYPE_5__ {int SupportedOptions2; } ;
struct aac_dev {scalar_t__ in_reset; TYPE_2__ supplement_adapter_info; } ;
typedef int fib_callback ;
struct TYPE_4__ {scalar_t__ hostdata; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct fib* FUNC_0 (struct aac_dev*) ;
 int FUNC_1 (struct fib*) ;
 int FUNC_2 (struct fib*) ;
 int FUNC_3 (struct fib*) ;
 int FUNC_4 (int ,struct fib*,int,int ,int ,int,int ,void*) ;
 scalar_t__ VAR_14 ;
 void* FUNC_5 (int ) ;
 struct aac_power_management* FUNC_6 (struct fib*) ;
 int FUNC_7 (struct scsi_device*) ;
 int FUNC_8 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_9(struct scsi_cmnd *VAR_15)
{
 int VAR_16;
 struct fib *VAR_17;
 struct aac_power_management *VAR_18;
 struct scsi_device *VAR_19 = VAR_15->device;
 struct aac_dev *VAR_20 = (struct aac_dev *)VAR_19->host->hostdata;

 if (!(VAR_20->supplement_adapter_info.SupportedOptions2 &
       VAR_0)) {
  VAR_15->result = VAR_8 << 16 | VAR_2 << 8 |
      VAR_11;
  VAR_15->scsi_done(VAR_15);
  return 0;
 }

 if (VAR_20->in_reset)
  return VAR_12;




 VAR_17 = FUNC_0(VAR_20);
 if (!VAR_17)
  return VAR_12;

 FUNC_3(VAR_17);

 VAR_18 = FUNC_6(VAR_17);
 VAR_18->command = FUNC_5(VAR_13);
 VAR_18->type = FUNC_5(VAR_6);

 VAR_18->sub = (VAR_15->cmnd[4] & 1) ?
  FUNC_5(VAR_3) : FUNC_5(VAR_4);
 VAR_18->cid = FUNC_5(FUNC_7(VAR_19));
 VAR_18->parm = (VAR_15->cmnd[1] & 1) ?
  FUNC_5(VAR_5) : 0;




 VAR_16 = FUNC_4(VAR_7,
    VAR_17,
    sizeof(struct aac_power_management),
    VAR_10,
    0, 1,
    (fib_callback)VAR_14,
    (void *)VAR_15);




 if (VAR_16 == -VAR_9) {
  VAR_15->SCp.phase = VAR_1;
  return 0;
 }

 FUNC_1(VAR_17);
 FUNC_2(VAR_17);
 return VAR_12;
}
