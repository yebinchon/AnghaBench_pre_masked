
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_fl {size_t cidx; size_t size; int avail; struct rx_sw_desc* sdesc; } ;
struct rx_sw_desc {int * page; } ;
struct adapter {int pdev_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct rx_sw_desc*) ;
 int FUNC_2 (struct rx_sw_desc*) ;
 scalar_t__ FUNC_3 (struct rx_sw_desc*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct adapter *VAR_1, struct sge_fl *VAR_2, int VAR_3)
{
 while (VAR_3--) {
  struct rx_sw_desc *VAR_4 = &VAR_2->sdesc[VAR_2->cidx];

  if (FUNC_3(VAR_4))
   FUNC_0(VAR_1->pdev_dev, FUNC_1(VAR_4),
           FUNC_2(VAR_4), VAR_0);
  FUNC_4(VAR_4->page);
  VAR_4->page = ((void*)0);
  if (++VAR_2->cidx == VAR_2->size)
   VAR_2->cidx = 0;
  VAR_2->avail--;
 }
}
