
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int AssignedIRQ; } ;
struct pcmcia_device {TYPE_1__ irq; TYPE_2__* priv; } ;
struct TYPE_4__ {int host; } ;
typedef TYPE_2__ scsi_info_t ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pcmcia_device *VAR_0)
{
 scsi_info_t *VAR_1 = VAR_0->priv;

 FUNC_0(0, "qlogic_release(0x%p)\n", VAR_0);

 FUNC_4(VAR_1->host);

 FUNC_1(VAR_0->irq.AssignedIRQ, VAR_1->host);
 FUNC_2(VAR_0);

 FUNC_3(VAR_1->host);
}
