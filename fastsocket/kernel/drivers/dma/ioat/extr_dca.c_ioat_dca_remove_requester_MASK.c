
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ioat_dca_priv {int max_requesters; int requester_count; TYPE_1__* req_slots; scalar_t__ dca_base; } ;
struct device {int * bus; } ;
struct dca_provider {int dummy; } ;
struct TYPE_2__ {scalar_t__ rid; struct pci_dev* pdev; } ;


 int VAR_0 ;
 struct ioat_dca_priv* FUNC_0 (struct dca_provider*) ;
 int VAR_1 ;
 struct pci_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct dca_provider *VAR_2,
         struct device *VAR_3)
{
 struct ioat_dca_priv *VAR_4 = FUNC_0(VAR_2);
 struct pci_dev *VAR_5;
 int VAR_6;


 if (VAR_3->bus != &VAR_1)
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_4->max_requesters; VAR_6++) {
  if (VAR_4->req_slots[VAR_6].pdev == VAR_5) {
   FUNC_2(0, VAR_4->dca_base + (VAR_6 * 4));
   VAR_4->req_slots[VAR_6].pdev = ((void*)0);
   VAR_4->req_slots[VAR_6].rid = 0;
   VAR_4->requester_count--;
   return VAR_6;
  }
 }
 return -VAR_0;
}
