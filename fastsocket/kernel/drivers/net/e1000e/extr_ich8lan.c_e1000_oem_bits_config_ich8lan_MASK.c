
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* release ) (struct e1000_hw*) ;int (* check_reset_block ) (struct e1000_hw*) ;scalar_t__ (* acquire ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;
 int FUNC_5 (struct e1000_hw*) ;

__attribute__((used)) static s32 FUNC_6(struct e1000_hw *VAR_14, bool VAR_15)
{
 s32 VAR_16 = 0;
 u32 VAR_17;
 u16 VAR_18;

 if (VAR_14->mac.type < VAR_13)
  return VAR_16;

 VAR_16 = VAR_14->phy.ops.acquire(VAR_14);
 if (VAR_16)
  return VAR_16;

 if (VAR_14->mac.type == VAR_13) {
  VAR_17 = FUNC_2(VAR_6);
  if (VAR_17 & VAR_0)
   goto release;
 }

 VAR_17 = FUNC_2(VAR_7);
 if (!(VAR_17 & VAR_1))
  goto release;

 VAR_17 = FUNC_2(VAR_12);

 VAR_16 = FUNC_0(VAR_14, VAR_8, &VAR_18);
 if (VAR_16)
  goto release;

 VAR_18 &= ~(VAR_9 | VAR_10);

 if (VAR_15) {
  if (VAR_17 & VAR_3)
   VAR_18 |= VAR_9;

  if (VAR_17 & VAR_2)
   VAR_18 |= VAR_10;
 } else {
  if (VAR_17 & (VAR_3 |
          VAR_4))
   VAR_18 |= VAR_9;

  if (VAR_17 & (VAR_2 |
          VAR_5))
   VAR_18 |= VAR_10;
 }


 if ((VAR_15 || (VAR_14->mac.type != VAR_13)) &&
     !VAR_14->phy.ops.check_reset_block(VAR_14))
  VAR_18 |= VAR_11;

 VAR_16 = FUNC_1(VAR_14, VAR_8, VAR_18);

release:
 VAR_14->phy.ops.release(VAR_14);

 return VAR_16;
}
