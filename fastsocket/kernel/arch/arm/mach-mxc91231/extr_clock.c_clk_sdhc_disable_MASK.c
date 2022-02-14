
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct clk *VAR_6)
{
 u32 VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_0);
 VAR_8 = FUNC_0(VAR_3);
 switch (VAR_6->id) {
 case 0:
  VAR_7 &= ~(0x7 << VAR_1);
  VAR_8 &= ~(0x1 << VAR_4);
  break;
 case 1:
  VAR_7 &= ~(0x7 << VAR_2);
  VAR_8 &= ~(0x1 << VAR_5);
  break;
 }
 FUNC_1(VAR_7, VAR_0);
 FUNC_1(VAR_8, VAR_3);
}
