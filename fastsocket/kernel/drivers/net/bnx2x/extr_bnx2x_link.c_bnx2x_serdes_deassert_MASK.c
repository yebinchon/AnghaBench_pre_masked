
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bnx2x*,scalar_t__,int) ;
 int VAR_6 ;
 int FUNC_2 (struct bnx2x*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct bnx2x *VAR_7, u8 VAR_8)
{
 u32 VAR_9;

 FUNC_0(VAR_4, "bnx2x_serdes_deassert\n");

 VAR_9 = VAR_6 << (VAR_8*16);


 FUNC_1(VAR_7, VAR_1 + VAR_2, VAR_9);
 FUNC_3(500);
 FUNC_1(VAR_7, VAR_1 + VAR_3, VAR_9);

 FUNC_2(VAR_7, VAR_8);

 FUNC_1(VAR_7, VAR_5 + VAR_8*0x10,
        VAR_0);
}
