
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef short u32 ;
struct r8192_priv {int txringcount; TYPE_1__* tx_ring; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ desc; } ;


 int VAR_0 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 short FUNC_1 (struct net_device*) ;
 short FUNC_2 (struct net_device*,int,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int) ;

__attribute__((used)) static short FUNC_5(struct net_device *VAR_1)
{
    u32 VAR_2;
    int VAR_3;
    struct r8192_priv *VAR_4 = FUNC_0(VAR_1);

    VAR_2 = FUNC_1(VAR_1);
    if (VAR_2) {
        return VAR_2;
    }



    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        if ((VAR_2 = FUNC_2(VAR_1, VAR_3, VAR_4->txringcount)))
            goto err_free_rings;
    }







    return 0;

err_free_rings:
    FUNC_3(VAR_1);
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        if (VAR_4->tx_ring[VAR_3].desc)
            FUNC_4(VAR_1, VAR_3);
    return 1;
}
