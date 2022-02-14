
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct TYPE_2__ {scalar_t__ md_template; } ;
struct netxen_adapter {TYPE_1__ mdump; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*,int *) ;

__attribute__((used)) static void
FUNC_2(struct netxen_adapter *VAR_8)
{
 struct pci_dev *VAR_9 = VAR_8->pdev;
 struct device *VAR_10 = &VAR_9->dev;

 FUNC_1(VAR_10, &VAR_4);
 FUNC_0(VAR_10, &VAR_0);
 FUNC_0(VAR_10, &VAR_3);

 if (VAR_8->mdump.md_template) {
  FUNC_0(VAR_10, &VAR_2);
  FUNC_1(VAR_10, &VAR_6);
  FUNC_1(VAR_10, &VAR_5);
  FUNC_1(VAR_10, &VAR_7);
  FUNC_0(VAR_10, &VAR_1);
 }
}
