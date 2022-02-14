
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_tdiv_clk {unsigned long divisor; } ;
struct clk {int id; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct pwm_tdiv_clk*) ;
 unsigned long FUNC_4 (struct clk*,unsigned long) ;
 int FUNC_5 (unsigned long) ;
 struct pwm_tdiv_clk* FUNC_6 (struct clk*) ;

__attribute__((used)) static int FUNC_7(struct clk *VAR_3, unsigned long VAR_4)
{
 struct pwm_tdiv_clk *VAR_5 = FUNC_6(VAR_3);
 unsigned long VAR_6 = FUNC_1(VAR_1);
 unsigned long VAR_7 = FUNC_2(VAR_3->parent);
 unsigned long VAR_8;

 VAR_6 >>= FUNC_0(VAR_3->id);
 VAR_6 &= VAR_2;

 VAR_4 = FUNC_4(VAR_3, VAR_4);
 VAR_8 = VAR_7 / VAR_4;

 if (VAR_8 > 16)
  return -VAR_0;

 VAR_5->divisor = VAR_8;




 if (!FUNC_5(VAR_6))
  FUNC_3(VAR_5);

 return 0;
}
