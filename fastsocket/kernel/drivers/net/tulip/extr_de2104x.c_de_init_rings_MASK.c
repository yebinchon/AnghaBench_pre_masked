
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct de_private {scalar_t__ tx_tail; scalar_t__ tx_head; scalar_t__ rx_tail; TYPE_1__* tx_ring; } ;
struct de_desc {int dummy; } ;
struct TYPE_2__ {int opts2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct de_private*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3 (struct de_private *VAR_2)
{
 FUNC_2(VAR_2->tx_ring, 0, sizeof(struct de_desc) * VAR_0);
 VAR_2->tx_ring[VAR_0 - 1].opts2 = FUNC_0(VAR_1);

 VAR_2->rx_tail = 0;
 VAR_2->tx_head = VAR_2->tx_tail = 0;

 return FUNC_1 (VAR_2);
}
