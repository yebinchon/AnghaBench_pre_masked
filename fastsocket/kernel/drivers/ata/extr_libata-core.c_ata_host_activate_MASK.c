
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_template {int dummy; } ;
struct ata_host {int n_ports; int dev; int * ports; } ;
typedef int irq_handler_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ata_host*,struct scsi_host_template*) ;
 int FUNC_2 (struct ata_host*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,struct ata_host*) ;
 int FUNC_6 (int ,int,int ,unsigned long,int ,struct ata_host*) ;

int FUNC_7(struct ata_host *VAR_0, int VAR_1,
        irq_handler_t VAR_2, unsigned long VAR_3,
        struct scsi_host_template *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = FUNC_2(VAR_0);
 if (VAR_6)
  return VAR_6;


 if (!VAR_1) {
  FUNC_0(VAR_2);
  return FUNC_1(VAR_0, VAR_4);
 }

 VAR_6 = FUNC_6(VAR_0->dev, VAR_1, VAR_2, VAR_3,
         FUNC_4(VAR_0->dev), VAR_0);
 if (VAR_6)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0->n_ports; VAR_5++)
  FUNC_3(VAR_0->ports[VAR_5], "irq %d", VAR_1);

 VAR_6 = FUNC_1(VAR_0, VAR_4);

 if (VAR_6)
  FUNC_5(VAR_0->dev, VAR_1, VAR_0);

 return VAR_6;
}
