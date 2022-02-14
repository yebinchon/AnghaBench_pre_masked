
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ (* read_posted ) (struct ixgbe_hw*,int*,int) ;scalar_t__ (* write_posted ) (struct ixgbe_hw*,int*,int) ;} ;
struct ixgbe_mbx_info {TYPE_1__ ops; } ;
struct TYPE_4__ {int addr; } ;
struct ixgbe_hw {TYPE_2__ mac; struct ixgbe_mbx_info mbx; } ;
typedef scalar_t__ s32 ;
typedef int msgbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int*,int ,int) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int*,int) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int*,int) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_3, u32 VAR_4, u8 *VAR_5,
         u32 VAR_6)
{
 struct ixgbe_mbx_info *VAR_7 = &VAR_3->mbx;
 u32 VAR_8[3];
 u8 *VAR_9 = (u8 *)(&VAR_8[1]);
 s32 VAR_10;

 FUNC_2(VAR_8, 0, sizeof(VAR_8));
 VAR_8[0] = VAR_0;
 FUNC_1(VAR_9, VAR_5, 6);
 VAR_10 = VAR_7->ops.write_posted(VAR_3, VAR_8, 3);

 if (!VAR_10)
  VAR_10 = VAR_7->ops.read_posted(VAR_3, VAR_8, 3);

 VAR_8[0] &= ~VAR_1;


 if (!VAR_10 &&
     (VAR_8[0] == (VAR_0 | VAR_2)))
  FUNC_0(VAR_3, VAR_3->mac.addr);

 return VAR_10;
}
