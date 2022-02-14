
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scc_ports {struct ide_host* host; scalar_t__ dma; } ;
struct pci_dev {int dev; int irq; } ;
struct ide_port_info {int dummy; } ;
struct ide_hw {int * dev; int irq; scalar_t__* io_ports_array; } ;
struct ide_host {int dummy; } ;
typedef int hw ;


 int FUNC_0 (struct ide_port_info const*,struct ide_hw**,int,struct ide_host**) ;
 int FUNC_1 (struct ide_hw*,int ,int) ;
 struct scc_ports* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_0,
        const struct ide_port_info *VAR_1)
{
 struct scc_ports *VAR_2 = FUNC_2(VAR_0);
 struct ide_host *VAR_3;
 struct ide_hw VAR_4, *VAR_5[] = { &VAR_4 };
 int VAR_6, VAR_7;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 for (VAR_6 = 0; VAR_6 <= 8; VAR_6++)
  VAR_4.io_ports_array[VAR_6] = VAR_2->dma + 0x20 + VAR_6 * 4;
 VAR_4.irq = VAR_0->irq;
 VAR_4.dev = &VAR_0->dev;

 VAR_7 = FUNC_0(VAR_1, VAR_5, 1, &VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_2->host = VAR_3;

 return 0;
}
