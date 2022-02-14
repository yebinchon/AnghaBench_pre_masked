
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,char*,int) ;
 int FUNC_2 (struct ixgbe_hw*,int *) ;
 int FUNC_3 (struct ixgbe_hw*,int *) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*,int *,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_4, bool VAR_5)
{
 s32 VAR_6;
 u32 VAR_7 = FUNC_0(VAR_4, VAR_1);

 VAR_6 = FUNC_4(VAR_4, &VAR_7, VAR_5);
 if (VAR_6 == 0) {
  FUNC_3(VAR_4, &VAR_7);


  FUNC_5(VAR_2);

  FUNC_2(VAR_4, &VAR_7);




  FUNC_5(VAR_3);
 } else {
  VAR_6 = VAR_0;
  FUNC_1(VAR_4, "I2C data was not set to %X\n", VAR_5);
 }

 return VAR_6;
}
