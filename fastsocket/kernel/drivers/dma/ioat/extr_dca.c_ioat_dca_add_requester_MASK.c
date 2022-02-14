
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ioat_dca_priv {int requester_count; int max_requesters; scalar_t__ dca_base; TYPE_1__* req_slots; } ;
struct device {int * bus; } ;
struct dca_provider {int dummy; } ;
struct TYPE_2__ {int rid; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ioat_dca_priv* FUNC_0 (struct dca_provider*) ;
 int FUNC_1 (struct pci_dev*) ;
 int VAR_2 ;
 struct pci_dev* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct dca_provider *VAR_3, struct device *VAR_4)
{
 struct ioat_dca_priv *VAR_5 = FUNC_0(VAR_3);
 struct pci_dev *VAR_6;
 int VAR_7;
 u16 VAR_8;


 if (VAR_4->bus != &VAR_2)
  return -VAR_1;
 VAR_6 = FUNC_2(VAR_4);
 VAR_8 = FUNC_1(VAR_6);

 if (VAR_5->requester_count == VAR_5->max_requesters)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_5->max_requesters; VAR_7++) {
  if (VAR_5->req_slots[VAR_7].pdev == ((void*)0)) {

   VAR_5->requester_count++;
   VAR_5->req_slots[VAR_7].pdev = VAR_6;
   VAR_5->req_slots[VAR_7].rid = VAR_8;
   FUNC_4(VAR_8, VAR_5->dca_base + (VAR_7 * 4));

   FUNC_3(0, VAR_5->dca_base + (VAR_7 * 4) + 2);
   return VAR_7;
  }
 }

 return -VAR_0;
}
