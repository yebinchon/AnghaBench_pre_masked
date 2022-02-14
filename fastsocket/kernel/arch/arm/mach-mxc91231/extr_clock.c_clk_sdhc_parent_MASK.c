
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk {int id; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 struct clk VAR_5 ;
 struct clk VAR_6 ;
 struct clk VAR_7 ;

__attribute__((used)) static struct clk *FUNC_2(struct clk *VAR_8)
{
 u32 VAR_9;
 u8 VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_9 = FUNC_1(VAR_0);

 switch (VAR_8->id) {
 case 0:
  VAR_11 = VAR_1;
  VAR_12 = VAR_2;
  break;
 case 1:
  VAR_11 = VAR_3;
  VAR_12 = VAR_4;
  break;
 default:
  FUNC_0();
 }
 VAR_10 = (VAR_9 & VAR_11) >> VAR_12;

 switch (VAR_10) {
 case 0:
  return &VAR_5;
 case 1:
  return &VAR_6;
 }
 return &VAR_7;
}
