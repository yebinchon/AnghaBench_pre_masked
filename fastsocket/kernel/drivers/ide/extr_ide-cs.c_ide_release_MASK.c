
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {TYPE_1__* priv; } ;
struct ide_host {int dummy; } ;
struct TYPE_2__ {scalar_t__ ndev; struct ide_host* host; } ;
typedef TYPE_1__ ide_info_t ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (struct ide_host*) ;
 int FUNC_2 (struct pcmcia_device*) ;

__attribute__((used)) static void FUNC_3(struct pcmcia_device *VAR_0)
{
    ide_info_t *VAR_1 = VAR_0->priv;
    struct ide_host *VAR_2 = VAR_1->host;

    FUNC_0(0, "ide_release(0x%p)\n", VAR_0);

    if (VAR_1->ndev)


 FUNC_1(VAR_2);

    VAR_1->ndev = 0;

    FUNC_2(VAR_0);
}
