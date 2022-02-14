
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int class; int irq; int dev; int pin; } ;
struct acpi_prt_entry {int index; scalar_t__ link; } ;
typedef int link_desc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct acpi_prt_entry* FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (scalar_t__,int,int*,int*,char**) ;
 int FUNC_3 (int *,int,int,int) ;
 int FUNC_4 (int *,char*,int ,char*,int,char*,char*,int) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,int,char*,char*) ;

int FUNC_10(struct pci_dev *VAR_4)
{
 struct acpi_prt_entry *VAR_5;
 int VAR_6;
 u8 VAR_7;
 int VAR_8 = VAR_2;
 int VAR_9 = VAR_0;
 char *VAR_10 = ((void*)0);
 char VAR_11[16];
 int VAR_12;

 VAR_7 = VAR_4->pin;
 if (!VAR_7) {
  FUNC_0((VAR_1,
      "No interrupt pin configured for device %s\n",
      FUNC_6(VAR_4)));
  return 0;
 }

 VAR_5 = FUNC_1(VAR_4, VAR_7);
 if (!VAR_5) {




  if (VAR_4->class >> 8 == VAR_3 &&
    (VAR_4->class & 0x05) == 0)
   return 0;
 }

 if (VAR_5) {
  if (VAR_5->link)
   VAR_6 = FUNC_2(VAR_5->link,
        VAR_5->index,
        &VAR_8, &VAR_9,
        &VAR_10);
  else
   VAR_6 = VAR_5->index;
 } else
  VAR_6 = -1;





 if (VAR_6 < 0) {
  FUNC_5(&VAR_4->dev, "PCI INT %c: no GSI", FUNC_7(VAR_7));

  if (VAR_4->irq > 0 && (VAR_4->irq <= 0xF)) {
   FUNC_8(" - using IRQ %d\n", VAR_4->irq);
   FUNC_3(&VAR_4->dev, VAR_4->irq,
       VAR_2,
       VAR_0);
   return 0;
  } else {
   FUNC_8("\n");
   return 0;
  }
 }

 VAR_12 = FUNC_3(&VAR_4->dev, VAR_6, VAR_8, VAR_9);
 if (VAR_12 < 0) {
  FUNC_5(&VAR_4->dev, "PCI INT %c: failed to register GSI\n",
    FUNC_7(VAR_7));
  return VAR_12;
 }
 VAR_4->irq = VAR_12;

 if (VAR_10)
  FUNC_9(VAR_11, sizeof(VAR_11), " -> Link[%s]", VAR_10);
 else
  VAR_11[0] = '\0';

 FUNC_4(&VAR_4->dev, "PCI INT %c%s -> GSI %u (%s, %s) -> IRQ %d\n",
   FUNC_7(VAR_7), VAR_11, VAR_6,
   (VAR_8 == VAR_2) ? "level" : "edge",
   (VAR_9 == VAR_0) ? "low" : "high", VAR_4->irq);

 return 0;
}
