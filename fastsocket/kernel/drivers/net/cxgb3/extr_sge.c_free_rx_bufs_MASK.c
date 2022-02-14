
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * page; } ;
struct sge_fl {unsigned int cidx; unsigned int size; TYPE_1__ pg_chunk; int order; struct rx_sw_desc* sdesc; int credits; } ;
struct rx_sw_desc {int dummy; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct pci_dev*,struct sge_fl*,struct rx_sw_desc*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0, struct sge_fl *VAR_1)
{
 unsigned int VAR_2 = VAR_1->cidx;

 while (VAR_1->credits--) {
  struct rx_sw_desc *VAR_3 = &VAR_1->sdesc[VAR_2];


  FUNC_1(VAR_0, VAR_1, VAR_3);
  if (++VAR_2 == VAR_1->size)
   VAR_2 = 0;
 }

 if (VAR_1->pg_chunk.page) {
  FUNC_0(VAR_1->pg_chunk.page, VAR_1->order);
  VAR_1->pg_chunk.page = ((void*)0);
 }
}
