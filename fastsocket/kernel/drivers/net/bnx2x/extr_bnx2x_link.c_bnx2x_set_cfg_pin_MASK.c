
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bnx2x*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct bnx2x*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_3, u32 VAR_4, u32 VAR_5)
{
 if (VAR_4 == VAR_2)
  return;
 if (VAR_4 >= VAR_0) {
  FUNC_0(VAR_3, VAR_4 - VAR_0, VAR_5);
 } else {
  u8 VAR_6 = (VAR_4 - VAR_1) & 0x3;
  u8 VAR_7 = (VAR_4 - VAR_1) >> 2;
  FUNC_1(VAR_3, VAR_6, (u8)VAR_5, VAR_7);
 }
}
