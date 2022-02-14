
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_phy {int dummy; } ;
struct sas_internal {TYPE_1__* dft; } ;
struct TYPE_4__ {int command_set; } ;
struct domain_device {TYPE_2__ sata_dev; } ;
struct ata_port {int cbl; struct domain_device* private_data; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_3__ {int (* lldd_I_T_nexus_reset ) (struct domain_device*) ;} ;



 int VAR_0 ;

 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ata_link*,unsigned long,int (*) (struct ata_link*)) ;
 struct sas_internal* FUNC_1 (struct domain_device*) ;
 int FUNC_2 (struct ata_link*) ;
 int FUNC_3 (int ,struct domain_device*,char*,...) ;
 struct sas_phy* FUNC_4 (struct domain_device*) ;
 int FUNC_5 (struct sas_phy*) ;
 scalar_t__ FUNC_6 (struct sas_phy*) ;
 int FUNC_7 (struct ata_link*) ;
 int FUNC_8 (struct domain_device*) ;

__attribute__((used)) static int FUNC_9(struct ata_link *VAR_8, unsigned int *VAR_9,
         unsigned long VAR_10)
{
 int VAR_11 = 0, VAR_12;
 struct sas_phy *VAR_13;
 struct ata_port *VAR_14 = VAR_8->ap;
 int (*VAR_15)(struct ata_link *VAR_16);
 struct domain_device *VAR_17 = VAR_14->private_data;
 struct sas_internal *VAR_18 = FUNC_1(VAR_17);

 VAR_12 = VAR_18->dft->lldd_I_T_nexus_reset(VAR_17);
 if (VAR_12 == -VAR_4)
  return VAR_12;

 if (VAR_12 != VAR_7)
  FUNC_3(VAR_5, VAR_17, "Unable to reset ata device?\n");

 VAR_13 = FUNC_4(VAR_17);
 if (FUNC_6(VAR_13))
  VAR_15 = FUNC_2;
 else
  VAR_15 = FUNC_7;
 FUNC_5(VAR_13);

 VAR_11 = FUNC_0(VAR_8, VAR_10, VAR_15);
 if (VAR_11 && VAR_11 != -VAR_3)
  FUNC_3(VAR_6, VAR_17, "reset failed (errno=%d)\n", VAR_11);





 switch (VAR_17->sata_dev.command_set) {
 case 128:
  *VAR_9 = VAR_1;
  break;
 case 129:
  *VAR_9 = VAR_2;
  break;
 }

 VAR_14->cbl = VAR_0;
 return VAR_11;
}
