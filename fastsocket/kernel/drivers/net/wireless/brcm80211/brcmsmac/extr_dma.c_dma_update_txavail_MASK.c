
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int skb_list; } ;
struct TYPE_3__ {scalar_t__ txavail; } ;
struct dma_info {TYPE_2__ ampdu_session; int txout; int txin; scalar_t__ ntxd; TYPE_1__ dma; } ;


 scalar_t__ FUNC_0 (struct dma_info*,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dma_info *VAR_0)
{




 VAR_0->dma.txavail = VAR_0->ntxd - FUNC_0(VAR_0, VAR_0->txin, VAR_0->txout) -
     FUNC_1(&VAR_0->ampdu_session.skb_list) - 1;
}
