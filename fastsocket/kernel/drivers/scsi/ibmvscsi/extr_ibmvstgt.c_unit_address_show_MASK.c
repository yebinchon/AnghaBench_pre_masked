
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_port {TYPE_1__* dma_dev; } ;
struct srp_target {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int unit_address; } ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 struct srp_target* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (char*,int ,char*,int) ;
 struct vio_port* FUNC_3 (struct srp_target*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);
 struct srp_target *VAR_5 = FUNC_1(VAR_4);
 struct vio_port *VAR_6 = FUNC_3(VAR_5);
 return FUNC_2(VAR_3, VAR_0, "%x\n", VAR_6->dma_dev->unit_address);
}
