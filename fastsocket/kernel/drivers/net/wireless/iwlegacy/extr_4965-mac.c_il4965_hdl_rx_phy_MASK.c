
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int raw; } ;
struct il_rx_pkt {TYPE_2__ u; } ;
struct il_rx_phy_res {int dummy; } ;
struct il_rx_buf {int dummy; } ;
struct TYPE_3__ {int last_phy_res_valid; int last_phy_res; int ampdu_ref; } ;
struct il_priv {TYPE_1__ _4965; } ;


 int FUNC_0 (int *,int ,int) ;
 struct il_rx_pkt* FUNC_1 (struct il_rx_buf*) ;

__attribute__((used)) static void
FUNC_2(struct il_priv *VAR_0, struct il_rx_buf *VAR_1)
{
 struct il_rx_pkt *VAR_2 = FUNC_1(VAR_1);
 VAR_0->_4965.last_phy_res_valid = 1;
 VAR_0->_4965.ampdu_ref++;
 FUNC_0(&VAR_0->_4965.last_phy_res, VAR_2->u.raw,
        sizeof(struct il_rx_phy_res));
}
