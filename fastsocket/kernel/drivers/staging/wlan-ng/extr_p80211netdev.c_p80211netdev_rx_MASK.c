
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rx_bh; int nsd_rxq; } ;
typedef TYPE_1__ wlandevice_t ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (int *) ;

void FUNC_2(wlandevice_t *VAR_0, struct sk_buff *VAR_1)
{

 FUNC_0(&VAR_0->nsd_rxq, VAR_1);

 FUNC_1(&VAR_0->rx_bh);

 return;
}
