
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_id; } ;
struct jme_adapter {TYPE_1__ mii_if; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct jme_adapter *VAR_2)
{
 FUNC_0(VAR_2->dev, VAR_2->mii_if.phy_id, VAR_1, VAR_0);
}
