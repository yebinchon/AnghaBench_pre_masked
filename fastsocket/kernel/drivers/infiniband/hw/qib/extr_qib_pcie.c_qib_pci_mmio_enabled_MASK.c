
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct qib_devdata {unsigned long long (* f_portcntr ) (scalar_t__,int ) ;scalar_t__ pport; } ;
struct pci_dev {int dummy; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct qib_devdata* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,char*,unsigned long long,int ) ;
 unsigned long long FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static pci_ers_result_t
FUNC_3(struct pci_dev *VAR_3)
{
 u64 VAR_4 = 0U;
 struct qib_devdata *VAR_5 = FUNC_0(VAR_3);
 pci_ers_result_t VAR_6 = VAR_1;

 if (VAR_5 && VAR_5->pport) {
  VAR_4 = VAR_5->f_portcntr(VAR_5->pport, VAR_2);
  if (VAR_4 == ~0ULL)
   VAR_6 = VAR_0;
 }
 FUNC_1(VAR_3,
  "QIB mmio_enabled function called, read wordscntr %Lx, returning %d\n",
  VAR_4, VAR_6);
 return VAR_6;
}
