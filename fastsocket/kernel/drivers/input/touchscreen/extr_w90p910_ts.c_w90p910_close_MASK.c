
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w90p910_ts {int clk; int timer; int lock; int ts_reg; int state; } ;
struct input_dev {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct w90p910_ts* FUNC_4 (struct input_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct input_dev *VAR_6)
{
 struct w90p910_ts *VAR_7 = FUNC_4(VAR_6);
 unsigned long VAR_8;



 FUNC_5(&VAR_7->lock);

 VAR_7->state = VAR_4;

 VAR_8 = FUNC_0(VAR_7->ts_reg);
 VAR_8 &= ~(VAR_3 | VAR_0 | VAR_1 | VAR_5 | VAR_2);
 FUNC_1(VAR_8, VAR_7->ts_reg);

 FUNC_6(&VAR_7->lock);


 FUNC_3(&VAR_7->timer);


 FUNC_2(VAR_7->clk);
}
