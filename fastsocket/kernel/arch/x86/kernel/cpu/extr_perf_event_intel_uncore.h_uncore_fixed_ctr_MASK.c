
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore_box {scalar_t__ pci_dev; } ;


 int FUNC_0 (struct intel_uncore_box*) ;
 int FUNC_1 (struct intel_uncore_box*) ;

__attribute__((used)) static inline
unsigned FUNC_2(struct intel_uncore_box *VAR_0)
{
 if (VAR_0->pci_dev)
  return FUNC_1(VAR_0);
 else
  return FUNC_0(VAR_0);
}
