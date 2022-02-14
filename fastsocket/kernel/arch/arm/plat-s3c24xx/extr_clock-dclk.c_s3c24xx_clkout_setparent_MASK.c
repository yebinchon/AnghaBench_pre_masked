
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {struct clk* parent; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 struct clk VAR_9 ;
 struct clk VAR_10 ;
 struct clk VAR_11 ;
 struct clk VAR_12 ;
 struct clk VAR_13 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 struct clk VAR_14 ;
 struct clk VAR_15 ;
 struct clk VAR_16 ;
 struct clk VAR_17 ;

__attribute__((used)) static int FUNC_1(struct clk *VAR_18, struct clk *VAR_19)
{
 unsigned long VAR_20;
 unsigned long VAR_21;



 if (VAR_19 == &VAR_11)
  VAR_21 = VAR_5;
 else if (VAR_19 == &VAR_13)
  VAR_21 = VAR_7;
 else if (VAR_19 == &VAR_9)
  VAR_21 = VAR_2;
 else if (VAR_19 == &VAR_10)
  VAR_21 = VAR_3;
 else if (VAR_19 == &VAR_12)
  VAR_21 = VAR_6;
 else if (VAR_18 == &VAR_14 && VAR_19 == &VAR_16)
  VAR_21 = VAR_1;
 else if (VAR_18 == &VAR_15 && VAR_19 == &VAR_17)
  VAR_21 = VAR_1;
 else
  return -VAR_0;

 VAR_18->parent = VAR_19;

 if (VAR_18 == &VAR_14)
  VAR_20 = VAR_4;
 else {
  VAR_21 <<= 4;
  VAR_20 = VAR_8;
 }

 FUNC_0(VAR_20, VAR_21);
 return 0;
}
