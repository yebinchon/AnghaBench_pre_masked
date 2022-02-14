
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_internal {TYPE_1__* dft; } ;
struct domain_device {int dummy; } ;
struct ata_port {struct domain_device* private_data; } ;
struct ata_device {int dummy; } ;
struct TYPE_2__ {int (* lldd_ata_set_dmamode ) (struct domain_device*) ;} ;


 struct sas_internal* FUNC_0 (struct domain_device*) ;
 int FUNC_1 (struct domain_device*) ;

__attribute__((used)) static void FUNC_2(struct ata_port *VAR_0, struct ata_device *VAR_1)
{
 struct domain_device *VAR_2 = VAR_0->private_data;
 struct sas_internal *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->dft->lldd_ata_set_dmamode)
  VAR_3->dft->lldd_ata_set_dmamode(VAR_2);
}
