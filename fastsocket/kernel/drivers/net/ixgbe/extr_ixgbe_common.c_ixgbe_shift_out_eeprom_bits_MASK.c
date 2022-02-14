
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (struct ixgbe_hw*,int*) ;
 int FUNC_4 (struct ixgbe_hw*,int*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct ixgbe_hw *VAR_2, u16 VAR_3,
                                        u16 VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_0(VAR_2, VAR_0);





 VAR_6 = 0x01 << (VAR_4 - 1);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {







  if (VAR_3 & VAR_6)
   VAR_5 |= VAR_1;
  else
   VAR_5 &= ~VAR_1;

  FUNC_2(VAR_2, VAR_0, VAR_5);
  FUNC_1(VAR_2);

  FUNC_5(1);

  FUNC_4(VAR_2, &VAR_5);
  FUNC_3(VAR_2, &VAR_5);





  VAR_6 = VAR_6 >> 1;
 }


 VAR_5 &= ~VAR_1;
 FUNC_2(VAR_2, VAR_0, VAR_5);
 FUNC_1(VAR_2);
}
