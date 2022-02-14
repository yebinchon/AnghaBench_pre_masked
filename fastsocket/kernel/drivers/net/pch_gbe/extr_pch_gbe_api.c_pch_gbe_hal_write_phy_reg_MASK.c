
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pch_gbe_hw {TYPE_1__* func; } ;
typedef int s32 ;
struct TYPE_2__ {int (* write_phy_reg ) (struct pch_gbe_hw*,int ,int ) ;} ;


 int FUNC_0 (struct pch_gbe_hw*,int ,int ) ;

inline s32 FUNC_1(struct pch_gbe_hw *VAR_0, u32 VAR_1,
     u16 VAR_2)
{
 if (!VAR_0->func->write_phy_reg)
  return 0;
 return VAR_0->func->write_phy_reg(VAR_0, VAR_1, VAR_2);
}
