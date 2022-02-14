
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (struct bnx2x*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_3, u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;


 if (VAR_4 > 31) {
  FUNC_0(VAR_2, "Invalid EPIO pin %d to set\n", VAR_4);
  return;
 }
 FUNC_0(VAR_2, "Setting EPIO pin %d to %d\n", VAR_4, VAR_5);
 VAR_6 = 1 << VAR_4;

 VAR_7 = FUNC_1(VAR_3, VAR_1);
 if (VAR_5)
  VAR_7 |= VAR_6;
 else
  VAR_7 &= ~VAR_6;

 FUNC_2(VAR_3, VAR_1, VAR_7);


 VAR_8 = FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_3, VAR_0, VAR_8 | VAR_6);
}
