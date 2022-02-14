
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8192_tx_ring {int entries; int queue; } ;
struct r8192_priv {struct rtl8192_tx_ring* tx_ring; } ;
struct net_device {int dummy; } ;


 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;

short FUNC_2(struct net_device *VAR_0, int VAR_1)
{
    struct r8192_priv *VAR_2 = FUNC_0(VAR_0);
    struct rtl8192_tx_ring *VAR_3 = &VAR_2->tx_ring[VAR_1];




    if (VAR_3->entries - FUNC_1(&VAR_3->queue) >= 2) {
        return 1;
    } else {
        return 0;
    }
}
