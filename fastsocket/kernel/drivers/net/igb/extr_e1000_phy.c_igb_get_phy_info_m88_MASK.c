
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int (* read_reg ) (struct e1000_hw*,int ,int*) ;int (* get_cable_length ) (struct e1000_hw*) ;} ;
struct e1000_phy_info {scalar_t__ media_type; int polarity_correction; int is_mdix; void* remote_rx; void* local_rx; int cable_length; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


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
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*,int,int ,int*) ;
 int FUNC_3 (struct e1000_hw*,int ,int*) ;
 int FUNC_4 (struct e1000_hw*,int ,int*) ;
 int FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*,int ,int*) ;

s32 FUNC_7(struct e1000_hw *VAR_15)
{
 struct e1000_phy_info *VAR_16 = &VAR_15->phy;
 s32 VAR_17;
 u16 VAR_18;
 bool VAR_19;

 if (VAR_16->media_type != VAR_14) {
  FUNC_0("Phy info is only valid for copper media\n");
  VAR_17 = -VAR_1;
  goto out;
 }

 VAR_17 = FUNC_2(VAR_15, 1, 0, &VAR_19);
 if (VAR_17)
  goto out;

 if (!VAR_19) {
  FUNC_0("Phy info is only valid if link is up\n");
  VAR_17 = -VAR_1;
  goto out;
 }

 VAR_17 = VAR_16->ops.read_reg(VAR_15, VAR_2, &VAR_18);
 if (VAR_17)
  goto out;

 VAR_16->polarity_correction = (VAR_18 & VAR_4)
       ? 1 : 0;

 VAR_17 = FUNC_1(VAR_15);
 if (VAR_17)
  goto out;

 VAR_17 = VAR_16->ops.read_reg(VAR_15, VAR_3, &VAR_18);
 if (VAR_17)
  goto out;

 VAR_16->is_mdix = (VAR_18 & VAR_6) ? 1 : 0;

 if ((VAR_18 & VAR_7) == VAR_5) {
  VAR_17 = VAR_16->ops.get_cable_length(VAR_15);
  if (VAR_17)
   goto out;

  VAR_17 = VAR_16->ops.read_reg(VAR_15, VAR_8, &VAR_18);
  if (VAR_17)
   goto out;

  VAR_16->local_rx = (VAR_18 & VAR_9)
    ? VAR_12
    : VAR_11;

  VAR_16->remote_rx = (VAR_18 & VAR_10)
     ? VAR_12
     : VAR_11;
 } else {

  VAR_16->cable_length = VAR_0;
  VAR_16->local_rx = VAR_13;
  VAR_16->remote_rx = VAR_13;
 }

out:
 return VAR_17;
}
