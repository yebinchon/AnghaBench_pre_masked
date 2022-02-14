
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int phy_id; } ;
struct jme_adapter {TYPE_1__ mii_if; int dev; TYPE_2__* pdev; } ;
struct TYPE_4__ {scalar_t__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct jme_adapter *VAR_10)
{
 u32 VAR_11;

 FUNC_1(VAR_10->dev,
   VAR_10->mii_if.phy_id,
   VAR_6, VAR_2 |
   VAR_4 | VAR_3);

 if (VAR_10->pdev->device == VAR_9)
  FUNC_1(VAR_10->dev,
    VAR_10->mii_if.phy_id,
    VAR_8,
    VAR_0 | VAR_1);

 VAR_11 = FUNC_0(VAR_10->dev,
    VAR_10->mii_if.phy_id,
    VAR_7);

 FUNC_1(VAR_10->dev,
   VAR_10->mii_if.phy_id,
   VAR_7, VAR_11 | VAR_5);

 return;
}
