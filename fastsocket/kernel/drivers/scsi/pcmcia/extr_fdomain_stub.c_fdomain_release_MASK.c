
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__* priv; } ;
struct TYPE_2__ {int host; } ;
typedef TYPE_1__ scsi_info_t ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct pcmcia_device *VAR_0)
{
 scsi_info_t *VAR_1 = VAR_0->priv;

 FUNC_0(0, "fdomain_release(0x%p)\n", VAR_0);

 FUNC_2(VAR_1->host);
 FUNC_1(VAR_0);
 FUNC_3(VAR_1->host);
}
