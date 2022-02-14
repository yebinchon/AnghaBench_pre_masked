
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sv_cable_table {scalar_t__ device; scalar_t__ subvendor; int (* cable_detect ) (struct ata_port*) ;} ;
struct pci_dev {scalar_t__ device; scalar_t__ subsystem_vendor; } ;
struct ata_port {TYPE_1__* host; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 struct sv_cable_table* VAR_1 ;
 int FUNC_1 (struct ata_port*) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ata_port *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_2(VAR_2->host->dev);
 struct sv_cable_table *VAR_4 = VAR_1;

 while(VAR_4->device) {
  if (VAR_4->device == VAR_3->device &&
      (VAR_4->subvendor == VAR_3->subsystem_vendor ||
        VAR_4->subvendor == VAR_0)) {
   return VAR_4->cable_detect(VAR_2);
  }
  VAR_4++;
 }

 FUNC_0();
 return -1;
}
