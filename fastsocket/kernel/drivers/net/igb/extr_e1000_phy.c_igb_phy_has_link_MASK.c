
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {scalar_t__ (* read_reg ) (struct e1000_hw*,int ,scalar_t__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;

s32 FUNC_4(struct e1000_hw *VAR_2, u32 VAR_3,
       u32 VAR_4, bool *VAR_5)
{
 s32 VAR_6 = 0;
 u16 VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {




  VAR_6 = VAR_2->phy.ops.read_reg(VAR_2, VAR_1, &VAR_8);
  if (VAR_6 && VAR_4 > 0) {




   FUNC_3(VAR_4);
  }
  VAR_6 = VAR_2->phy.ops.read_reg(VAR_2, VAR_1, &VAR_8);
  if (VAR_6)
   break;
  if (VAR_8 & VAR_0)
   break;
  if (VAR_4 >= 1000)
   FUNC_0(VAR_4/1000);
  else
   FUNC_3(VAR_4);
 }

 *VAR_5 = (VAR_7 < VAR_3) ? 1 : 0;

 return VAR_6;
}
