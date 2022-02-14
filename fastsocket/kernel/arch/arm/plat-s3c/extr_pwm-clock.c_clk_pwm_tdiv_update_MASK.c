
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct pwm_tdiv_clk {TYPE_1__ clk; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 unsigned long FUNC_3 (struct pwm_tdiv_clk*) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static void FUNC_6(struct pwm_tdiv_clk *VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_0);
 unsigned long VAR_4 = FUNC_3(VAR_2);
 unsigned long VAR_5;
 unsigned long VAR_6 = FUNC_0(VAR_2->clk.id);

 FUNC_5(VAR_5);

 VAR_3 = FUNC_1(VAR_0);
 VAR_3 &= ~(VAR_1 << VAR_6);
 VAR_3 |= VAR_4 << VAR_6;
 FUNC_2(VAR_3, VAR_0);

 FUNC_4(VAR_5);
}
