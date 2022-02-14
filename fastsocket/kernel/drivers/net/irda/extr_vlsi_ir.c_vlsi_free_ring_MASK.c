
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlsi_ring {unsigned int size; int dir; int len; int pdev; struct ring_descr* rd; } ;
struct ring_descr {struct vlsi_ring* buf; scalar_t__ skb; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct vlsi_ring*) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (struct ring_descr*) ;
 int FUNC_4 (struct ring_descr*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct vlsi_ring *VAR_0)
{
 struct ring_descr *VAR_1;
 unsigned VAR_2;
 dma_addr_t VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->size; VAR_2++) {
  VAR_1 = VAR_0->rd + VAR_2;
  if (VAR_1->skb)
   FUNC_0(VAR_1->skb);
  VAR_3 = FUNC_3(VAR_1);
  FUNC_4(VAR_1, 0, 0);
  if (VAR_3)
   FUNC_2(VAR_0->pdev, VAR_3, VAR_0->len, VAR_0->dir);
  FUNC_1(VAR_1->buf);
 }
 FUNC_1(VAR_0);
 return 0;
}
