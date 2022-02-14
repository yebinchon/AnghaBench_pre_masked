
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_internal {TYPE_1__* dft; } ;
struct domain_device {int dummy; } ;
struct ata_port {struct domain_device* private_data; } ;
struct ata_link {struct ata_port* ap; } ;
struct TYPE_2__ {int (* lldd_ata_check_ready ) (struct domain_device*) ;} ;


 struct sas_internal* FUNC_0 (struct domain_device*) ;
 int FUNC_1 (struct domain_device*) ;

__attribute__((used)) static int FUNC_2(struct ata_link *VAR_0)
{
 struct ata_port *VAR_1 = VAR_0->ap;
 struct domain_device *VAR_2 = VAR_1->private_data;
 struct sas_internal *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->dft->lldd_ata_check_ready)
  return VAR_3->dft->lldd_ata_check_ready(VAR_2);
 else {




  return 1;
 }
}
