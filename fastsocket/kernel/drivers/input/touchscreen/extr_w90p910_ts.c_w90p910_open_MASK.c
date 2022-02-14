
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w90p910_ts {scalar_t__ ts_reg; int state; int clk; } ;
struct input_dev {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;
 int FUNC_2 (int ) ;
 struct w90p910_ts* FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct input_dev *VAR_9)
{
 struct w90p910_ts *VAR_10 = FUNC_3(VAR_9);
 unsigned long VAR_11;


 FUNC_2(VAR_10->clk);

 FUNC_1(VAR_4, VAR_10->ts_reg);
 FUNC_4(1);
 FUNC_1(VAR_3, VAR_10->ts_reg);
 FUNC_4(1);


 VAR_11 = FUNC_0(VAR_10->ts_reg + 0x04);
 FUNC_1(VAR_11 & VAR_6, VAR_10->ts_reg + 0x04);
 FUNC_1(VAR_0, VAR_10->ts_reg + 0x08);

 VAR_10->state = VAR_7;
 FUNC_5();


 VAR_11 = FUNC_0(VAR_10->ts_reg);
 VAR_11 |= VAR_5 | VAR_1 | VAR_2 | VAR_8;
 FUNC_1(VAR_11, VAR_10->ts_reg);

 return 0;
}
