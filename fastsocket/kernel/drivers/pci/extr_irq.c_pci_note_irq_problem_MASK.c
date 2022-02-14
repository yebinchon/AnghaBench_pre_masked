
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct pci_dev {TYPE_1__ dev; int device; int vendor; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*,char*,...) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1, const char *VAR_2)
{
 struct pci_dev *VAR_3 = FUNC_3(VAR_1->dev.parent);

 FUNC_2(VAR_0, &VAR_1->dev,
     "Potentially misrouted IRQ (Bridge %s %04x:%04x)\n",
     FUNC_1(&VAR_3->dev), VAR_3->vendor, VAR_3->device);
 FUNC_2(VAR_0, &VAR_1->dev, "%s\n", VAR_2);
 FUNC_2(VAR_0, &VAR_1->dev, "Please report to linux-kernel@vger.kernel.org\n");
 FUNC_0(1);
}
