
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int enable_bit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct clk *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 VAR_4 &= ~(VAR_1 << VAR_3->enable_bit);
 FUNC_1(VAR_4, VAR_2, VAR_0);
}
