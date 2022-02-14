
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int tagged_supported; struct MPT3SAS_DEVICE* hostdata; struct Scsi_Host* host; } ;
struct _sas_device {int device_info; } ;
struct Scsi_Host {int can_queue; } ;
struct MPT3SAS_TARGET {int flags; int sas_address; } ;
struct MPT3SAS_DEVICE {struct MPT3SAS_TARGET* sas_target; } ;
struct MPT3SAS_ADAPTER {int sas_device_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct _sas_device* FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_1 (struct scsi_device*,int ,int) ;
 int FUNC_2 (struct scsi_device*) ;
 struct MPT3SAS_ADAPTER* FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_6(struct scsi_device *VAR_3, int VAR_4)
{
 struct Scsi_Host *VAR_5 = VAR_3->host;
 int VAR_6;
 struct MPT3SAS_ADAPTER *VAR_7 = FUNC_3(VAR_5);
 struct MPT3SAS_DEVICE *VAR_8;
 struct MPT3SAS_TARGET *VAR_9;
 struct _sas_device *VAR_10;
 unsigned long VAR_11;

 VAR_6 = VAR_5->can_queue;


 VAR_8 = VAR_3->hostdata;
 if (!VAR_8)
  goto not_sata;
 VAR_9 = VAR_8->sas_target;
 if (!VAR_9)
  goto not_sata;
 if ((VAR_9->flags & VAR_2))
  goto not_sata;
 FUNC_4(&VAR_7->sas_device_lock, VAR_11);
 VAR_10 = FUNC_0(VAR_7,
    VAR_8->sas_target->sas_address);
 if (VAR_10 && VAR_10->device_info &
     VAR_0)
  VAR_6 = VAR_1;
 FUNC_5(&VAR_7->sas_device_lock, VAR_11);

 not_sata:

 if (!VAR_3->tagged_supported)
  VAR_6 = 1;
 if (VAR_4 > VAR_6)
  VAR_4 = VAR_6;
 FUNC_1(VAR_3, FUNC_2(VAR_3), VAR_4);
}
