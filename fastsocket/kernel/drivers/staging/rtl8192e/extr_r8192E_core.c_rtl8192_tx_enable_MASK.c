
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct r8192_priv {int ieee80211; TYPE_1__* tx_ring; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int dma; } ;


 size_t VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*,int ,int ) ;

void FUNC_3(struct net_device *VAR_2)
{
    struct r8192_priv *VAR_3 = (struct r8192_priv *)FUNC_0(VAR_2);
    u32 VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
        FUNC_2(VAR_2, VAR_1[VAR_4], VAR_3->tx_ring[VAR_4].dma);

    FUNC_1(VAR_3->ieee80211);
}
