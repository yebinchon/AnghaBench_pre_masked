
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_info_t {struct Scsi_Host* host; } ;
struct pcmcia_device {struct scsi_info_t* priv; } ;
struct Scsi_Host {scalar_t__ n_io_port; scalar_t__ io_port; scalar_t__ irq; } ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (scalar_t__,struct Scsi_Host*) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static void
FUNC_6(struct pcmcia_device *VAR_0)
{
 struct scsi_info_t *VAR_1 = VAR_0->priv;
 struct Scsi_Host *VAR_2 = VAR_1->host;

 FUNC_0(0, "SYM53C500_release(0x%p)\n", VAR_0);




 FUNC_5(VAR_2);





 if (VAR_2->irq)
  FUNC_1(VAR_2->irq, VAR_2);
 if (VAR_2->io_port && VAR_2->n_io_port)
  FUNC_3(VAR_2->io_port, VAR_2->n_io_port);

 FUNC_2(VAR_0);

 FUNC_4(VAR_2);
}
