
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bnx2x*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_5)
{
 u32 VAR_6 = 0x1400;


 FUNC_1(VAR_5, VAR_0 + VAR_1,
        0xd3ffff7f);

 if (FUNC_0(VAR_5)) {
  VAR_6 |= VAR_3;
  VAR_6 |= VAR_4;
 }

 FUNC_1(VAR_5, VAR_0 + VAR_2, VAR_6);
}
