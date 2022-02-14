
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ata_port {int flags; TYPE_1__* ops; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* em_store ) (struct ata_port*,char const*,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct ata_port* FUNC_0 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (struct ata_port*,char const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
     const char *VAR_4, size_t VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_1(VAR_2);
 struct ata_port *VAR_7 = FUNC_0(VAR_6);
 if (VAR_7->ops->em_store && (VAR_7->flags & VAR_0))
  return VAR_7->ops->em_store(VAR_7, VAR_4, VAR_5);
 return -VAR_1;
}
