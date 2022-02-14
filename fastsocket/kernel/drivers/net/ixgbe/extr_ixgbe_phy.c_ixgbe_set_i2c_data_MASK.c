
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
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_3 (struct ixgbe_hw*,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_6, u32 *VAR_7, bool VAR_8)
{
 s32 VAR_9 = 0;

 if (VAR_8)
  *VAR_7 |= VAR_2;
 else
  *VAR_7 &= ~VAR_2;

 FUNC_2(VAR_6, VAR_1, *VAR_7);
 FUNC_1(VAR_6);


 FUNC_5(VAR_4 + VAR_3 + VAR_5);


 *VAR_7 = FUNC_0(VAR_6, VAR_1);
 if (VAR_8 != FUNC_4(VAR_7)) {
  VAR_9 = VAR_0;
  FUNC_3(VAR_6, "Error - I2C data was not set to %X.\n", VAR_8);
 }

 return VAR_9;
}
