
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct clk VAR_5 ;
 struct clk* FUNC_1 (int) ;

__attribute__((used)) static struct clk *FUNC_2(struct clk *VAR_6)
{
 u32 VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_0);
 VAR_8 = FUNC_0(VAR_2);

 if (VAR_7 & VAR_1) {
  u8 VAR_9;
  VAR_9 = (VAR_8 & VAR_3) >>
   VAR_4;
  return FUNC_1(VAR_9);
 }
 return &VAR_5;
}
