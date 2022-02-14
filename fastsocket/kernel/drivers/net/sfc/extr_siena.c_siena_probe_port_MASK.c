
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {scalar_t__ dma_addr; int addr; } ;
struct TYPE_4__ {int mode_support; int mdio_write; int mdio_read; } ;
struct efx_nic {TYPE_2__ stats_buffer; int net_dev; TYPE_3__* phy_op; TYPE_1__ mdio; } ;
struct TYPE_6__ {int (* probe ) (struct efx_nic*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct efx_nic*,scalar_t__,int ,int ,int) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (struct efx_nic*,TYPE_2__*,int) ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct efx_nic*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct efx_nic *VAR_7)
{
 int VAR_8;


 VAR_7->phy_op = &VAR_3;


 VAR_7->mdio.mode_support = VAR_2 | VAR_1;
 VAR_7->mdio.mdio_read = VAR_5;
 VAR_7->mdio.mdio_write = VAR_6;


 VAR_8 = VAR_7->phy_op->probe(VAR_7);
 if (VAR_8 != 0)
  return VAR_8;


 VAR_8 = FUNC_1(VAR_7, &VAR_7->stats_buffer,
      VAR_0 * sizeof(u64));
 if (VAR_8)
  return VAR_8;
 FUNC_2(VAR_7, VAR_4, VAR_7->net_dev,
    "stats buffer at %llx (virt %p phys %llx)\n",
    (u64)VAR_7->stats_buffer.dma_addr,
    VAR_7->stats_buffer.addr,
    (u64)FUNC_4(VAR_7->stats_buffer.addr));

 FUNC_0(VAR_7, VAR_7->stats_buffer.dma_addr, 0, 0, 1);

 return 0;
}
