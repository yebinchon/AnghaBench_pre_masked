
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cr_regs {int cam; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(struct cr_regs *VAR_1)
{
 u32 VAR_2 = VAR_1->cam & VAR_0;
 u32 VAR_3 = FUNC_0(VAR_1->cam & VAR_2);

 return VAR_1->cam & VAR_3;
}
