
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ata_port {int lock; int park_req_pending; } ;
struct ata_device {scalar_t__ class; int flags; size_t devno; TYPE_2__* link; int unpark_deadline; } ;
typedef int ssize_t ;
struct TYPE_3__ {int * dev_action; } ;
struct TYPE_4__ {TYPE_1__ eh_info; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,long) ;
 int FUNC_1 (struct ata_port*) ;
 struct ata_device* FUNC_2 (struct ata_port*,struct scsi_device*) ;
 struct ata_port* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (char const*,int,long*) ;
 struct scsi_device* FUNC_8 (struct device*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_9,
       struct device_attribute *VAR_10,
       const char *VAR_11, size_t VAR_12)
{
 struct scsi_device *VAR_13 = FUNC_8(VAR_9);
 struct ata_port *VAR_14;
 struct ata_device *VAR_15;
 long int VAR_16;
 unsigned long VAR_17;
 int VAR_18;

 VAR_18 = FUNC_7(VAR_11, 10, &VAR_16);
 if (VAR_18 || VAR_16 < -2)
  return -VAR_4;
 if (VAR_16 > VAR_3) {
  VAR_18 = -VAR_7;
  VAR_16 = VAR_3;
 }

 VAR_14 = FUNC_3(VAR_13->host);

 FUNC_5(VAR_14->lock, VAR_17);
 VAR_15 = FUNC_2(VAR_14, VAR_13);
 if (FUNC_9(!VAR_15)) {
  VAR_18 = -VAR_5;
  goto unlock;
 }
 if (VAR_15->class != VAR_0) {
  VAR_18 = -VAR_6;
  goto unlock;
 }

 if (VAR_16 >= 0) {
  if (VAR_15->flags & VAR_1) {
   VAR_18 = -VAR_6;
   goto unlock;
  }

  VAR_15->unpark_deadline = FUNC_0(VAR_8, VAR_16);
  VAR_15->link->eh_info.dev_action[VAR_15->devno] |= VAR_2;
  FUNC_1(VAR_14);
  FUNC_4(&VAR_14->park_req_pending);
 } else {
  switch (VAR_16) {
  case -1:
   VAR_15->flags &= ~VAR_1;
   break;
  case -2:
   VAR_15->flags |= VAR_1;
   break;
  }
 }
unlock:
 FUNC_6(VAR_14->lock, VAR_17);

 return VAR_18 ? VAR_18 : VAR_12;
}
