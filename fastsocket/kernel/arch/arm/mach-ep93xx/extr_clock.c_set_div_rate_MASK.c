
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int enable_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct clk*,unsigned long,int*,int*,int*,int*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_3, unsigned long VAR_4)
{
 int VAR_5, VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 u32 VAR_10;

 VAR_5 = FUNC_1(VAR_3, VAR_4, &VAR_6, &VAR_7, &VAR_8, &VAR_9);
 if (VAR_5)
  return VAR_5;


 VAR_10 = FUNC_0(VAR_3->enable_reg);
 VAR_10 &= ~0x7fff;


 VAR_10 |= (VAR_7 ? VAR_0 : 0) |
  (VAR_6 ? VAR_2 : 0) |
  (VAR_8 << VAR_1) | VAR_9;
 FUNC_2(VAR_10, VAR_3->enable_reg);
 return 0;
}
