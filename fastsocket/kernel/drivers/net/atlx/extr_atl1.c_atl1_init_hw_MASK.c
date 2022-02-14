
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct atl1_hw {int phy_configured; scalar_t__ hw_addr; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct atl1_hw*) ;
 scalar_t__ FUNC_1 (struct atl1_hw*) ;
 scalar_t__ FUNC_2 (struct atl1_hw*) ;
 scalar_t__ FUNC_3 (struct atl1_hw*,int,int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static s32 FUNC_5(struct atl1_hw *VAR_1)
{
 u32 VAR_2 = 0;


 FUNC_4(0, VAR_1->hw_addr + VAR_0);

 FUNC_4(0, (VAR_1->hw_addr + VAR_0) + (1 << 2));

 FUNC_0(VAR_1);

 if (!VAR_1->phy_configured) {

  VAR_2 = FUNC_3(VAR_1, 18, 0xC00);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_2(VAR_1);
 }
 return VAR_2;
}
