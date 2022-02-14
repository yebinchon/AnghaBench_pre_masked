
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct TYPE_3__ {TYPE_2__ ops; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_3, u16 VAR_4,
      u16 *VAR_5, bool VAR_6)
{
 s32 VAR_7 = VAR_2;

 VAR_7 = VAR_3->phy.ops.write_reg(VAR_3, VAR_0, VAR_4);
 if (VAR_7)
  return VAR_7;

 if (VAR_6)
  VAR_7 = VAR_3->phy.ops.read_reg(VAR_3, VAR_1, VAR_5);
 else
  VAR_7 = VAR_3->phy.ops.write_reg(VAR_3, VAR_1, *VAR_5);

 return VAR_7;
}
