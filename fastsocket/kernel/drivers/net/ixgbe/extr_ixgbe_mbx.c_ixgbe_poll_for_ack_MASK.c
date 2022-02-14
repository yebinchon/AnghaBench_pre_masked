
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {scalar_t__ (* check_for_ack ) (struct ixgbe_hw*,int ) ;} ;
struct ixgbe_mbx_info {int timeout; int usec_delay; TYPE_1__ ops; } ;
struct ixgbe_hw {struct ixgbe_mbx_info mbx; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_1, u16 VAR_2)
{
 struct ixgbe_mbx_info *VAR_3 = &VAR_1->mbx;
 int VAR_4 = VAR_3->timeout;

 if (!VAR_4 || !VAR_3->ops.check_for_ack)
  goto out;

 while (VAR_4 && VAR_3->ops.check_for_ack(VAR_1, VAR_2)) {
  VAR_4--;
  if (!VAR_4)
   break;
  FUNC_1(VAR_3->usec_delay);
 }

out:
 return VAR_4 ? 0 : VAR_0;
}
