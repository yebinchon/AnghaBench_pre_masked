
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_5)
{
 s32 VAR_6 = -VAR_2;
 u32 VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_8 = FUNC_0(VAR_0);
  if (VAR_8 & VAR_1) {
   VAR_6 = VAR_4;
   break;
  }
  FUNC_1(5);
 }

 return VAR_6;
}
