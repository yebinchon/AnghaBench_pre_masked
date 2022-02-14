
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {scalar_t__ (* write_reg ) (struct e1000_hw*,int ,int) ;scalar_t__ (* read_reg ) (struct e1000_hw*,int ,int*) ;} ;
struct e1000_phy_info {scalar_t__ media_type; scalar_t__ id; TYPE_3__ ops; } ;
struct TYPE_4__ {int eee_disable; } ;
struct TYPE_5__ {TYPE_1__ _82575; } ;
struct e1000_hw {TYPE_2__ dev_spec; struct e1000_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int ,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int ,int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;

s32 FUNC_6(struct e1000_hw *VAR_9)
{
 struct e1000_phy_info *VAR_10 = &VAR_9->phy;
 s32 VAR_11 = 0;
 u16 VAR_12;

 if ((VAR_9->phy.media_type != VAR_8) ||
     (VAR_10->id != VAR_7))
  goto out;

 if (!VAR_9->dev_spec._82575.eee_disable) {

  VAR_11 = VAR_10->ops.write_reg(VAR_9, VAR_6, 18);
  if (VAR_11)
   goto out;

  VAR_11 = VAR_10->ops.read_reg(VAR_9, VAR_4,
         &VAR_12);
  if (VAR_11)
   goto out;

  VAR_12 |= VAR_5;
  VAR_11 = VAR_10->ops.write_reg(VAR_9, VAR_4,
          VAR_12);
  if (VAR_11)
   goto out;


  VAR_11 = VAR_10->ops.write_reg(VAR_9, VAR_6, 0);
  if (VAR_11)
   goto out;


  VAR_11 = FUNC_0(VAR_9, VAR_2,
          VAR_3,
          &VAR_12);
  if (VAR_11)
   goto out;

  VAR_12 |= VAR_1 |
       VAR_0;
  VAR_11 = FUNC_1(VAR_9, VAR_2,
      VAR_3,
      VAR_12);
 } else {

  VAR_11 = FUNC_0(VAR_9, VAR_2,
          VAR_3,
          &VAR_12);
  if (VAR_11)
   goto out;

  VAR_12 &= ~(VAR_1 |
         VAR_0);
  VAR_11 = FUNC_1(VAR_9, VAR_2,
           VAR_3,
           VAR_12);
 }

out:
 return VAR_11;
}
