
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,scalar_t__) ;
 int FUNC_5 (int,int) ;

s32 FUNC_6(struct ixgbe_hw *VAR_2, u16 VAR_3)
{
 u32 VAR_4 = 0;
 u32 VAR_5 = VAR_3;
 u32 VAR_6 = VAR_3 << 5;
 u32 VAR_7 = 200;
 u32 VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {




  if (FUNC_2(VAR_2))
   return VAR_0;

  VAR_4 = FUNC_0(VAR_2, VAR_1);
  if (!(VAR_4 & (VAR_6 | VAR_5))) {
   VAR_4 |= VAR_5;
   FUNC_1(VAR_2, VAR_1, VAR_4);
   FUNC_3(VAR_2);
   return 0;
  } else {

   FUNC_3(VAR_2);
   FUNC_5(5000, 10000);
  }
 }


 if (VAR_4 & (VAR_6 | VAR_5))
  FUNC_4(VAR_2, VAR_4 & (VAR_6 | VAR_5));

 FUNC_5(5000, 10000);
 return VAR_0;
}
