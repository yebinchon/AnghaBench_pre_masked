
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {int dev; struct MPT3SAS_TARGET* hostdata; } ;
struct scsi_device {int * hostdata; } ;
struct _sas_device {int * starget; } ;
struct Scsi_Host {int dummy; } ;
struct MPT3SAS_TARGET {int flags; int num_luns; int sas_address; } ;
struct MPT3SAS_ADAPTER {int sas_device_lock; } ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct _sas_device* FUNC_2 (struct MPT3SAS_ADAPTER*,int ) ;
 struct scsi_target* FUNC_3 (struct scsi_device*) ;
 struct MPT3SAS_ADAPTER* FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct scsi_device *VAR_1)
{
 struct MPT3SAS_TARGET *VAR_2;
 struct scsi_target *VAR_3;
 struct Scsi_Host *VAR_4;
 struct MPT3SAS_ADAPTER *VAR_5;
 struct _sas_device *VAR_6;
 unsigned long VAR_7;

 if (!VAR_1->hostdata)
  return;

 VAR_3 = FUNC_3(VAR_1);
 VAR_2 = VAR_3->hostdata;
 VAR_2->num_luns--;

 VAR_4 = FUNC_0(&VAR_3->dev);
 VAR_5 = FUNC_4(VAR_4);

 if (!(VAR_2->flags & VAR_0)) {
  FUNC_5(&VAR_5->sas_device_lock, VAR_7);
  VAR_6 = FUNC_2(VAR_5,
     VAR_2->sas_address);
  if (VAR_6 && !VAR_2->num_luns)
   VAR_6->starget = ((void*)0);
  FUNC_6(&VAR_5->sas_device_lock, VAR_7);
 }

 FUNC_1(VAR_1->hostdata);
 VAR_1->hostdata = ((void*)0);
}
