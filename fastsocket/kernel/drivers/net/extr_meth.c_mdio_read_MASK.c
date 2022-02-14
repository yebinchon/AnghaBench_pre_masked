
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct meth_private {int phy_addr; } ;
struct TYPE_3__ {int phy_regs; int phy_trans_go; } ;
struct TYPE_4__ {TYPE_1__ eth; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static unsigned long FUNC_2(struct meth_private *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;
 FUNC_0(VAR_4);
 VAR_1->eth.phy_regs = (VAR_2->phy_addr << 5) | (VAR_3 & 0x1f);
 FUNC_1(25);
 VAR_1->eth.phy_trans_go = 1;
 FUNC_1(25);
 FUNC_0(VAR_4);
 return VAR_4 & VAR_0;
}
