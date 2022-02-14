
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w90p910_ts {scalar_t__ state; int lock; scalar_t__ ts_reg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct w90p910_ts*,int) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct w90p910_ts *VAR_3 = (struct w90p910_ts *) VAR_2;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);

 if (VAR_3->state == VAR_1 &&
     !(FUNC_0(VAR_3->ts_reg + 0x04) & VAR_0)) {

  FUNC_3(VAR_3, 0);
 }

 FUNC_2(&VAR_3->lock, VAR_4);
}
