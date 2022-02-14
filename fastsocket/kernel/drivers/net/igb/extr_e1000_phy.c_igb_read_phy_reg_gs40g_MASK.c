
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* release ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;

s32 FUNC_4(struct e1000_hw *VAR_3, u32 VAR_4, u16 *VAR_5)
{
 s32 VAR_6;
 u16 VAR_7 = VAR_4 >> VAR_2;

 VAR_4 = VAR_4 & VAR_0;
 VAR_6 = VAR_3->phy.ops.acquire(VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_1, VAR_7);
 if (VAR_6)
  goto release;
 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);

release:
 VAR_3->phy.ops.release(VAR_3);
 return VAR_6;
}
