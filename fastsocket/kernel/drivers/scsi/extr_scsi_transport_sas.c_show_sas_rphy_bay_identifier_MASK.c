
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct sas_rphy {TYPE_2__ dev; } ;
struct TYPE_6__ {int parent; } ;
struct sas_phy {TYPE_3__ dev; } ;
struct sas_internal {TYPE_1__* f; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
typedef int ssize_t ;
struct TYPE_4__ {int (* get_bay_identifier ) (struct sas_rphy*) ;} ;


 int VAR_0 ;
 struct sas_phy* FUNC_0 (int ) ;
 struct Scsi_Host* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sas_phy*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct sas_rphy*) ;
 struct sas_internal* FUNC_5 (int ) ;
 struct sas_rphy* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_7(struct device *VAR_1,
        struct device_attribute *VAR_2, char *VAR_3)
{
 struct sas_rphy *VAR_4 = FUNC_6(VAR_1);
 struct sas_phy *VAR_5 = FUNC_0(VAR_4->dev.parent);
 struct Scsi_Host *VAR_6 = FUNC_1(VAR_5->dev.parent);
 struct sas_internal *VAR_7 = FUNC_5(VAR_6->transportt);
 int VAR_8;

 if (FUNC_2(VAR_5))
  return -VAR_0;

 VAR_8 = VAR_7->f->get_bay_identifier(VAR_4);
 if (VAR_8 < 0)
  return VAR_8;
 return FUNC_3(VAR_3, "%d\n", VAR_8);
}
