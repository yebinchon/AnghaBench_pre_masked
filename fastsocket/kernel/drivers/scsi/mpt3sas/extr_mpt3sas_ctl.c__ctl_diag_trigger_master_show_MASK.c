
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct SL_WH_MASTER_TRIGGER_T {int dummy; } ;
struct MPT3SAS_ADAPTER {int diag_trigger_lock; int diag_trigger_master; } ;
typedef int ssize_t ;


 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int *,int) ;
 struct MPT3SAS_ADAPTER* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_0,
 struct device_attribute *VAR_1, char *VAR_2)

{
 struct Scsi_Host *VAR_3 = FUNC_0(VAR_0);
 struct MPT3SAS_ADAPTER *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5;
 ssize_t VAR_6;

 FUNC_3(&VAR_4->diag_trigger_lock, VAR_5);
 VAR_6 = sizeof(struct SL_WH_MASTER_TRIGGER_T);
 FUNC_1(VAR_2, &VAR_4->diag_trigger_master, VAR_6);
 FUNC_4(&VAR_4->diag_trigger_lock, VAR_5);
 return VAR_6;
}
