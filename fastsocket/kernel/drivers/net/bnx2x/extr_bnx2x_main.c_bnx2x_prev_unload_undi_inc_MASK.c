
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct bnx2x*,int ) ;
 int FUNC_6 (struct bnx2x*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct bnx2x *VAR_0, u8 VAR_1, u8 VAR_2)
{
 u16 VAR_3, VAR_4;
 u32 VAR_5 = FUNC_5(VAR_0, FUNC_3(VAR_1));

 VAR_3 = FUNC_4(VAR_5) + VAR_2;
 VAR_4 = FUNC_1(VAR_5) + VAR_2;

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 FUNC_6(VAR_0, FUNC_3(VAR_1), VAR_5);

 FUNC_0("UNDI producer [%d] rings bd -> 0x%04x, rcq -> 0x%04x\n",
         VAR_1, VAR_4, VAR_3);
}
