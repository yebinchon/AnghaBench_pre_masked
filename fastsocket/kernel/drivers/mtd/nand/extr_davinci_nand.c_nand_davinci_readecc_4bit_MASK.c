
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct davinci_nand_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const FUNC_0 (struct davinci_nand_info*,int ) ;

__attribute__((used)) static void
FUNC_1(struct davinci_nand_info *VAR_4, u32 VAR_5[4])
{
 const u32 VAR_6 = 0x03ff03ff;

 VAR_5[0] = FUNC_0(VAR_4, VAR_0) & VAR_6;
 VAR_5[1] = FUNC_0(VAR_4, VAR_1) & VAR_6;
 VAR_5[2] = FUNC_0(VAR_4, VAR_2) & VAR_6;
 VAR_5[3] = FUNC_0(VAR_4, VAR_3) & VAR_6;
}
