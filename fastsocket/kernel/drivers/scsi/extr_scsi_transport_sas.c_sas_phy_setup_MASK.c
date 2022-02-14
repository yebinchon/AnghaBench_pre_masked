
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct transport_container {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct sas_phy {TYPE_1__ dev; } ;
struct sas_internal {TYPE_2__* f; } ;
struct device {int dummy; } ;
struct Scsi_Host {int transportt; } ;
struct TYPE_4__ {int (* phy_setup ) (struct sas_phy*) ;} ;


 struct sas_phy* FUNC_0 (struct device*) ;
 struct Scsi_Host* FUNC_1 (int ) ;
 int FUNC_2 (struct sas_phy*) ;
 struct sas_internal* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct transport_container *VAR_0, struct device *VAR_1,
    struct device *VAR_2)
{
 struct sas_phy *VAR_3 = FUNC_0(VAR_1);
 struct Scsi_Host *VAR_4 = FUNC_1(VAR_3->dev.parent);
 struct sas_internal *VAR_5 = FUNC_3(VAR_4->transportt);

 if (VAR_5->f->phy_setup)
  VAR_5->f->phy_setup(VAR_3);

 return 0;
}
