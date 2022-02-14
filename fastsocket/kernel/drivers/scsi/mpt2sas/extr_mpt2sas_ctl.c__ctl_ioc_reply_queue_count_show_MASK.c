
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {int IOCCapabilities; } ;
struct MPT2SAS_ADAPTER {int reply_queue_count; scalar_t__ msix_enable; TYPE_1__ facts; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 struct MPT2SAS_ADAPTER* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 u8 VAR_5;
 struct Scsi_Host *VAR_6 = FUNC_0(VAR_2);
 struct MPT2SAS_ADAPTER *VAR_7 = FUNC_1(VAR_6);

 if ((VAR_7->facts.IOCCapabilities &
     VAR_0) && VAR_7->msix_enable)
  VAR_5 = VAR_7->reply_queue_count;
 else
  VAR_5 = 1;
 return FUNC_2(VAR_4, VAR_1, "%d\n", VAR_5);
}
