
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w90p910_ts {int state; scalar_t__ ts_reg; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct w90p910_ts *VAR_8)
{
 unsigned long VAR_9;

 FUNC_1(VAR_3, VAR_8->ts_reg + 0x04);
 VAR_9 = FUNC_0(VAR_8->ts_reg);
 VAR_9 &= ~(VAR_4 | VAR_6 | VAR_7);
 VAR_9 |= VAR_2 | VAR_1 | VAR_0;
 FUNC_1(VAR_9, VAR_8->ts_reg);

 VAR_8->state = VAR_5;
}
