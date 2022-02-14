
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 unsigned long FUNC_2 (int ) ;
 unsigned long FUNC_3 (struct clk*,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct clk *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = FUNC_2(VAR_3->parent);
 u32 VAR_6;
 u32 VAR_7;

 if (VAR_4 < VAR_5 / (VAR_2 + 1))
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_3, VAR_4);
 VAR_6 = FUNC_2(VAR_3->parent) / VAR_4;

 VAR_7 = FUNC_0(VAR_1);
 VAR_7 &= ~VAR_2;
 VAR_7 |= (VAR_6 - 1);
 FUNC_1(VAR_7, VAR_1);

 return 0;

}
