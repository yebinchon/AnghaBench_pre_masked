
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int phy_id; } ;
struct nic {TYPE_5__* mem; TYPE_4__ mii; TYPE_3__* csr; TYPE_1__* pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
struct TYPE_10__ {int dump_buf; } ;
struct TYPE_7__ {int status; int cmd_lo; int cmd_hi; } ;
struct TYPE_8__ {TYPE_2__ scb; } ;
struct TYPE_6__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nic*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*,int ,int) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int) ;
 struct nic* FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_2,
 struct ethtool_regs *VAR_3, void *VAR_4)
{
 struct nic *VAR_5 = FUNC_7(VAR_2);
 u32 *VAR_6 = VAR_4;
 int VAR_7;

 VAR_3->version = (1 << 24) | VAR_5->pdev->revision;
 VAR_6[0] = FUNC_2(&VAR_5->csr->scb.cmd_hi) << 24 |
  FUNC_2(&VAR_5->csr->scb.cmd_lo) << 16 |
  FUNC_1(&VAR_5->csr->scb.status);
 for (VAR_7 = VAR_0; VAR_7 >= 0; VAR_7--)
  VAR_6[1 + VAR_0 - VAR_7] =
   FUNC_3(VAR_2, VAR_5->mii.phy_id, VAR_7);
 FUNC_5(VAR_5->mem->dump_buf, 0, sizeof(VAR_5->mem->dump_buf));
 FUNC_0(VAR_5, ((void*)0), VAR_1);
 FUNC_6(10);
 FUNC_4(&VAR_6[2 + VAR_0], VAR_5->mem->dump_buf,
  sizeof(VAR_5->mem->dump_buf));
}
