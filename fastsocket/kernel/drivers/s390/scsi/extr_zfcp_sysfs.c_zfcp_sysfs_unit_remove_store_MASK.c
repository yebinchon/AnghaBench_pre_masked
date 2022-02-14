
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct zfcp_unit {TYPE_2__* port; int list; int status; int refcount; } ;
struct zfcp_port {int starget_id; TYPE_1__* adapter; int status; } ;
struct scsi_lun {int dummy; } ;
struct scsi_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int config_mutex; int config_lock; } ;
struct TYPE_5__ {int adapter; } ;
struct TYPE_4__ {int scsi_host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 struct zfcp_port* FUNC_3 (struct device*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct scsi_device* FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (struct scsi_device*) ;
 int FUNC_11 (struct scsi_device*) ;
 int FUNC_12 (struct scsi_lun*) ;
 scalar_t__ FUNC_13 (char const*,int ,unsigned long long*) ;
 int VAR_4 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 TYPE_3__ VAR_5 ;
 int FUNC_16 (struct zfcp_unit*,int ,char*,int *) ;
 int FUNC_17 (int ) ;
 struct zfcp_unit* FUNC_18 (struct zfcp_port*,int ) ;
 int FUNC_19 (struct zfcp_unit*) ;
 int FUNC_20 (struct zfcp_unit*) ;
 int FUNC_21 (struct zfcp_unit*) ;

__attribute__((used)) static ssize_t FUNC_22(struct device *VAR_6,
         struct device_attribute *VAR_7,
         const char *VAR_8, size_t VAR_9)
{
 struct zfcp_port *VAR_10 = FUNC_3(VAR_6);
 struct zfcp_unit *VAR_11;
 u64 VAR_12;
 FUNC_0(VAR_4);
 struct scsi_device *VAR_13;

 FUNC_5(&VAR_5.config_mutex);
 if (FUNC_1(&VAR_10->status) & VAR_3) {
  FUNC_6(&VAR_5.config_mutex);
  return -VAR_0;
 }

 if (FUNC_13(VAR_8, 0, (unsigned long long *) &VAR_12)) {
  FUNC_6(&VAR_5.config_mutex);
  return -VAR_1;
 }

 FUNC_7(&VAR_5.config_lock);
 VAR_11 = FUNC_18(VAR_10, VAR_12);
 FUNC_8(&VAR_5.config_lock);
 if (!VAR_11) {
  FUNC_6(&VAR_5.config_mutex);
  return -VAR_2;
 }
 FUNC_20(VAR_11);
 FUNC_6(&VAR_5.config_mutex);

 VAR_13 = FUNC_9(VAR_10->adapter->scsi_host, 0,
      VAR_10->starget_id,
      FUNC_12((struct scsi_lun *)&VAR_12));
 if (VAR_13) {
  FUNC_11(VAR_13);
  FUNC_10(VAR_13);
 }

 FUNC_5(&VAR_5.config_mutex);
 FUNC_21(VAR_11);
 if (FUNC_1(&VAR_11->refcount)) {
  FUNC_6(&VAR_5.config_mutex);
  return -VAR_2;
 }

 FUNC_14(&VAR_5.config_lock);
 FUNC_2(VAR_3, &VAR_11->status);
 FUNC_4(&VAR_11->list, &VAR_4);
 FUNC_15(&VAR_5.config_lock);
 FUNC_6(&VAR_5.config_mutex);

 FUNC_16(VAR_11, 0, "syurs_1", ((void*)0));
 FUNC_17(VAR_11->port->adapter);
 FUNC_19(VAR_11);

 return (ssize_t)VAR_9;
}
