
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int,int,int ,int ,int ,int ) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11;
 s32 VAR_12 = VAR_0;







 VAR_11 = FUNC_0(VAR_8, VAR_5);
 if ((!!(VAR_11 & VAR_6) == 0) ||
     (!!(VAR_11 & VAR_7) == 1))
  goto out;

 VAR_9 = FUNC_0(VAR_8, VAR_1);
 VAR_10 = FUNC_0(VAR_8, VAR_4);

 VAR_12 = FUNC_1(VAR_8, VAR_9,
          VAR_10, VAR_3,
          VAR_2,
          VAR_3,
          VAR_2);

out:
 return VAR_12;
}
