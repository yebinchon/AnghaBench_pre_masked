
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct ide_port_info {int dummy; } ;
struct ide_hw {int irq; } ;
struct ide_host {int irq_flags; void* host_priv; int ** dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,struct ide_port_info const*,int) ;
 struct ide_host* FUNC_1 (struct ide_port_info const*,struct ide_hw**,int) ;
 int FUNC_2 (struct ide_host*) ;
 int FUNC_3 (struct ide_host*,struct ide_port_info const*,struct ide_hw**) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,struct ide_port_info const*,struct ide_hw*,struct ide_hw**) ;
 int FUNC_6 (struct pci_dev*,struct ide_port_info const*,int) ;
 void* FUNC_7 (struct pci_dev*,int) ;
 int FUNC_8 (struct pci_dev*,struct ide_host*) ;

int FUNC_9(struct pci_dev *VAR_2, struct pci_dev *VAR_3,
       const struct ide_port_info *VAR_4, void *VAR_5)
{
 struct pci_dev *VAR_6[] = { VAR_2, VAR_3 };
 struct ide_host *VAR_7;
 int VAR_8, VAR_9, VAR_10 = VAR_3 ? 4 : 2;
 struct ide_hw VAR_11[4], *VAR_12[] = { ((void*)0), ((void*)0), ((void*)0), ((void*)0) };

 for (VAR_9 = 0; VAR_9 < VAR_10 / 2; VAR_9++) {
  VAR_8 = FUNC_6(VAR_6[VAR_9], VAR_4, !VAR_9);
  if (VAR_8 < 0)
   goto out;

  FUNC_5(VAR_6[VAR_9], VAR_4, &VAR_11[VAR_9*2], &VAR_12[VAR_9*2]);
 }

 VAR_7 = FUNC_1(VAR_4, VAR_12, VAR_10);
 if (VAR_7 == ((void*)0)) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_7->dev[0] = &VAR_2->dev;
 if (VAR_3)
  VAR_7->dev[1] = &VAR_3->dev;

 VAR_7->host_priv = VAR_5;
 VAR_7->irq_flags = VAR_1;

 FUNC_8(VAR_6[0], VAR_7);
 if (VAR_3)
  FUNC_8(VAR_6[1], VAR_7);

 for (VAR_9 = 0; VAR_9 < VAR_10 / 2; VAR_9++) {
  VAR_8 = FUNC_0(VAR_6[VAR_9], VAR_4, !VAR_9);





  if (VAR_8 < 0)
   goto out;


  if (FUNC_4(VAR_6[VAR_9])) {
   VAR_11[VAR_9*2].irq = FUNC_7(VAR_6[VAR_9], 0);
   VAR_11[VAR_9*2 + 1].irq = FUNC_7(VAR_6[VAR_9], 1);
  } else
   VAR_11[VAR_9*2 + 1].irq = VAR_11[VAR_9*2].irq = VAR_8;
 }

 VAR_8 = FUNC_3(VAR_7, VAR_4, VAR_12);
 if (VAR_8)
  FUNC_2(VAR_7);
out:
 return VAR_8;
}
