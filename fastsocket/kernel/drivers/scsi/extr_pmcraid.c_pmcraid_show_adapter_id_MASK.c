
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int dev; } ;
struct pmcraid_instance {TYPE_1__ cdev; TYPE_2__* pdev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;
struct TYPE_8__ {int id; } ;
struct TYPE_7__ {int number; } ;
struct TYPE_6__ {int devfn; TYPE_3__* bus; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 TYPE_4__ VAR_1 ;
 int FUNC_2 (char*,int ,char*,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_3(
 struct device *VAR_2,
 struct device_attribute *VAR_3,
 char *VAR_4
)
{
 struct Scsi_Host *VAR_5 = FUNC_1(VAR_2);
 struct pmcraid_instance *VAR_6 =
  (struct pmcraid_instance *)VAR_5->hostdata;
 u32 VAR_7 = (VAR_6->pdev->bus->number << 8) |
  VAR_6->pdev->devfn;
 u32 VAR_8 = VAR_1.id;

 return FUNC_2(VAR_4, VAR_0,
   "adapter id: %d\nminor: %d\naen group: %d\n",
   VAR_7, FUNC_0(VAR_6->cdev.dev), VAR_8);
}
