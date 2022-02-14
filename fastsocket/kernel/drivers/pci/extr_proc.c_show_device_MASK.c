
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct pci_driver {unsigned long long name; } ;
struct pci_dev {TYPE_2__* resource; int irq; int device; int vendor; int devfn; TYPE_1__* bus; } ;
typedef int resource_size_t ;
struct TYPE_4__ {int flags; scalar_t__ start; scalar_t__ end; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pci_driver* FUNC_0 (struct pci_dev const*) ;
 int FUNC_1 (struct pci_dev const*,int,TYPE_2__*,int*,int*) ;
 int FUNC_2 (struct seq_file*,char*,unsigned long long,...) ;
 int FUNC_3 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_2, void *VAR_3)
{
 const struct pci_dev *VAR_4 = VAR_3;
 const struct pci_driver *VAR_5;
 int VAR_6;

 if (VAR_4 == ((void*)0))
  return 0;

 VAR_5 = FUNC_0(VAR_4);
 FUNC_2(VAR_2, "%02x%02x\t%04x%04x\t%x",
   VAR_4->bus->number,
   VAR_4->devfn,
   VAR_4->vendor,
   VAR_4->device,
   VAR_4->irq);


 for (VAR_6 = 0; VAR_6 <= VAR_1; VAR_6++) {
  resource_size_t VAR_7, VAR_8;
  FUNC_1(VAR_4, VAR_6, &VAR_4->resource[VAR_6], &VAR_7, &VAR_8);
  FUNC_2(VAR_2, "\t%16llx",
   (unsigned long long)(VAR_7 |
   (VAR_4->resource[VAR_6].flags & VAR_0)));
 }
 for (VAR_6 = 0; VAR_6 <= VAR_1; VAR_6++) {
  resource_size_t VAR_9, VAR_10;
  FUNC_1(VAR_4, VAR_6, &VAR_4->resource[VAR_6], &VAR_9, &VAR_10);
  FUNC_2(VAR_2, "\t%16llx",
   VAR_4->resource[VAR_6].start < VAR_4->resource[VAR_6].end ?
   (unsigned long long)(VAR_10 - VAR_9) + 1 : 0);
 }
 FUNC_3(VAR_2, '\t');
 if (VAR_5)
  FUNC_2(VAR_2, "%s", VAR_5->name);
 FUNC_3(VAR_2, '\n');
 return 0;
}
