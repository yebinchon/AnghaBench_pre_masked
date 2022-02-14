
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge {TYPE_1__* adapter; } ;
struct pci_dev {int dummy; } ;
struct cmdQ_ce {scalar_t__ skb; } ;
struct cmdQ {unsigned int cidx; unsigned int in_use; int sop; unsigned int size; struct cmdQ_ce* centries; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct cmdQ_ce*,int ) ;
 int FUNC_3 (struct cmdQ_ce*,int ) ;
 int FUNC_4 (struct pci_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct sge *VAR_3, struct cmdQ *VAR_4, unsigned int VAR_5)
{
 struct cmdQ_ce *VAR_6;
 struct pci_dev *VAR_7 = VAR_3->adapter->pdev;
 unsigned int VAR_8 = VAR_4->cidx;

 VAR_4->in_use -= VAR_5;
 VAR_6 = &VAR_4->centries[VAR_8];
 while (VAR_5--) {
  if (FUNC_1(FUNC_3(VAR_6, VAR_2))) {
   FUNC_4(VAR_7, FUNC_2(VAR_6, VAR_1),
      FUNC_3(VAR_6, VAR_2),
      VAR_0);
   if (VAR_4->sop)
    VAR_4->sop = 0;
  }
  if (VAR_6->skb) {
   FUNC_0(VAR_6->skb);
   VAR_4->sop = 1;
  }
  VAR_6++;
  if (++VAR_8 == VAR_4->size) {
   VAR_8 = 0;
   VAR_6 = VAR_4->centries;
  }
 }
 VAR_4->cidx = VAR_8;
}
