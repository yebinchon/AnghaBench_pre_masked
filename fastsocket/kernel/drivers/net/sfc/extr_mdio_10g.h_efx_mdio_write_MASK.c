
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prtad; int (* mdio_write ) (int ,int ,int,int,int) ;} ;
struct efx_nic {TYPE_1__ mdio; int net_dev; } ;


 int FUNC_0 (int ,int ,int,int,int) ;

__attribute__((used)) static inline void
FUNC_1(struct efx_nic *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 VAR_0->mdio.mdio_write(VAR_0->net_dev, VAR_0->mdio.prtad, VAR_1, VAR_2, VAR_3);
}
