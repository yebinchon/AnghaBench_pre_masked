
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int class; int pin; int dev; TYPE_1__* bus; } ;
struct acpi_prt_entry {int dummy; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct acpi_prt_entry* FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static struct acpi_prt_entry *FUNC_6(struct pci_dev *VAR_2, int VAR_3)
{
 struct acpi_prt_entry *VAR_4;
 struct pci_dev *VAR_5;
 u8 VAR_6, VAR_7 = VAR_3;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0((VAR_0, "Found %s[%c] _PRT entry\n",
      FUNC_3(VAR_2), FUNC_5(VAR_3)));
  return VAR_4;
 }





 VAR_5 = VAR_2->bus->self;
 while (VAR_5) {
  VAR_3 = FUNC_4(VAR_2, VAR_3);

  if ((VAR_5->class >> 8) == VAR_1) {

   VAR_6 = VAR_5->pin;
   if (!VAR_6) {
    FUNC_0((VAR_0,
        "No interrupt pin configured for device %s\n",
        FUNC_3(VAR_5)));
    return ((void*)0);
   }
   VAR_3 = VAR_6;
  }

  VAR_4 = FUNC_1(VAR_5, VAR_3);
  if (VAR_4) {
   FUNC_0((VAR_0,
      "Derived GSI for %s INT %c from %s\n",
      FUNC_3(VAR_2), FUNC_5(VAR_7),
      FUNC_3(VAR_5)));
   return VAR_4;
  }

  VAR_2 = VAR_5;
  VAR_5 = VAR_2->bus->self;
 }

 FUNC_2(&VAR_2->dev, "can't derive routing for PCI INT %c\n",
   FUNC_5(VAR_7));
 return ((void*)0);
}
