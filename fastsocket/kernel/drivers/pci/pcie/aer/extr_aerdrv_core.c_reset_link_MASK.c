
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcie_port_service_driver {scalar_t__ (* reset_link ) (struct pci_dev*) ;} ;
struct pci_dev {int hdr_type; int dev; TYPE_1__* bus; } ;
typedef scalar_t__ pci_ers_result_t ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int ,int *,char*,int ) ;
 struct pcie_port_service_driver* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_6(struct pci_dev *VAR_6)
{
 struct pci_dev *VAR_7;
 pci_ers_result_t VAR_8;
 struct pcie_port_service_driver *VAR_9;

 if (VAR_6->hdr_type & VAR_5) {

  VAR_7 = VAR_6;
 } else {

  VAR_7 = VAR_6->bus->self;
 }


 VAR_9 = FUNC_2(VAR_7);

 if (VAR_9 && VAR_9->reset_link) {
  VAR_8 = VAR_9->reset_link(VAR_7);
 } else if (FUNC_4(VAR_7) == VAR_3 ||
  FUNC_4(VAR_7) == VAR_4) {
  VAR_8 = FUNC_0(VAR_7);
 } else {
  FUNC_1(VAR_0, &VAR_6->dev,
   "no link-reset support at upstream device %s\n",
   FUNC_3(VAR_7));
  return VAR_1;
 }

 if (VAR_8 != VAR_2) {
  FUNC_1(VAR_0, &VAR_6->dev,
   "link reset at upstream device %s failed\n",
   FUNC_3(VAR_7));
  return VAR_1;
 }

 return VAR_8;
}
