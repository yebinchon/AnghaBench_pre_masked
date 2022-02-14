
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct ixgbe_hw*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_4, u16 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7 = VAR_5;
 u32 VAR_8 = VAR_5 << 5;
 u32 VAR_9 = 0;
 u32 VAR_10 = 200;
 u32 VAR_11;

 if (VAR_7 == VAR_1)
  VAR_9 = VAR_2;

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {




  if (FUNC_2(VAR_4))
   return VAR_0;

  VAR_6 = FUNC_0(VAR_4, VAR_3);
  if (!(VAR_6 & (VAR_8 | VAR_7 | VAR_9))) {
   VAR_6 |= VAR_7;
   FUNC_1(VAR_4, VAR_3, VAR_6);
   FUNC_3(VAR_4);
   break;
  } else {






   FUNC_3(VAR_4);
   FUNC_4(5000, 10000);
  }
 }







 if (VAR_11 >= VAR_10) {
  VAR_6 = FUNC_0(VAR_4, VAR_3);
  if (VAR_6 & (VAR_8 | VAR_9)) {
   if (FUNC_2(VAR_4))
    return VAR_0;

   VAR_6 |= VAR_7;
   FUNC_1(VAR_4, VAR_3, VAR_6);
   FUNC_3(VAR_4);
  }
 }

 FUNC_4(5000, 10000);
 return 0;
}
