
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int inquiry_len; int queue_depth; int* inquiry; int scsi_level; int ordered_tags; int simple_tags; int tagged_supported; struct MPT2SAS_DEVICE* hostdata; struct Scsi_Host* host; } ;
struct _sas_device {int device_info; } ;
struct Scsi_Host {int can_queue; } ;
struct MPT2SAS_TARGET {int flags; int sas_address; } ;
struct MPT2SAS_DEVICE {struct MPT2SAS_TARGET* sas_target; } ;
struct MPT2SAS_ADAPTER {int sas_device_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct _sas_device* FUNC_0 (struct MPT2SAS_ADAPTER*,int ) ;
 int FUNC_1 (struct scsi_device*,int,int) ;
 int FUNC_2 (int ,struct scsi_device*,char*,int,int ,int ,int ,int ,int) ;
 struct MPT2SAS_ADAPTER* FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct scsi_device *VAR_7, int VAR_8, int VAR_9)
{
 struct Scsi_Host *VAR_10 = VAR_7->host;
 int VAR_11;
 int VAR_12;
 struct MPT2SAS_ADAPTER *VAR_13 = FUNC_3(VAR_10);
 struct MPT2SAS_DEVICE *VAR_14;
 struct MPT2SAS_TARGET *VAR_15;
 struct _sas_device *VAR_16;
 unsigned long VAR_17;

 if (VAR_9 != VAR_6)
  return -VAR_0;

 VAR_11 = VAR_10->can_queue;


 VAR_14 = VAR_7->hostdata;
 if (!VAR_14)
  goto not_sata;
 VAR_15 = VAR_14->sas_target;
 if (!VAR_15)
  goto not_sata;
 if ((VAR_15->flags & VAR_4))
  goto not_sata;
 FUNC_4(&VAR_13->sas_device_lock, VAR_17);
 VAR_16 = FUNC_0(VAR_13,
    VAR_14->sas_target->sas_address);
 if (VAR_16 && VAR_16->device_info &
     VAR_2)
  VAR_11 = VAR_3;
 FUNC_5(&VAR_13->sas_device_lock, VAR_17);

 not_sata:

 if (!VAR_7->tagged_supported)
  VAR_11 = 1;
 if (VAR_8 > VAR_11)
  VAR_8 = VAR_11;
 VAR_12 = (VAR_8 == 1) ? 0 : VAR_5;
 FUNC_1(VAR_7, VAR_12, VAR_8);

 if (VAR_7->inquiry_len > 7)
  FUNC_2(VAR_1, VAR_7, "qdepth(%d), tagged(%d), "
  "simple(%d), ordered(%d), scsi_level(%d), cmd_que(%d)\n",
  VAR_7->queue_depth, VAR_7->tagged_supported, VAR_7->simple_tags,
  VAR_7->ordered_tags, VAR_7->scsi_level,
  (VAR_7->inquiry[7] & 2) >> 1);

 return VAR_7->queue_depth;
}
