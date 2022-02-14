
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ide_hw {int config; scalar_t__ dev; scalar_t__ parent; int irq; int io_ports; } ;
struct TYPE_4__ {scalar_t__ parent; } ;
struct TYPE_5__ {int config_data; TYPE_1__ gendev; scalar_t__ dev; int irq; int io_ports; } ;
typedef TYPE_2__ ide_hwif_t ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(ide_hwif_t *VAR_0, struct ide_hw *VAR_1)
{
 FUNC_0(&VAR_0->io_ports, &VAR_1->io_ports, sizeof(VAR_0->io_ports));
 VAR_0->irq = VAR_1->irq;
 VAR_0->dev = VAR_1->dev;
 VAR_0->gendev.parent = VAR_1->parent ? VAR_1->parent : VAR_1->dev;
 VAR_0->config_data = VAR_1->config;
}
