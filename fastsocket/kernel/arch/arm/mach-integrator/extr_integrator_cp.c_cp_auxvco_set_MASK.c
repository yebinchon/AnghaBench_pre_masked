
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct icst525_vco {int v; int r; int s; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct clk *VAR_2, struct icst525_vco VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_0) & ~0x7ffff;
 VAR_4 |= VAR_3.v | (VAR_3.r << 9) | (VAR_3.s << 16);

 FUNC_1(0xa05f, VAR_1);
 FUNC_1(VAR_4, VAR_0);
 FUNC_1(0, VAR_1);
}
