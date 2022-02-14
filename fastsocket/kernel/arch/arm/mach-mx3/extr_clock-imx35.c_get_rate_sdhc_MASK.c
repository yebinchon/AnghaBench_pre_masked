
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 () ;
 unsigned long FUNC_3 () ;

__attribute__((used)) static unsigned long FUNC_4(struct clk *VAR_2)
{
 unsigned long VAR_3 = FUNC_0(VAR_0 + VAR_1);
 unsigned long VAR_4, VAR_5;

 if (VAR_3 & (1 << 6))
  VAR_5 = FUNC_2();
 else
  VAR_5 = FUNC_3();

 switch (VAR_2->id) {
 default:
 case 0:
  VAR_4 = VAR_3 & 0x3f;
  break;
 case 1:
  VAR_4 = (VAR_3 >> 8) & 0x3f;
  break;
 case 2:
  VAR_4 = (VAR_3 >> 16) & 0x3f;
  break;
 }

 return VAR_5 / FUNC_1(VAR_4);
}
