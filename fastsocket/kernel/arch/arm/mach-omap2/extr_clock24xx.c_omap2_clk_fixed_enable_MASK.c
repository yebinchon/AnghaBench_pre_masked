
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int enable_bit; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 struct clk VAR_6 ;
 struct clk VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int ,int,int ) ;

__attribute__((used)) static int FUNC_4(struct clk *VAR_8)
{
 u32 VAR_9, VAR_10;

 VAR_10 = VAR_2 << VAR_8->enable_bit;

 VAR_9 = FUNC_1(VAR_5, VAR_0);

 if ((VAR_9 & VAR_10) == VAR_10)
  return 0;

 VAR_9 &= ~VAR_10;
 VAR_9 |= VAR_10;
 FUNC_2(VAR_9, VAR_5, VAR_0);

 if (VAR_8 == &VAR_7)
  VAR_9 = VAR_4;
 else if (VAR_8 == &VAR_6)
  VAR_9 = VAR_3;

 FUNC_3(FUNC_0(VAR_5, VAR_1), VAR_9,
        VAR_8->name);





 return 0;
}
