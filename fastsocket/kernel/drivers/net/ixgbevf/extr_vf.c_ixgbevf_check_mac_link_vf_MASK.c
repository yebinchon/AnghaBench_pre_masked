
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ (* read ) (struct ixgbe_hw*,int*,int) ;int (* check_for_rst ) (struct ixgbe_hw*) ;} ;
struct ixgbe_mbx_info {int timeout; TYPE_1__ ops; } ;
struct ixgbe_mac_info {int get_link_status; } ;
struct ixgbe_hw {struct ixgbe_mac_info mac; struct ixgbe_mbx_info mbx; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int*,int) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_8,
         ixgbe_link_speed *VAR_9,
         bool *VAR_10,
         bool VAR_11)
{
 struct ixgbe_mbx_info *VAR_12 = &VAR_8->mbx;
 struct ixgbe_mac_info *VAR_13 = &VAR_8->mac;
 s32 VAR_14 = 0;
 u32 VAR_15;
 u32 VAR_16 = 0;


 if (!VAR_12->ops.check_for_rst(VAR_8) || !VAR_12->timeout)
  VAR_13->get_link_status = 1;

 if (!VAR_13->get_link_status)
  goto out;


 VAR_15 = FUNC_0(VAR_8, VAR_5);
 if (!(VAR_15 & VAR_1))
  goto out;

 switch (VAR_15 & VAR_0) {
 case 129:
  *VAR_9 = VAR_3;
  break;
 case 128:
  *VAR_9 = VAR_4;
  break;
 case 130:
  *VAR_9 = VAR_2;
  break;
 }



 if (VAR_12->ops.read(VAR_8, &VAR_16, 1))
  goto out;

 if (!(VAR_16 & VAR_6)) {

  if (VAR_16 & VAR_7)
   VAR_14 = -1;
  goto out;
 }


 if (!VAR_12->timeout) {
  VAR_14 = -1;
  goto out;
 }



 VAR_13->get_link_status = 0;

out:
 *VAR_10 = !VAR_13->get_link_status;
 return VAR_14;
}
