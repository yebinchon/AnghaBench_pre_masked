
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w90p910_ts {int state; int ts_reg; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct w90p910_ts *VAR_7)
{
 unsigned long VAR_8;

 VAR_8 = FUNC_0(VAR_7->ts_reg);
 VAR_8 &= ~(VAR_1 | VAR_2 | VAR_3 | VAR_0);
 VAR_8 |= VAR_4 | VAR_6;
 FUNC_1(VAR_8, VAR_7->ts_reg);

 VAR_7->state = VAR_5;
}
