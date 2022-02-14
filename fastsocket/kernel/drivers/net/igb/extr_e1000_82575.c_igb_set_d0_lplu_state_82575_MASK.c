
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int ) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int *) ;} ;
struct e1000_phy_info {scalar_t__ smart_speed; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int ) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_8 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_9(struct e1000_hw *VAR_6, bool VAR_7)
{
 struct e1000_phy_info *VAR_8 = &VAR_6->phy;
 s32 VAR_9;
 u16 VAR_10;

 VAR_9 = VAR_8->ops.read_reg(VAR_6, VAR_2, &VAR_10);
 if (VAR_9)
  goto out;

 if (VAR_7) {
  VAR_10 |= VAR_3;
  VAR_9 = VAR_8->ops.write_reg(VAR_6, VAR_2,
       VAR_10);
  if (VAR_9)
   goto out;


  VAR_9 = VAR_8->ops.read_reg(VAR_6, VAR_0,
      &VAR_10);
  VAR_10 &= ~VAR_1;
  VAR_9 = VAR_8->ops.write_reg(VAR_6, VAR_0,
       VAR_10);
  if (VAR_9)
   goto out;
 } else {
  VAR_10 &= ~VAR_3;
  VAR_9 = VAR_8->ops.write_reg(VAR_6, VAR_2,
       VAR_10);





  if (VAR_8->smart_speed == VAR_5) {
   VAR_9 = VAR_8->ops.read_reg(VAR_6,
     VAR_0, &VAR_10);
   if (VAR_9)
    goto out;

   VAR_10 |= VAR_1;
   VAR_9 = VAR_8->ops.write_reg(VAR_6,
     VAR_0, VAR_10);
   if (VAR_9)
    goto out;
  } else if (VAR_8->smart_speed == VAR_4) {
   VAR_9 = VAR_8->ops.read_reg(VAR_6,
     VAR_0, &VAR_10);
   if (VAR_9)
    goto out;

   VAR_10 &= ~VAR_1;
   VAR_9 = VAR_8->ops.write_reg(VAR_6,
     VAR_0, VAR_10);
   if (VAR_9)
    goto out;
  }
 }

out:
 return VAR_9;
}
