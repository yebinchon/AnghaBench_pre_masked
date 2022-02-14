
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int config; int config_base; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct pci_dev {int dummy; } ;
struct intel_uncore_box {struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct intel_uncore_box *VAR_1, struct perf_event *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_1->pci_dev;
 struct hw_perf_event *VAR_4 = &VAR_2->hw;

 FUNC_0(VAR_3, VAR_4->config_base, VAR_4->config | VAR_0);
}
