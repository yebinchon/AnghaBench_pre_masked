
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 s32 VAR_7 = VAR_2;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = FUNC_0(VAR_4, VAR_0);
  if (VAR_6 & VAR_1) {
   VAR_7 = 0;
   break;
  }
  FUNC_1(5);
 }
 return VAR_7;
}
