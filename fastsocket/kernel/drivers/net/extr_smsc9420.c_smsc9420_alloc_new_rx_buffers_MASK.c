
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc9420_pdata {int rx_ring_tail; int rx_ring_head; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct smsc9420_pdata*,int) ;

__attribute__((used)) static void FUNC_1(struct smsc9420_pdata *VAR_1)
{
 while (VAR_1->rx_ring_tail != VAR_1->rx_ring_head) {
  if (FUNC_0(VAR_1, VAR_1->rx_ring_tail))
   break;

  VAR_1->rx_ring_tail = (VAR_1->rx_ring_tail + 1) % VAR_0;
 }
}
