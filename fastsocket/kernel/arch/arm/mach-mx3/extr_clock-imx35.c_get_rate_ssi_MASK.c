
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 () ;
 unsigned long FUNC_2 () ;

__attribute__((used)) static unsigned long FUNC_3(struct clk *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_0 + VAR_1);
 unsigned long VAR_4, VAR_5, VAR_6;

 if (VAR_3 & (1 << 6))
  VAR_6 = FUNC_1();
 else
  VAR_6 = FUNC_2();

 switch (VAR_2->id) {
 default:
 case 0:
  VAR_4 = VAR_3 & 0x3f;
  VAR_5 = (VAR_3 >> 24) & 0x7;
  break;
 case 1:
  VAR_4 = (VAR_3 >> 8) & 0x3f;
  VAR_5 = (VAR_3 >> 27) & 0x7;
  break;
 }

 return VAR_6 / ((VAR_4 + 1) * (VAR_5 + 1));
}
