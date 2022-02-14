
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {struct clk* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 struct clk VAR_4 ;
 struct clk VAR_5 ;
 struct clk VAR_6 ;
 struct clk VAR_7 ;
 struct clk VAR_8 ;
 struct clk VAR_9 ;
 struct clk VAR_10 ;
 struct clk VAR_11 ;
 struct clk VAR_12 ;
 struct clk* VAR_13 ;
 struct clk VAR_14 ;
 struct clk* VAR_15 ;
 struct clk* VAR_16 ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_17, struct clk *VAR_18)
{
 u32 VAR_19;

 VAR_19 = FUNC_0(VAR_0) & ~VAR_1;

 if (VAR_18 == &VAR_5)
  VAR_19 |= 0 << VAR_2;
 else if (VAR_18 == &VAR_8)
  VAR_19 |= 1 << VAR_2;
 else if (VAR_18 == &VAR_4)
  VAR_19 |= 2 << VAR_2;
 else if (VAR_18 == VAR_11.parent)
  VAR_19 |= 3 << VAR_2;
 else if (VAR_18 == VAR_14.parent)
  VAR_19 |= 4 << VAR_2;
 else if (VAR_18 == &VAR_11)
  VAR_19 |= 5 << VAR_2;
 else if (VAR_18 == &VAR_14)
  VAR_19 |= 6 << VAR_2;
 else if (VAR_18 == &VAR_7)
  VAR_19 |= 7 << VAR_2;
 else if (VAR_18 == &VAR_9)
  VAR_19 |= 8 << VAR_2;
 else if (VAR_18 == &VAR_10)
  VAR_19 |= 9 << VAR_2;
 else if (VAR_18 == &VAR_13[0])
  VAR_19 |= 0xA << VAR_2;
 else if (VAR_18 == &VAR_13[1])
  VAR_19 |= 0xB << VAR_2;
 else if (VAR_18 == &VAR_13[2])
  VAR_19 |= 0xC << VAR_2;
 else if (VAR_18 == &VAR_13[3])
  VAR_19 |= 0xD << VAR_2;
 else if (VAR_18 == &VAR_15[0])
  VAR_19 |= 0xE << VAR_2;
 else if (VAR_18 == &VAR_15[1])
  VAR_19 |= 0xF << VAR_2;
 else if (VAR_18 == &VAR_12)
  VAR_19 |= 0x10 << VAR_2;
 else if (VAR_18 == &VAR_16[0])
  VAR_19 |= 0x14 << VAR_2;
 else if (VAR_18 == &VAR_6)
  VAR_19 |= 0x15 << VAR_2;
 else
  return -VAR_3;

 FUNC_1(VAR_19, VAR_0);

 return 0;
}
